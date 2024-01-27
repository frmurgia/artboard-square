 /*
  <><><><><><><><><><><><><><><><><><><>
  --------------------------------------
  Titolo progetto: square synth
  Descrizione: poly synth midi in

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

#include "libs.h" // includiamo la libreria
 Artboard_2 artboard; // Istanza
#include "variables.h" // includiamo il file con tutte le variabili globali
#include "patches.h" // includiamo la libreria
#include "notes.h" // includiamo la libreria


#define DEBUG       1 //attiviamo il debug assegnando un valore
#define Debug if (DEBUG) Serial.print
#define Debugln if (DEBUG) Serial.println

void setup() {
  
  AudioMemory(512);
  Serial.begin(115200);
  sgtl5000_1.enable();
  sgtl5000_1.volume(.7);

//LEDS   

  //creiamo la nostra forma d'onda (ampiezza,frequenza,tipo di oscillatore
    //Voice 1
  voiceMidiA.begin(.3, 440, WAVEFORM_SINE);
  voiceMidiB.begin(.3, 440, WAVEFORM_SAWTOOTH);
  //Voice 1
  voice1a.begin(.3, 440, WAVEFORM_SINE);
  voice1b.begin(.3, 440, WAVEFORM_SAWTOOTH);
  //Voice 2
  voice2a.begin(.3, 440, WAVEFORM_SINE);
  voice2b.begin(.3, 440, WAVEFORM_SAWTOOTH);
  //Voice 3
  voice3a.begin(.3, 440, WAVEFORM_SINE);
  voice3b.begin(.3, 440, WAVEFORM_SAWTOOTH);
  //Voice 4
  voice4a.begin(.3, 440, WAVEFORM_SINE);
  voice4b.begin(.3, 440, WAVEFORM_SAWTOOTH);
  //Voice 5
  voice5a.begin(.3, 440, WAVEFORM_SINE);
  voice5b.begin(.3, 440, WAVEFORM_SAWTOOTH);
  //Voice 6
  voice6a.begin(.3, 440, WAVEFORM_SINE);
  voice6b.begin(.3, 440, WAVEFORM_SAWTOOTH);
  //Voice 7
  voice7a.begin(.3, 440, WAVEFORM_SINE);
  voice7b.begin(.3, 440, WAVEFORM_SAWTOOTH);
  //Voice 8
  voice8a.begin(.3, 440, WAVEFORM_SINE);
  voice8b.begin(.3, 440, WAVEFORM_SAWTOOTH);
  //Voice 9
  voice9a.begin(.3, 440, WAVEFORM_SINE);
  voice9b.begin(.3, 440, WAVEFORM_SAWTOOTH);
  //Voice 10
  voice10a.begin(.3, 440, WAVEFORM_SINE);
  voice10b.begin(.3, 440, WAVEFORM_SAWTOOTH);
  //Voice 11
  voice11a.begin(.3, 440, WAVEFORM_SINE);
  voice11b.begin(.3, 440, WAVEFORM_SAWTOOTH);
  //Voice 12
  voice12a.begin(.3, 440, WAVEFORM_SINE);
  voice12b.begin(.3, 440, WAVEFORM_SAWTOOTH);

  //mix from 0-4
  first4premix.gain(0, .25);
  first4premix.gain(1, .25);
  first4premix.gain(2, .25);
  first4premix.gain(3, .25);
  //mix from 5-8
  mid4premix.gain(0, .25);
  mid4premix.gain(1, .25);
  mid4premix.gain(2, .25);
  mid4premix.gain(3, .25);
  //mix from 9-12
  last4premix.gain(0, .25);
  last4premix.gain(1, .25);
  last4premix.gain(2, .25);
  last4premix.gain(3, .25);
    //mix from 9-12
  Midipremix.gain(0, 0);
  Midipremix.gain(1, .25);
  Midipremix.gain(2, .25);
  Midipremix.gain(3, .25);


  //LFO
  lfo.begin(1, 3, WAVEFORM_SINE);

  vcoOneOct = 1;
  vcoTwoOct = 1;
  deTune = 1;
  
  lfoenvelope.amplitude(1);

  voiceBPulse = false;
 
  mainOutMixer.gain(0, .25);
  mainOutMixer.gain(1, .25);
  mainOutMixer.gain(2, .25);
  mainOutMixer.gain(3, .25);

  Serial.println("Setup complete");

    for(int i=0; i<8; i++){
    
    
    //audio startup
    if(i < 4){
      voice1env.amplitude(.5,1);
      voice1a.frequency(DO);
      delay(200);
      voice1b.frequency(RE);
      delay(200);
      voice1b.frequency(MI);
      delay(200);
      voice1env.amplitude(0,0);
    }
  }

}
float mapfloat(float x, float in_min, float in_max, float out_min, float out_max){
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

// funzione per "smussare" i dati
int getSmooths(int pin){
  int vals[8]; //array that stores 5 readings.
  for(int i = 0; i < 8; i++){
    vals[i] = (pin); //takes 5 readings.
  }
  float smooths = (vals[0] + vals[1] + vals[2] + vals[3] + vals[4] +vals[5]+vals[6]+vals[7]) / 8;
  return smooths;
}


void loop() {
  #include "midi.h" // includiamo la libreria
// ws2812fx.trigger();
    //Volume
  mainVolume = artboard.pot_2(9);
  mainVolume = mainVolume/1023;
  sgtl5000_1.volume(mainVolume);
  tempLineOutLevel = artboard.pot_2(9);
  tempLineOutLevel = map(tempLineOutLevel, 0, 1023, 31, 13);
  sgtl5000_1.lineOutLevel(tempLineOutLevel);



//MAIN 
int lfo_mod=getSmooths(artboard.pot_2(0));
int filter_freq= getSmooths (artboard.pot_1(14));

//  for(int i=0;i<12;i++){
//     Debug(" t");
//     Debug(i);
//     Debug(": ");
//     Debug(artboard.touch(i));
//     }
//     Debugln();
    
  notes();


// OSC 1 OCTAVE
        octOneIndex = (artboard.pot_2(3)/204)+1;
        if(octOneIndex < 5){
          vcoOneOct = octArray[octOneIndex];
        }
    //oct 1 shape
        waveShapeOneIndex = artboard.pot_1(5)/256;
        if(waveShapeOneIndex < 4){
          voiceMidiA.begin(waveShapes[waveShapeOneIndex]);
          voice1a.begin(waveShapes[waveShapeOneIndex]);
          voice2a.begin(waveShapes[waveShapeOneIndex]);
          voice3a.begin(waveShapes[waveShapeOneIndex]);
          voice4a.begin(waveShapes[waveShapeOneIndex]);
          voice5a.begin(waveShapes[waveShapeOneIndex]);
          voice6a.begin(waveShapes[waveShapeOneIndex]);
          voice7a.begin(waveShapes[waveShapeOneIndex]);
          voice8a.begin(waveShapes[waveShapeOneIndex]);
          voice9a.begin(waveShapes[waveShapeOneIndex]);
          voice10a.begin(waveShapes[waveShapeOneIndex]);
          voice11a.begin(waveShapes[waveShapeOneIndex]);
          voice12a.begin(waveShapes[waveShapeOneIndex]);
        }

// OSC 2 OCTAVE
    
        //oct
        octTwoIndex = (artboard.pot_2(4)/204)+1;
        if(octTwoIndex < 5){
          vcoTwoOct = octArray[octTwoIndex];
          
        }
        // OCT 2 shape
       waveShapeTwoIndex = artboard.pot_1(7)/256;
       

        if(waveShapeTwoIndex < 4){
          if(waveShapeTwoIndex == 3){
            voiceBPulse = true;
          }else{
            voiceBPulse = false;
          }          
          voiceMidiB.begin(waveShapes[waveShapeTwoIndex]);
          voice1b.begin(waveShapes[waveShapeTwoIndex]);
          voice2b.begin(waveShapes[waveShapeTwoIndex]);
          voice3b.begin(waveShapes[waveShapeTwoIndex]);
          voice4b.begin(waveShapes[waveShapeTwoIndex]);
          voice5b.begin(waveShapes[waveShapeTwoIndex]);
          voice6b.begin(waveShapes[waveShapeTwoIndex]);
          voice7b.begin(waveShapes[waveShapeTwoIndex]);
          voice8b.begin(waveShapes[waveShapeTwoIndex]);
          voice9b.begin(waveShapes[waveShapeTwoIndex]);
          voice10b.begin(waveShapes[waveShapeTwoIndex]);
          voice11b.begin(waveShapes[waveShapeTwoIndex]);
          voice12b.begin(waveShapes[waveShapeTwoIndex]);
        }

              //LFO shape
        lfoWaveShapeIndex = artboard.pot_2(2)/204.6;
        if(lfoWaveShapeIndex < 5){
          lfo.begin(lfoWaveShapes[lfoWaveShapeIndex]);
          
        }

// filter
        voiceMidifilter.frequency( filter_freq*10);
        voice1filter.frequency( filter_freq*10);
        voice2filter.frequency( filter_freq*10);
        voice3filter.frequency( filter_freq*10);
        voice4filter.frequency( filter_freq*10);
        voice5filter.frequency( filter_freq*10);
        voice6filter.frequency( filter_freq*10);
        voice7filter.frequency( filter_freq*10);
        voice8filter.frequency( filter_freq*10);        
        voice9filter.frequency( filter_freq*10);
        voice10filter.frequency(filter_freq*10);
        voice11filter.frequency(filter_freq*10);
        voice12filter.frequency(filter_freq*10); 

//resonance filter
float res_filter1=artboard.pot_1(13)*1.0;
float res_filter=map(res_filter1, 0.0, 1023.0, 0.1 , 1.0);
Serial.println(res_filter);
      voiceMidifilter.resonance(res_filter);
        voice1filter.resonance(res_filter);
        voice2filter.resonance(res_filter);
        voice3filter.resonance(res_filter);
        voice4filter.resonance(res_filter);
        voice5filter.resonance(res_filter);
        voice6filter.resonance(res_filter);
        voice7filter.resonance(res_filter);
        voice8filter.resonance(res_filter);  
        voice9filter.resonance(res_filter);
        voice10filter.resonance(res_filter);
        voice11filter.resonance(res_filter);
        voice12filter.resonance(res_filter);   

        // voiceMidifilter.resonance((res_filter/204)+.9);
        // voice1filter.resonance((res_filter/204)+.9);
        // voice2filter.resonance((res_filter/204)+.9);
        // voice3filter.resonance((res_filter/204)+.9);
        // voice4filter.resonance((res_filter/204)+.9);
        // voice5filter.resonance((res_filter/204)+.9);
        // voice6filter.resonance((res_filter/204)+.9);
        // voice7filter.resonance((res_filter/204)+.9);
        // voice8filter.resonance((res_filter/204)+.9);  
        // voice9filter.resonance((res_filter/204)+.9);
        // voice10filter.resonance((res_filter/204)+.9);
        // voice11filter.resonance((res_filter/204)+.9);
        // voice12filter.resonance((res_filter/204)+.9);   


//octave filter
/*
Set how much (in octaves) the control signal can alter the filter's 
corner frequency. Range is 0 to 7 octaves. For example, when set to 2.5, 
a full scale positive signal (1.0) will shift the filter frequency up 2.5 
octaves, and a full scale negative signal will shift it down 2.5 octaves.
*/
float octave =artboard.pot_1(12)/146.14;
// Debugln(octave);
        voice1filter.octaveControl(octave);
        voice2filter.octaveControl(octave);
        voice3filter.octaveControl(octave);
        voice4filter.octaveControl(octave);
        voice5filter.octaveControl(octave);
        voice6filter.octaveControl(octave);
        voice7filter.octaveControl(octave);
        voice8filter.octaveControl(octave);  
        voice9filter.octaveControl(octave);
        voice10filter.octaveControl(octave);
        voice11filter.octaveControl(octave);
        voice12filter.octaveControl(octave);   

    //detune
  deTune = mapfloat(deTune, 0, 1023, .875, 1.125);

