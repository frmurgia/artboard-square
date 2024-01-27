#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformDc     lfoenvelope;    //xy=426,1925
AudioMixer4              mixer1;         //xy=557,1986
AudioAnalyzePeak         peak1;          //xy=786,1849
AudioSynthWaveform       lfo;            //xy=795.2500190734863,1419.2500133514404
AudioSynthWaveform       voice12b;       //xy=1283,2903
AudioSynthNoiseWhite     voice12n;       //xy=1283,2938
AudioSynthWaveform       voice12a;       //xy=1285,2865
AudioSynthWaveform       voice11b;       //xy=1292,2637
AudioSynthNoiseWhite     voice11n;       //xy=1292,2672
AudioSynthWaveform       voice11a;       //xy=1294,2599
AudioSynthWaveform       voice10b;       //xy=1298,2389
AudioSynthNoiseWhite     voice10n;       //xy=1298,2424
AudioSynthWaveform       voice10a;       //xy=1300,2351
AudioSynthWaveform       voice9b;        //xy=1308,2146
AudioSynthNoiseWhite     voice9n;        //xy=1308,2181
AudioSynthWaveform       voice9a;        //xy=1310,2108
AudioSynthWaveform       voice8b;        //xy=1311,1882
AudioSynthNoiseWhite     voice8n;        //xy=1311,1917
AudioSynthWaveform       voice8a;        //xy=1313,1844
AudioSynthWaveform       voice4a;        //xy=1368,739
AudioSynthWaveform       voice4b;        //xy=1369,777
AudioSynthNoiseWhite     voice4n;        //xy=1369,812
AudioSynthWaveform       voice5b;        //xy=1370,1033
AudioSynthNoiseWhite     voice5n;        //xy=1370,1068
AudioSynthWaveform       voice5a;        //xy=1375,990
AudioSynthWaveform       voice7b;        //xy=1379,1524
AudioSynthNoiseWhite     voice7n;        //xy=1379,1559
AudioSynthWaveform       voice6b;        //xy=1382,1287
AudioSynthNoiseWhite     voice6n;        //xy=1382,1322
AudioSynthWaveform       voice6a;        //xy=1384,1249
AudioSynthWaveform       voice7a;        //xy=1384,1481
AudioSynthWaveform       voice3b;        //xy=1390,529
AudioSynthNoiseWhite     voice3n;        //xy=1390,564
AudioSynthWaveform       voice3a;        //xy=1395,486
AudioSynthWaveform       voice1b;        //xy=1420,63
AudioSynthNoiseWhite     voice1n;        //xy=1423,107
AudioSynthWaveform       voice2b;        //xy=1423,297
AudioSynthNoiseWhite     voice2n;        //xy=1423,332
AudioSynthWaveform       voice1a;        //xy=1425,20
AudioSynthWaveform       voice2a;        //xy=1425,259
AudioSynthWaveformDc     voice12filterenv; //xy=1473,3019
AudioSynthWaveformDc     voice11filterenv; //xy=1482,2753
AudioSynthWaveformDc     voice10filterenv; //xy=1488,2505
AudioSynthWaveformDc     voice12env;     //xy=1487,2958
AudioSynthWaveformDc     voice4filterenv; //xy=1497,923
AudioMixer4              voice12mix;     //xy=1490,2893
AudioSynthWaveformDc     voice5filterenv; //xy=1498,1179
AudioSynthWaveformDc     voice11env;     //xy=1496,2692
AudioSynthWaveformDc     voice9filterenv; //xy=1498,2262
AudioMixer4              voice11mix;     //xy=1499,2627
AudioSynthWaveformDc     voice8filterenv; //xy=1502,1998
AudioSynthWaveformDc     voice10env;     //xy=1502,2444
AudioSynthWaveformDc     voice7filterenv; //xy=1507,1670
AudioSynthWaveformDc     voice4env;      //xy=1511,862
AudioMixer4              voice10mix;     //xy=1505,2379
AudioSynthWaveformDc     voice6filterenv; //xy=1510,1433
AudioSynthWaveformDc     voice5env;      //xy=1512,1118
AudioMixer4              voice4mix;      //xy=1514,797
AudioMixer4              voice5mix;      //xy=1515,1053
AudioSynthWaveformDc     voice3filterenv; //xy=1518,675
AudioSynthWaveformDc     voice9env;      //xy=1512,2201
AudioMixer4              voice9mix;      //xy=1515,2136
AudioSynthWaveformDc     voice8env;      //xy=1516,1937
AudioMixer4              voice8mix;      //xy=1519,1872
AudioSynthWaveformDc     voice7env;      //xy=1521,1609
AudioSynthWaveformDc     voice6env;      //xy=1524,1372
AudioMixer4              voice7mix;      //xy=1524,1544
AudioMixer4              voice6mix;      //xy=1527,1307
AudioSynthWaveformDc     voice3env;      //xy=1532,614
AudioMixer4              voice3mix;      //xy=1535,549
AudioSynthWaveformDc     voice1filterenv; //xy=1549,199
AudioSynthWaveformDc     voice2filterenv; //xy=1551,443
AudioMixer4              voice1mix;      //xy=1565,83
AudioSynthWaveformDc     voice2env;      //xy=1565,382
AudioSynthWaveformDc     voice1env;      //xy=1566,148
AudioMixer4              voice2mix;      //xy=1568,317
AudioEffectMultiply      voice12multiply; //xy=1654,2931
AudioEffectMultiply      voice11multiply; //xy=1663,2665
AudioMixer4              voice12filtermodmixer; //xy=1664,3047
AudioEffectMultiply      voice10multiply; //xy=1669,2417
AudioEffectMultiply      voice4multiply; //xy=1678,835
AudioEffectMultiply      voice5multiply; //xy=1679,1091
AudioMixer4              voice11filtermodmixer; //xy=1673,2781
AudioEffectMultiply      voice9multiply; //xy=1679,2174
AudioMixer4              voice10filtermodmixer; //xy=1679,2533
AudioEffectMultiply      voice8multiply; //xy=1683,1910
AudioMixer4              voice4filtermodmixer; //xy=1688,951
AudioEffectMultiply      voice7multiply; //xy=1688,1582
AudioEffectMultiply      voice6multiply; //xy=1691,1345
AudioMixer4              voice9filtermodmixer; //xy=1689,2290
AudioMixer4              voice5filtermodmixer; //xy=1696,1201
AudioMixer4              voice8filtermodmixer; //xy=1693,2026
AudioEffectMultiply      voice3multiply; //xy=1699,587
AudioMixer4              voice6filtermodmixer; //xy=1701,1461
AudioMixer4              voice7filtermodmixer; //xy=1705,1692
AudioMixer4              voice3filtermodmixer; //xy=1716,697
AudioEffectMultiply      voice1multiply; //xy=1729,121
AudioEffectMultiply      voice2multiply; //xy=1732,355
AudioMixer4              voice2filtermodmixer; //xy=1742,471
AudioMixer4              voice1filtermodmixer; //xy=1746,231
AudioFilterStateVariable voice12filter;  //xy=1837,2954
AudioFilterStateVariable voice11filter;  //xy=1846,2688
AudioFilterStateVariable voice10filter;  //xy=1852,2440
AudioFilterStateVariable voice5filter;   //xy=1859,1135
AudioFilterStateVariable voice4filter;   //xy=1861,858
AudioFilterStateVariable voice9filter;   //xy=1862,2197
AudioFilterStateVariable voice8filter;   //xy=1866,1933
AudioFilterStateVariable voice7filter;   //xy=1868,1626
AudioFilterStateVariable voice6filter;   //xy=1874,1368
AudioFilterStateVariable voice3filter;   //xy=1879,631
AudioFilterStateVariable voice2filter;   //xy=1915,378
AudioFilterStateVariable voice1filter;   //xy=1932,173
AudioSynthNoiseWhite     voiceMidiN; //xy=2165.500030517578,267.00000381469727
AudioSynthWaveform       voiceMidiB; //xy=2168.75,231.75
AudioSynthWaveform       voiceMidiA; //xy=2173.75,188.75
AudioSynthWaveformDc     voiceMidifilterenv; //xy=2193.75,387.5
AudioMixer4              last4premix;    //xy=2192,2268
AudioMixer4              voiceMidimix; //xy=2313.75,251.75
AudioSynthWaveformDc     voiceMidienv; //xy=2314.75,316.75
AudioMixer4              mid4premix;     //xy=2339,1108
AudioMixer4              first4premix;   //xy=2340,1024
AudioMixer4              voiceMidifiltermodmixer; //xy=2451.000030517578,397.2500057220459
AudioEffectMultiply      voiceMidimultiply; //xy=2477.75,289.75
AudioMixer4              Midipremix; //xy=2653.75004196167,685.0000343322754
AudioFilterStateVariable voiceMidifilter; //xy=2707.500030517578,331.25000190734863
AudioMixer4              mainOutMixer;   //xy=2860,1101
AudioOutputI2S           i2s1;           //xy=3100,1088
// AudioOutputUSB           usb1;           //xy=3141,1192
AudioConnection          patchCord1(lfoenvelope, 0, mixer1, 0);
AudioConnection          patchCord2(mixer1, peak1);
AudioConnection          patchCord3(lfo, 0, voice1filtermodmixer, 1);
AudioConnection          patchCord4(lfo, 0, voice2filtermodmixer, 1);
AudioConnection          patchCord5(lfo, 0, voice3filtermodmixer, 1);
AudioConnection          patchCord6(lfo, 0, voice4filtermodmixer, 1);
AudioConnection          patchCord7(lfo, 0, voice5filtermodmixer, 1);
AudioConnection          patchCord8(lfo, 0, voice6filtermodmixer, 1);
AudioConnection          patchCord9(lfo, 0, voice7filtermodmixer, 1);
AudioConnection          patchCord10(lfo, 0, voice8filtermodmixer, 1);
AudioConnection          patchCord11(lfo, 0, mixer1, 1);
AudioConnection          patchCord12(lfo, 0, voice9filtermodmixer, 1);
AudioConnection          patchCord13(lfo, 0, voice10filtermodmixer, 1);
AudioConnection          patchCord14(lfo, 0, voice11filtermodmixer, 1);
AudioConnection          patchCord15(lfo, 0, voice12filtermodmixer, 1);
AudioConnection          patchCord16(lfo, 0, voiceMidifiltermodmixer, 1);
AudioConnection          patchCord17(voice12b, 0, voice12mix, 1);
AudioConnection          patchCord18(voice12n, 0, voice12mix, 2);
AudioConnection          patchCord19(voice12a, 0, voice12mix, 0);
AudioConnection          patchCord20(voice11b, 0, voice11mix, 1);
AudioConnection          patchCord21(voice11n, 0, voice11mix, 2);
AudioConnection          patchCord22(voice11a, 0, voice11mix, 0);
AudioConnection          patchCord23(voice10b, 0, voice10mix, 1);
AudioConnection          patchCord24(voice10n, 0, voice10mix, 2);
AudioConnection          patchCord25(voice10a, 0, voice10mix, 0);
AudioConnection          patchCord26(voice9b, 0, voice9mix, 1);
AudioConnection          patchCord27(voice9n, 0, voice9mix, 2);
AudioConnection          patchCord28(voice9a, 0, voice9mix, 0);
AudioConnection          patchCord29(voice8b, 0, voice8mix, 1);
AudioConnection          patchCord30(voice8n, 0, voice8mix, 2);
AudioConnection          patchCord31(voice8a, 0, voice8mix, 0);
AudioConnection          patchCord32(voice4a, 0, voice4mix, 0);
AudioConnection          patchCord33(voice4b, 0, voice4mix, 1);
AudioConnection          patchCord34(voice4n, 0, voice4mix, 2);
AudioConnection          patchCord35(voice5b, 0, voice5mix, 1);
AudioConnection          patchCord36(voice5n, 0, voice5mix, 2);
AudioConnection          patchCord37(voice5a, 0, voice5mix, 0);
AudioConnection          patchCord38(voice7b, 0, voice7mix, 1);
AudioConnection          patchCord39(voice7n, 0, voice7mix, 2);
AudioConnection          patchCord40(voice6b, 0, voice6mix, 1);
AudioConnection          patchCord41(voice6n, 0, voice6mix, 2);
AudioConnection          patchCord42(voice6a, 0, voice6mix, 0);
AudioConnection          patchCord43(voice7a, 0, voice7mix, 0);
AudioConnection          patchCord44(voice3b, 0, voice3mix, 1);
AudioConnection          patchCord45(voice3n, 0, voice3mix, 2);
AudioConnection          patchCord46(voice3a, 0, voice3mix, 0);
AudioConnection          patchCord47(voice1b, 0, voice1mix, 1);
AudioConnection          patchCord48(voice1n, 0, voice1mix, 2);
AudioConnection          patchCord49(voice2b, 0, voice2mix, 1);
AudioConnection          patchCord50(voice2n, 0, voice2mix, 3);
AudioConnection          patchCord51(voice1a, 0, voice1mix, 0);
AudioConnection          patchCord52(voice2a, 0, voice2mix, 0);
AudioConnection          patchCord53(voice12filterenv, 0, voice12filtermodmixer, 0);
AudioConnection          patchCord54(voice11filterenv, 0, voice11filtermodmixer, 0);
AudioConnection          patchCord55(voice10filterenv, 0, voice10filtermodmixer, 0);
AudioConnection          patchCord56(voice12env, 0, voice12multiply, 1);
AudioConnection          patchCord57(voice4filterenv, 0, voice4filtermodmixer, 0);
AudioConnection          patchCord58(voice12mix, 0, voice12multiply, 0);
AudioConnection          patchCord59(voice5filterenv, 0, voice5filtermodmixer, 0);
AudioConnection          patchCord60(voice11env, 0, voice11multiply, 1);
AudioConnection          patchCord61(voice9filterenv, 0, voice9filtermodmixer, 0);
AudioConnection          patchCord62(voice11mix, 0, voice11multiply, 0);
AudioConnection          patchCord63(voice8filterenv, 0, voice8filtermodmixer, 0);
AudioConnection          patchCord64(voice10env, 0, voice10multiply, 1);
AudioConnection          patchCord65(voice7filterenv, 0, voice7filtermodmixer, 0);
AudioConnection          patchCord66(voice4env, 0, voice4multiply, 1);
AudioConnection          patchCord67(voice10mix, 0, voice10multiply, 0);
AudioConnection          patchCord68(voice6filterenv, 0, voice6filtermodmixer, 0);
AudioConnection          patchCord69(voice5env, 0, voice5multiply, 1);
AudioConnection          patchCord70(voice4mix, 0, voice4multiply, 0);
AudioConnection          patchCord71(voice5mix, 0, voice5multiply, 0);
AudioConnection          patchCord72(voice3filterenv, 0, voice3filtermodmixer, 0);
AudioConnection          patchCord73(voice9env, 0, voice9multiply, 1);
AudioConnection          patchCord74(voice9mix, 0, voice9multiply, 0);
AudioConnection          patchCord75(voice8env, 0, voice8multiply, 1);
AudioConnection          patchCord76(voice8mix, 0, voice8multiply, 0);
AudioConnection          patchCord77(voice7env, 0, voice7multiply, 1);
AudioConnection          patchCord78(voice6env, 0, voice6multiply, 1);
AudioConnection          patchCord79(voice7mix, 0, voice7multiply, 0);
AudioConnection          patchCord80(voice6mix, 0, voice6multiply, 0);
AudioConnection          patchCord81(voice3env, 0, voice3multiply, 1);
AudioConnection          patchCord82(voice3mix, 0, voice3multiply, 0);
AudioConnection          patchCord83(voice1filterenv, 0, voice1filtermodmixer, 0);
AudioConnection          patchCord84(voice2filterenv, 0, voice2filtermodmixer, 0);
AudioConnection          patchCord85(voice1mix, 0, voice1multiply, 0);
AudioConnection          patchCord86(voice2env, 0, voice2multiply, 1);
AudioConnection          patchCord87(voice1env, 0, voice1multiply, 1);
AudioConnection          patchCord88(voice2mix, 0, voice2multiply, 0);
AudioConnection          patchCord89(voice12multiply, 0, voice12filter, 0);
AudioConnection          patchCord90(voice11multiply, 0, voice11filter, 0);
AudioConnection          patchCord91(voice12filtermodmixer, 0, voice12filter, 1);
AudioConnection          patchCord92(voice10multiply, 0, voice10filter, 0);
AudioConnection          patchCord93(voice4multiply, 0, voice4filter, 0);
AudioConnection          patchCord94(voice5multiply, 0, voice5filter, 0);
AudioConnection          patchCord95(voice11filtermodmixer, 0, voice11filter, 1);
AudioConnection          patchCord96(voice9multiply, 0, voice9filter, 0);
AudioConnection          patchCord97(voice10filtermodmixer, 0, voice10filter, 1);
AudioConnection          patchCord98(voice8multiply, 0, voice8filter, 0);
AudioConnection          patchCord99(voice4filtermodmixer, 0, voice4filter, 1);
AudioConnection          patchCord100(voice7multiply, 0, voice7filter, 0);
AudioConnection          patchCord101(voice6multiply, 0, voice6filter, 0);
AudioConnection          patchCord102(voice9filtermodmixer, 0, voice9filter, 1);
AudioConnection          patchCord103(voice5filtermodmixer, 0, voice5filter, 1);
AudioConnection          patchCord104(voice8filtermodmixer, 0, voice8filter, 1);
AudioConnection          patchCord105(voice3multiply, 0, voice3filter, 0);
AudioConnection          patchCord106(voice6filtermodmixer, 0, voice6filter, 1);
AudioConnection          patchCord107(voice7filtermodmixer, 0, voice7filter, 1);
AudioConnection          patchCord108(voice3filtermodmixer, 0, voice3filter, 1);
AudioConnection          patchCord109(voice1multiply, 0, voice1filter, 0);
AudioConnection          patchCord110(voice2multiply, 0, voice2filter, 0);
AudioConnection          patchCord111(voice2filtermodmixer, 0, voice2filter, 1);
AudioConnection          patchCord112(voice1filtermodmixer, 0, voice1filter, 1);
AudioConnection          patchCord113(voice12filter, 0, last4premix, 3);
AudioConnection          patchCord114(voice11filter, 0, last4premix, 2);
AudioConnection          patchCord115(voice10filter, 0, last4premix, 1);
AudioConnection          patchCord116(voice5filter, 0, mid4premix, 0);
AudioConnection          patchCord117(voice4filter, 0, first4premix, 3);
AudioConnection          patchCord118(voice9filter, 0, last4premix, 0);
AudioConnection          patchCord119(voice8filter, 0, mid4premix, 3);
AudioConnection          patchCord120(voice7filter, 0, mid4premix, 2);
AudioConnection          patchCord121(voice6filter, 0, mid4premix, 1);
AudioConnection          patchCord122(voice3filter, 0, first4premix, 2);
AudioConnection          patchCord123(voice2filter, 0, first4premix, 1);
AudioConnection          patchCord124(voice1filter, 0, first4premix, 0);
AudioConnection          patchCord125(voiceMidiN, 0, voiceMidimix, 2);
AudioConnection          patchCord126(voiceMidiB, 0, voiceMidimix, 1);
AudioConnection          patchCord127(voiceMidiA, 0, voiceMidimix, 0);
AudioConnection          patchCord128(voiceMidifilterenv, 0, voiceMidifiltermodmixer, 0);
AudioConnection          patchCord129(last4premix, 0, mainOutMixer, 2);
AudioConnection          patchCord130(voiceMidimix, 0, voiceMidimultiply, 0);
AudioConnection          patchCord131(voiceMidienv, 0, voiceMidimultiply, 1);
AudioConnection          patchCord132(mid4premix, 0, mainOutMixer, 1);
AudioConnection          patchCord133(first4premix, 0, mainOutMixer, 0);
AudioConnection          patchCord134(voiceMidifiltermodmixer, 0, voiceMidifilter, 1);
AudioConnection          patchCord135(voiceMidimultiply, 0, voiceMidifilter, 0);
AudioConnection          patchCord136(Midipremix, 0, mainOutMixer, 3);
AudioConnection          patchCord137(voiceMidifilter, 0, Midipremix, 0);
AudioConnection          patchCord138(mainOutMixer, 0, i2s1, 0);
AudioConnection          patchCord139(mainOutMixer, 0, i2s1, 1);
// AudioConnection          patchCord140(mainOutMixer, 0, usb1, 0);
// AudioConnection          patchCord141(mainOutMixer, 0, usb1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=2823,868
// GUItool: end automatically generated code
