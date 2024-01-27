//   if (usbMIDI.read()) {

// if (usbMIDI.getType()==usbMIDI.NoteOn){ // 0x90
//    byte data1 = usbMIDI.getData1();     // first data byte of message, 0-127
//     float freq = 440.0 * powf(2.0, (float)(data1 - 69) * 0.08333333);
//   Serial.println(freq);

//   voiceMidiA.frequency(((freq/2))*vcoOneOct);
//   voiceMidiB.frequency(((freq/2)   * vcoTwoOct) * deTune);
//         voiceMidienv.amplitude(1, attackTime);
//     voiceMidifilterenv.amplitude(1, attackTimeFilter);

//   }
//   if (usbMIDI.getType()==usbMIDI.NoteOff){ // 0x90)
//     voiceMidienv.amplitude(0, releaseTime);
//     voiceMidifilterenv.amplitude(-1, releaseTimeFilter);
//   }

//   }



if (usbMIDI.read()) {
  byte data1 = usbMIDI.getData1();  // first data byte of message, 0-127


  // float freq = 440.0 * powf(2.0, (float)(data1 - 69) * 0.08);

    float freq=data1;
  Serial.println(data1);
  //DO
  if (freq == 24  || freq == 36 || freq == 48  || freq  == 60  || freq  == 72 || freq  == 84  || freq  == 96  ||  freq == 108  ||  freq == 120) {

    voice1env.amplitude(1, attackTime);
    voice1filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice1env.amplitude(0, releaseTime);
    voice1filterenv.amplitude(-1, releaseTimeFilter);
  }



  //DOd
  if (freq == 13   || freq  ==  25  || freq  ==  37  || freq  ==  49   || freq  ==  61  || freq  ==  73   || freq  ==  85   ||   freq ==  97 || freq ==  109) {

    voice2env.amplitude(1, attackTime);
    voice2filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice2env.amplitude(0, releaseTime);
    voice2filterenv.amplitude(-1, releaseTimeFilter);
  }

  //RE

  if (freq ==26 || freq ==  38  || freq ==  50  || freq ==  62  || freq ==  74  || freq ==  86 || freq ==  98  || freq == 110 || freq ==  122) {

    voice3env.amplitude(1, attackTime);
    voice3filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice3env.amplitude(0, releaseTime);
    voice3filterenv.amplitude(-1, releaseTimeFilter);
  }

  //REd

if (freq ==27 || freq ==  39  || freq ==  51  || freq ==  63  || freq ==  75  || freq ==  87 || freq ==  99  || freq == 111 || freq ==  123) {
    voice4env.amplitude(1, attackTime);
    voice4filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice4env.amplitude(0, releaseTime);
    voice4filterenv.amplitude(-1, releaseTimeFilter);
  }

  //MI

  if (freq ==28 || freq ==  40  || freq ==  52  || freq ==  64 || freq ==  76  || freq ==  89 || freq ==  100 || freq == 112 || freq ==  124) {

    voice5env.amplitude(1, attackTime);
    voice5filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice5env.amplitude(0, releaseTime);
    voice5filterenv.amplitude(-1, releaseTimeFilter);
  }
  //FA

  if (freq ==29 || freq ==  41  || freq ==  53  || freq ==  65 || freq ==  77 || freq ==  90|| freq ==  101 || freq == 113 || freq ==  125) {

    voice6env.amplitude(1, attackTime);
    voice6filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice6env.amplitude(0, releaseTime);
    voice6filterenv.amplitude(-1, releaseTimeFilter);
  }
  //FAd

  if (freq ==30 || freq ==  42  || freq ==  54  || freq ==  66 || freq ==  78 || freq ==  91 || freq ==  102 || freq == 114 || freq ==  126) {

    voice7env.amplitude(1, attackTime);
    voice7filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice7env.amplitude(0, releaseTime);
    voice7filterenv.amplitude(-1, releaseTimeFilter);
  }
  //SOL

  if (freq ==31 || freq ==  43  || freq ==  55  || freq ==  67 || freq ==  79|| freq ==  92 || freq ==  103 || freq == 115 || freq ==  127) {

    voice8env.amplitude(1, attackTime);
    voice8filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice8env.amplitude(0, releaseTime);
    voice8filterenv.amplitude(-1, releaseTimeFilter);
  }
  //SOLd

  if (freq ==32 || freq ==  44  || freq ==  56  || freq ==  68 || freq ==  80|| freq ==  93 || freq ==  104 || freq == 116 || freq ==  128) {

    voice9env.amplitude(1, attackTime);
    voice9filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice9env.amplitude(0, releaseTime);
    voice9filterenv.amplitude(-1, releaseTimeFilter);
  }
  //LA
  if (freq ==33 || freq ==  45  || freq ==  57  || freq ==  69 || freq ==  81|| freq ==  94 || freq ==  105 || freq == 117 ) {

    voice10env.amplitude(1, attackTime);
    voice10filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice10env.amplitude(0, releaseTime);
    voice10filterenv.amplitude(-1, releaseTimeFilter);
  }

  //LAd
  if (freq ==34 || freq ==  46  || freq ==  58  || freq == 70 || freq ==  82 || freq ==  95 || freq ==  106 || freq == 118 ) {

    voice11env.amplitude(1, attackTime);
    voice11filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice11env.amplitude(0, releaseTime);
    voice11filterenv.amplitude(-1, releaseTimeFilter);
  }
  //SI
  if (freq ==35 || freq ==  47  || freq ==  59  || freq == 71 || freq ==  83 || freq ==  96 || freq ==  107 || freq == 119 ) {

    voice12env.amplitude(1, attackTime);
    voice12filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice12env.amplitude(0, releaseTime);
    voice12filterenv.amplitude(-1, releaseTimeFilter);
  }
}
 
