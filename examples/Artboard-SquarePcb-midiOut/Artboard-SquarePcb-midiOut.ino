/*
  <><><><><><><><><><><><><><><><><><><>
  --------------------------------------
  Titolo progetto: audio workshop
  Descrizione: solo midi 0ut

  by Daniele Murgia © 2019-20 MIT License
    sgtmurgia@gmail.com
  --------------------------------------
  <><><><><><><><><><><><><><><><><><><>


pots:

octave 1:      artboard.pot_2(3)
noise:         artboard.pot_1(3)
mix:           artboard.pot_1(1)
octave 2:      artboard.pot_2(4)
detune:        artboard.pot_1(0)
attack:        artboard.pot_1(4)
decay:         artboard.pot_1(6)
filter freq:   artboard.pot_1(14)
filter reso:   artboard.pot_1(13)
lfo attack:    artboard.pot_1(8)
lfo decay:     artboard.pot_1(9)
osc 1 shape:   artboard.pot_1(5)
filter octave: artboard.pot_1(12)
filter pulse:  artboard.pot_2(1)
lfo sustain:   artboard.pot_1(10)
lfo release:   artboard.pot_1(11)
lfo freq:      artboard.pot_1(15)
lfo mod:       artboard.pot_2(0)
volume:        artboard.pot_2(9)
env mod:       artboard.pot_1(2)
lfo shape:     artboard.pot_2(2)
*/

#include <Artboard_2.h>
Artboard_2 artboard;  // Istanza
#include <Bounce.h>



const int touchTr = 7000; // Soglia per attivare la nota
const int minVelocity = 0;
const int maxVelocity = 127;
const int baseNote = 36 ; // Nota base, inizialmente Do3 (60)

bool noteOnState[12] = {false}; // Stato delle note, inizializzato a false per tutte le note


const int THRESHOLD = 2;        // Soglia minima di variazione da superare per inviare un nuovo messaggio MIDI
int prevPotValues[22] = { 0 };  // Array per memorizzare i valori precedenti dei potenziometri



void setup() {
}

void loop() {
  // Ottieni i nuovi valori dai potenziometri
  int potValues[22];
  for (int i = 0; i < 16; i++) {
    potValues[i] = map(artboard.pot_1(i), 0, 1023, 0, 127);  // Rimappa da 0-1023 a 0-127
  }

  potValues[16] = map(artboard.pot_2(0), 0, 1023, 0, 127);
  potValues[17] = map(artboard.pot_2(3), 0, 1023, 0, 127);
  potValues[18] = map(artboard.pot_2(4), 0, 1023, 0, 127);
  potValues[19] = map(artboard.pot_2(1), 0, 1023, 0, 127);
  potValues[20] = map(artboard.pot_2(9), 0, 1023, 0, 127);
  potValues[21] = map(artboard.pot_2(2), 0, 1023, 0, 127);

  for (int i = 0; i < 22; i++) {
    if (abs(potValues[i] - prevPotValues[i]) > THRESHOLD) {
      usbMIDI.sendControlChange(i, potValues[i], 1);  // Canale MIDI 1
      prevPotValues[i] = potValues[i];
    }
  }


    // Ottieni il valore del potenziometro per regolare l'ottava
  int octavePotValue = map(artboard.pot_1(15), 0, 1023, 0, 5);

  for (int i = 0; i < 12; i++) {
    // Check se l'ingresso capacitivo è oltre la soglia
    if (artboard.touch(i) > touchTr) {
      // Calcola la nota in base al potenziometro dell'ottava
      int note = baseNote + i + (octavePotValue * 12);

      // Invia la nota solo se non è già accesa
      if (!noteOnState[i]) {
        int velocity = map(artboard.touch(i), 5600, 65535, minVelocity, maxVelocity);
        Serial.println(velocity);
        usbMIDI.sendNoteOn(note, velocity, 1); // Invia la nota MIDI
        noteOnState[i] = true; // Imposta lo stato della nota su acceso
      }
    } else {
      // Invia il messaggio NoteOff solo se la nota era accesa
      if (noteOnState[i]) {
        int note = baseNote + i + (octavePotValue * 12);
        usbMIDI.sendNoteOff(note, 0, 1); // Rilascia la nota MIDI
        noteOnState[i] = false; // Imposta lo stato della nota su spento
      }
    }
  }

  delay(10); // Aggiungi un piccolo ritardo per evitare il sovraccarico del MIDI
  
}