//mix
      
        vcoOneLevel = (artboard.pot_1(1)/1023.1);
        vcoTwoLevel = 1 - (artboard.pot_1(1)/1023.1);
        voiceMidimix.gain(1,vcoOneLevel);
        voiceMidimix.gain(0,vcoTwoLevel);
        voice1mix.gain(1,vcoOneLevel);
        voice1mix.gain(0,vcoTwoLevel);
        voice2mix.gain(1,vcoOneLevel);
        voice2mix.gain(0,vcoTwoLevel);
        voice3mix.gain(1,vcoOneLevel);
        voice3mix.gain(0,vcoTwoLevel);  
        voice4mix.gain(1,vcoOneLevel); 
        voice4mix.gain(0,vcoTwoLevel); 
        voice5mix.gain(1,vcoOneLevel); 
        voice5mix.gain(0,vcoTwoLevel); 
        voice6mix.gain(1,vcoOneLevel); 
        voice6mix.gain(0,vcoTwoLevel); 
        voice7mix.gain(1,vcoOneLevel); 
        voice7mix.gain(0,vcoTwoLevel); 
        voice8mix.gain(1,vcoOneLevel); 
        voice8mix.gain(0,vcoTwoLevel); 
        voice9mix.gain(1,vcoOneLevel); 
        voice9mix.gain(0,vcoTwoLevel); 
        voice10mix.gain(1,vcoOneLevel); 
        voice10mix.gain(0,vcoTwoLevel); 
        voice11mix.gain(1,vcoOneLevel); 
        voice11mix.gain(0,vcoTwoLevel); 
        voice12mix.gain(1,vcoOneLevel); 
        voice12mix.gain(0,vcoTwoLevel); 
