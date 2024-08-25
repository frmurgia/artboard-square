// //   if (usbMIDI.read()) {

// // if (usbMIDI.getType()==usbMIDI.NoteOn){ // 0x90
// //    byte data1 = usbMIDI.getData1();     // first data byte of message, 0-127
// //     float freq = 440.0 * powf(2.0, (float)(data1 - 69) * 0.08333333);
// //   Serial.println(freq);

// //   voiceMidiA.frequency(((freq/2))*vcoOneOct);
// //   voiceMidiB.frequency(((freq/2)   * vcoTwoOct) * deTune);
// //         voiceMidienv.amplitude(1, attackTime);
// //     voiceMidifilterenv.amplitude(1, attackTimeFilter);

// //   }
// //   if (usbMIDI.getType()==usbMIDI.NoteOff){ // 0x90)
// //     voiceMidienv.amplitude(0, releaseTime);
// //     voiceMidifilterenv.amplitude(-1, releaseTimeFilter);
// //   }

// //   }



// if (usbMIDI.read()) {
//   byte data1 = usbMIDI.getData1();  // first data byte of message, 0-127


//   // float freq = 440.0 * powf(2.0, (float)(data1 - 69) * 0.08);

//     float freq=data1;
//   Serial.println(data1);
//   //DO
//   if (freq == 24  || freq == 36 || freq == 48  || freq  == 60  || freq  == 72 || freq  == 84  || freq  == 96  ||  freq == 108  ||  freq == 120) {

//     voice1env.amplitude(1, attackTime);
//     voice1filterenv.amplitude(1, attackTimeFilter);
//   }
//   //altrimenti la nota non è piu suonata e parte il relase
//   else {
//     voice1env.amplitude(0, releaseTime);
//     voice1filterenv.amplitude(-1, releaseTimeFilter);
//   }



//   //DOd
//   if (freq == 13   || freq  ==  25  || freq  ==  37  || freq  ==  49   || freq  ==  61  || freq  ==  73   || freq  ==  85   ||   freq ==  97 || freq ==  109) {

//     voice2env.amplitude(1, attackTime);
//     voice2filterenv.amplitude(1, attackTimeFilter);
//   }
//   //altrimenti la nota non è piu suonata e parte il relase
//   else {
//     voice2env.amplitude(0, releaseTime);
//     voice2filterenv.amplitude(-1, releaseTimeFilter);
//   }

//   //RE

//   if (freq ==26 || freq ==  38  || freq ==  50  || freq ==  62  || freq ==  74  || freq ==  86 || freq ==  98  || freq == 110 || freq ==  122) {

//     voice3env.amplitude(1, attackTime);
//     voice3filterenv.amplitude(1, attackTimeFilter);
//   }
//   //altrimenti la nota non è piu suonata e parte il relase
//   else {
//     voice3env.amplitude(0, releaseTime);
//     voice3filterenv.amplitude(-1, releaseTimeFilter);
//   }

//   //REd

// if (freq ==27 || freq ==  39  || freq ==  51  || freq ==  63  || freq ==  75  || freq ==  87 || freq ==  99  || freq == 111 || freq ==  123) {
//     voice4env.amplitude(1, attackTime);
//     voice4filterenv.amplitude(1, attackTimeFilter);
//   }
//   //altrimenti la nota non è piu suonata e parte il relase
//   else {
//     voice4env.amplitude(0, releaseTime);
//     voice4filterenv.amplitude(-1, releaseTimeFilter);
//   }

//   //MI

//   if (freq ==28 || freq ==  40  || freq ==  52  || freq ==  64 || freq ==  76  || freq ==  89 || freq ==  100 || freq == 112 || freq ==  124) {

//     voice5env.amplitude(1, attackTime);
//     voice5filterenv.amplitude(1, attackTimeFilter);
//   }
//   //altrimenti la nota non è piu suonata e parte il relase
//   else {
//     voice5env.amplitude(0, releaseTime);
//     voice5filterenv.amplitude(-1, releaseTimeFilter);
//   }
//   //FA

