

void notes() {
    
  voice1a.frequency((DO)*vcoOneOct);
  voice1b.frequency((DO   * vcoTwoOct) );
  voice2a.frequency((DOd)*vcoOneOct);
  voice2b.frequency((DOd   * vcoTwoOct) );
  voice3a.frequency((RE)*vcoOneOct);
  voice3b.frequency((RE   * vcoTwoOct) );
  voice4a.frequency((REd)*vcoOneOct);
  voice4b.frequency((REd   * vcoTwoOct) );
  voice5a.frequency((MI)*vcoOneOct);
  voice5b.frequency((MI   * vcoTwoOct) );
  voice6a.frequency((FA)*vcoOneOct);
  voice6b.frequency((FA   * vcoTwoOct));
  voice7a.frequency((FAd)*vcoOneOct);
  voice7b.frequency((FAd   * vcoTwoOct) );
  voice8a.frequency((SOL)*vcoOneOct);
  voice8b.frequency((SOL  * vcoTwoOct) );
  voice9a.frequency((SOLd)*vcoOneOct);
  voice9b.frequency((SOLd   * vcoTwoOct));
  voice10a.frequency((LA)*vcoOneOct);
  voice10b.frequency((LA   * vcoTwoOct) );
  
  voice11a.frequency((LAd)*vcoOneOct);
  voice11b.frequency((LAd   * vcoTwoOct) );
  voice12a.frequency((SI)*vcoOneOct);
  voice12b.frequency((SI   * vcoTwoOct) );


  // voice1a.frequency((DO)*vcoOneOct);
  // voice1b.frequency((DO   * vcoTwoOct) * deTune);
  // voice2a.frequency((DOd)*vcoOneOct);
  // voice2b.frequency((DOd   * vcoTwoOct) * deTune);
  // voice3a.frequency((RE)*vcoOneOct);
  // voice3b.frequency((RE   * vcoTwoOct) * deTune);
  // voice4a.frequency((REd)*vcoOneOct);
  // voice4b.frequency((REd   * vcoTwoOct) * deTune);
  // voice5a.frequency((MI)*vcoOneOct);
  // voice5b.frequency((MI   * vcoTwoOct) * deTune);
  // voice6a.frequency((FA)*vcoOneOct);
  // voice6b.frequency((FA   * vcoTwoOct) * deTune);
  // voice7a.frequency((FAd)*vcoOneOct);
  // voice7b.frequency((FAd   * vcoTwoOct) * deTune);
  // voice8a.frequency((SOL)*vcoOneOct);
  // voice8b.frequency((SOL  * vcoTwoOct) * deTune);
  // voice9a.frequency((SOLd)*vcoOneOct);
  // voice9b.frequency((SOLd   * vcoTwoOct) * deTune);
  // voice10a.frequency((LA)*vcoOneOct);
  // voice10b.frequency((LA   * vcoTwoOct) * deTune);
  // voice11a.frequency((LAd)*vcoOneOct);
  // voice11b.frequency((LAd   * vcoTwoOct) * deTune);
  // voice12a.frequency((SI)*vcoOneOct);
  // voice12b.frequency((SI   * vcoTwoOct) * deTune);


  //do
  if (artboard.touch(0) > touchTr) {

    voice1env.amplitude(1, attackTime);
    voice1filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice1env.amplitude(0, releaseTime);
    voice1filterenv.amplitude(-1, releaseTimeFilter);
  }

  //DOd
  if (artboard.touch(1) > touchTr) {

    voice2env.amplitude(1, attackTime);
    voice2filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice2env.amplitude(0, releaseTime);
    voice2filterenv.amplitude(-1, releaseTimeFilter);
  }
  //RE

  if (artboard.touch(2) > touchTr) {

    voice3env.amplitude(1, attackTime);
    voice3filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice3env.amplitude(0, releaseTime);
    voice3filterenv.amplitude(-1, releaseTimeFilter);
  }
  //REd

  if (artboard.touch(3) > touchTr) {

    voice4env.amplitude(1, attackTime);
    voice4filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice4env.amplitude(0, releaseTime);
    voice4filterenv.amplitude(-1, releaseTimeFilter);
  }

  //MI

  if (artboard.touch(4) > touchTr) {

    voice5env.amplitude(1, attackTime);
    voice5filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice5env.amplitude(0, releaseTime);
    voice5filterenv.amplitude(-1, releaseTimeFilter);
  }
  //FA

  if (artboard.touch(5) > touchTr) {

    voice6env.amplitude(1, attackTime);
    voice6filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice6env.amplitude(0, releaseTime);
    voice6filterenv.amplitude(-1, releaseTimeFilter);
  }
  //FAd

  if (artboard.touch(6) > touchTr) {

    voice7env.amplitude(1, attackTime);
    voice7filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice7env.amplitude(0, releaseTime);
    voice7filterenv.amplitude(-1, releaseTimeFilter);
  }
  //SOL

  if (artboard.touch(7) > touchTr) {

    voice8env.amplitude(1, attackTime);
    voice8filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice8env.amplitude(0, releaseTime);
    voice8filterenv.amplitude(-1, releaseTimeFilter);
  }
  //SOLd

  if (artboard.touch(8) > touchTr) {

    voice9env.amplitude(1, attackTime);
    voice9filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice9env.amplitude(0, releaseTime);
    voice9filterenv.amplitude(-1, releaseTimeFilter);
  }
  //LA
  if (artboard.touch(9) > touchTr) {

    voice10env.amplitude(1, attackTime);
    voice10filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice10env.amplitude(0, releaseTime);
    voice10filterenv.amplitude(-1, releaseTimeFilter);
  }

  //LAd
  if (artboard.touch(10) > touchTr) {

    voice11env.amplitude(1, attackTime);
    voice11filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice11env.amplitude(0, releaseTime);
    voice11filterenv.amplitude(-1, releaseTimeFilter);
  }
  //SI
  if (artboard.touch(11) > touchTr) {

    voice12env.amplitude(1, attackTime);
    voice12filterenv.amplitude(1, attackTimeFilter);
  }
  //altrimenti la nota non è piu suonata e parte il relase
  else {
    voice12env.amplitude(0, releaseTime);
    voice12filterenv.amplitude(-1, releaseTimeFilter);
  }


}