//NOISE 
 float noise= artboard.pot_1(3);
 
//Debugln(noise);
        voiceMidiN.amplitude(noise/3096.1);
        voice1n.amplitude(noise/3096.1);
        voice2n.amplitude(noise/3096.1);
        voice3n.amplitude(noise/3096.1);
        voice4n.amplitude(noise/3096.1);
        voice5n.amplitude(noise/3096.1);
        voice6n.amplitude(noise/3096.1);
        voice7n.amplitude(noise/3096.1);
        voice8n.amplitude(noise/3096.1);
        voice9n.amplitude(noise/3096.1);
        voice10n.amplitude(noise/3096.1);
        voice11n.amplitude(noise/3096.1);
        voice12n.amplitude(noise/3096.1);
    
//ENVELOPE
  //Attack  
          attackTime = artboard.pot_1(4)*2; 
  //Decay
          decayTime = 10;  
  //Sustain
//          sustainLevel = extraAnalogValues[i]/1023;
          sustainLevel = 10;       
  //Release      
          releaseTime =artboard.pot_1(6)*2; 

// ENVELOPE LFO
//          decayTimeFilter = extraAnalogValues[i];
        attackTimeFilter = artboard.pot_1(8)*2; 
        decayTimeFilter = artboard.pot_1(9)*2; 
        sustainLevel = artboard.pot_1(10)/1023;
        releaseTimeFilter = artboard.pot_1(11)*2; 

    voiceMidiA.begin(waveShapeOneIndex);
    voice1a.begin(waveShapeOneIndex);
    voice2a.begin(waveShapeOneIndex);
    voice3a.begin(waveShapeOneIndex);
    voice4a.begin(waveShapeOneIndex);
    voice5a.begin(waveShapeOneIndex);
    voice6a.begin(waveShapeOneIndex);
    voice7a.begin(waveShapeOneIndex);
    voice8a.begin(waveShapeOneIndex);
    voice9a.begin(waveShapeOneIndex);
    voice10a.begin(waveShapeOneIndex);
    voice11a.begin(waveShapeOneIndex);
    voice12a.begin(waveShapeOneIndex);
    