//   if (freq ==29 || freq ==  41  || freq ==  53  || freq ==  65 || freq ==  77 || freq ==  90|| freq ==  101 || freq == 113 || freq ==  125) {

//     voice6env.amplitude(1, attackTime);
//     voice6filterenv.amplitude(1, attackTimeFilter);
//   }
//   //altrimenti la nota non è piu suonata e parte il relase
//   else {
//     voice6env.amplitude(0, releaseTime);
//     voice6filterenv.amplitude(-1, releaseTimeFilter);
//   }
//   //FAd

//   if (freq ==30 || freq ==  42  || freq ==  54  || freq ==  66 || freq ==  78 || freq ==  91 || freq ==  102 || freq == 114 || freq ==  126) {

//     voice7env.amplitude(1, attackTime);
//     voice7filterenv.amplitude(1, attackTimeFilter);
//   }
//   //altrimenti la nota non è piu suonata e parte il relase
//   else {
//     voice7env.amplitude(0, releaseTime);
//     voice7filterenv.amplitude(-1, releaseTimeFilter);
//   }
//   //SOL

//   if (freq ==31 || freq ==  43  || freq ==  55  || freq ==  67 || freq ==  79|| freq ==  92 || freq ==  103 || freq == 115 || freq ==  127) {

//     voice8env.amplitude(1, attackTime);
//     voice8filterenv.amplitude(1, attackTimeFilter);
//   }
//   //altrimenti la nota non è piu suonata e parte il relase
//   else {
//     voice8env.amplitude(0, releaseTime);
//     voice8filterenv.amplitude(-1, releaseTimeFilter);
//   }
//   //SOLd

//   if (freq ==32 || freq ==  44  || freq ==  56  || freq ==  68 || freq ==  80|| freq ==  93 || freq ==  104 || freq == 116 || freq ==  128) {

//     voice9env.amplitude(1, attackTime);
//     voice9filterenv.amplitude(1, attackTimeFilter);
//   }
//   //altrimenti la nota non è piu suonata e parte il relase
//   else {
//     voice9env.amplitude(0, releaseTime);
//     voice9filterenv.amplitude(-1, releaseTimeFilter);
//   }
//   //LA
//   if (freq ==33 || freq ==  45  || freq ==  57  || freq ==  69 || freq ==  81|| freq ==  94 || freq ==  105 || freq == 117 ) {

//     voice10env.amplitude(1, attackTime);
//     voice10filterenv.amplitude(1, attackTimeFilter);
//   }
//   //altrimenti la nota non è piu suonata e parte il relase
//   else {
//     voice10env.amplitude(0, releaseTime);
//     voice10filterenv.amplitude(-1, releaseTimeFilter);
//   }

//   //LAd
//   if (freq ==34 || freq ==  46  || freq ==  58  || freq == 70 || freq ==  82 || freq ==  95 || freq ==  106 || freq == 118 ) {

//     voice11env.amplitude(1, attackTime);
//     voice11filterenv.amplitude(1, attackTimeFilter);
//   }
//   //altrimenti la nota non è piu suonata e parte il relase
//   else {
//     voice11env.amplitude(0, releaseTime);
//     voice11filterenv.amplitude(-1, releaseTimeFilter);
//   }
//   //SI
//   if (freq ==35 || freq ==  47  || freq ==  59  || freq == 71 || freq ==  83 || freq ==  96 || freq ==  107 || freq == 119 ) {

//     voice12env.amplitude(1, attackTime);
//     voice12filterenv.amplitude(1, attackTimeFilter);
//   }
//   //altrimenti la nota non è piu suonata e parte il relase
//   else {
//     voice12env.amplitude(0, releaseTime);
//     voice12filterenv.amplitude(-1, releaseTimeFilter);
//   }
// }
 

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
  
