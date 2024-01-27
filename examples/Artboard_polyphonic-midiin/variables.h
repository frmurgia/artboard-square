
//oct 1 button oct select
int osc1buttonPushCounter = 0;   // counter for the number of button presses
int osc1buttonState = 0;         // current state of the button
int osc1lastButtonState = 0;     // previous state of the button

//oct 2 button oct select
int osc2buttonPushCounter = 0;   // counter for the number of button presses
int osc2buttonState = 0;         // current state of the button
int osc2lastButtonState = 0;     // previous state of the button

//osc 1 button waveform
int wave1buttonPushCounter = 0;   // counter for the number of button presses
int wave1buttonState = 0;         // current state of the button
int wave1lastButtonState = 0;     // previous state of the button

//osc 2 button waveform
int wave2buttonPushCounter = 0;   // counter for the number of button presses
int wave2buttonState = 0;         // current state of the button
int wave2lastButtonState = 0;     // previous state of the button

//lfo button waveform
int lfobuttonPushCounter = 0;   // counter for the number of button presses
int lfobuttonState = 0;         // current state of the button
int lfolastButtonState = 0;     // previous state of the button

#define LED_COUNT 13
#define LED_PIN 11

WS2812FX ws2812fx = WS2812FX(LED_COUNT, LED_PIN, NEO_RGB + NEO_KHZ800);



int changeThresh;
int extraChangeThresh;

int envelopeFilter;

float tempPulseWidth;
float tempPeak;
float tempRMS;


//synth
float mainVolume;
int tempLineOutLevel;
float vcoOneLevel;
float vcoTwoLevel;
int vcoOneOct;
int vcoTwoOct;
int octArray[5] = { 1, 2, 4, 8, 16};
float deTune;
int waveShapeOneIndex;
int waveShapeTwoIndex;
int lfoWaveShapeIndex;
int octOneIndex;
int octTwoIndex;
//WaveShapes
short waveShapes[4] = {
  WAVEFORM_SINE,
  WAVEFORM_SAWTOOTH,
  WAVEFORM_SQUARE,
  WAVEFORM_PULSE,
};
bool voiceBPulse;
float tempDetuneMod;
float deTuneLfo;
//LFO WaveShapes
short lfoWaveShapes[5] = {
  WAVEFORM_SINE,
  WAVEFORM_SAWTOOTH,
  WAVEFORM_SAWTOOTH_REVERSE,
  WAVEFORM_SQUARE,
  WAVEFORM_SAMPLE_HOLD,
};
//ADSR
int attackTime;
int decayTime;
float sustainLevel;
int releaseTime;
//Filter ADSR
int attackTimeFilter;
int decayTimeFilter;
float sustainLevelFilter;
int releaseTimeFilter;
//LFO ADSR
// int attackTimeLFO;
// int decayTimeLFO;
// float sustainLevelLFO;
// int releaseTimeLFO;

//Note
int mult= 4;
float DO    = 16.35* mult ;
float DOd   = 17.32*mult ;
float RE    = 18.35 *mult;
float REd   = 19.45 *mult ;
float MI    = 20.60   *mult ;
float FA    = 21.83 *mult ;
float FAd   = 23.12  *mult ;
float SOL   = 24.50   *mult ;
float SOLd  = 25.96 *mult ;
float LA    = 27.50   *mult ;
float LAd   = 29.14 *mult ;
float SI    = 30.87 *mult ;

int touchTr=7000;
// rec stepseq
int stepSeq = 28;