//Debug("wave shape 1: ");
//Debugln(waveShapeOneIndex);
    voiceMidiB.begin(waveShapeTwoIndex);
    voice1b.begin(waveShapeTwoIndex);
    voice2b.begin(waveShapeTwoIndex);
    voice3b.begin(waveShapeTwoIndex);
    voice4b.begin(waveShapeTwoIndex);
    voice5b.begin(waveShapeTwoIndex);
    voice6b.begin(waveShapeTwoIndex);
    voice7b.begin(waveShapeTwoIndex);
    voice8b.begin(waveShapeTwoIndex);
    voice9b.begin(waveShapeTwoIndex);
    voice10b.begin(waveShapeTwoIndex);
    voice11b.begin(waveShapeTwoIndex);
    voice12b.begin(waveShapeTwoIndex);
    


    // save the current state as the last state, for next time through the loop
    lfolastButtonState = lfobuttonState;
    lfo.begin(lfoWaveShapes[lfoWaveShapeIndex]); 



//LFO
    lfo.frequency(artboard.pot_1(15)/50);

//lfo Mod
float lfo=lfo_mod/1023.1;
        voiceMidifiltermodmixer.gain(1, lfo);
        voice1filtermodmixer.gain(1, lfo);
        voice2filtermodmixer.gain(1, lfo);
        voice3filtermodmixer.gain(1, lfo);
        voice4filtermodmixer.gain(1, lfo);
        voice5filtermodmixer.gain(1, lfo);
        voice6filtermodmixer.gain(1, lfo);
        voice7filtermodmixer.gain(1, lfo);
        voice8filtermodmixer.gain(1, lfo);
        voice9filtermodmixer.gain(1, lfo);
        voice10filtermodmixer.gain(1,lfo);
        voice11filtermodmixer.gain(1, lfo);
        voice12filtermodmixer.gain(1, lfo);

        

//env Mod
float env_mod=artboard.pot_1(2)/1023.1;
        voiceMidifiltermodmixer.gain(0, env_mod);
        voice1filtermodmixer.gain(0, env_mod);
        voice2filtermodmixer.gain(0, env_mod);
        voice3filtermodmixer.gain(0, env_mod);
        voice4filtermodmixer.gain(0, env_mod);
        voice5filtermodmixer.gain(0, env_mod);
        voice6filtermodmixer.gain(0, env_mod);
        voice7filtermodmixer.gain(0, env_mod);
        voice8filtermodmixer.gain(0, env_mod);
        voice9filtermodmixer.gain(0, env_mod);
        voice10filtermodmixer.gain(0, env_mod);
        voice11filtermodmixer.gain(0, env_mod);
        voice12filtermodmixer.gain(0, env_mod);
        
        float pulse=artboard.pot_2(1)/1.01;
        
   tempPulseWidth = 1 - (pulse/1023);
        tempDetuneMod = pulse/2046;
        //LFO Peak
  if(peak1.available()){
    tempPeak = peak1.read();
  }
  // analogWrite(blue, blueLevel*tempPeak);
  // analogWrite(green, greenLevel*tempPeak);
  // analogWrite(red, redLevel*tempPeak);
  voiceMidiA.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice1a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice2a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice3a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice4a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice5a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice6a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice7a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice8a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice9a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice10a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice11a.pulseWidth((tempPeak/2) + tempPulseWidth);
  voice12a.pulseWidth((tempPeak/2) + tempPulseWidth);

  if(voiceBPulse){
    voiceMidiB.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice1b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice2b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice3b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice4b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice5b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice6b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice7b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice8b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice9b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice10b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice11b.pulseWidth((tempPeak/2) + tempPulseWidth);
    voice12b.pulseWidth((tempPeak/2) + tempPulseWidth);
  }else{
    deTuneLfo = ((tempPeak) * tempDetuneMod + 1);
  }

 }  //fine loop



  // uncomment if using multiple virtual cables
  //Serial.print("cable ");
  //Serial.print(cable, DEC);
  //Serial.print(": ");

  // print info about the message
  //





   void myNoteOn(byte channel, byte note, byte velocity) {
  // When using MIDIx4 or MIDIx16, usbMIDI.getCable() can be used
  // to read which of the virtual MIDI cables received this message.
  Serial.print("Note On, ch=");
  Serial.print(channel, DEC);
  Serial.print(", note=");
  Serial.print(note, DEC);
  Serial.print(", velocity=");
  Serial.println(velocity, DEC);
}



void printBytes(const byte *data, unsigned int size) {
  while (size > 0) {
    byte b = *data++;
    if (b < 16) Serial.print('0');
    Serial.print(b, HEX);
    if (size > 1) Serial.print(' ');
    size = size - 1;
  }
}

