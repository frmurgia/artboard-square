 Serial.print("octave 1:      ");
    Serial.println(artboard.pot_2(3));

    Serial.print("noise:         ");
    Serial.println(artboard.pot_1(3));

    Serial.print("mix:           ");
    Serial.println(artboard.pot_1(1));

    Serial.print("octave 2:      ");
    Serial.println(artboard.pot_2(4));

    Serial.print("detune:        ");
    Serial.println(artboard.pot_1(0));

    Serial.print("attack:        ");
    Serial.println(artboard.pot_1(4));

    Serial.print("decay:         ");
    Serial.println(artboard.pot_1(6));

    Serial.print("filter freq:   ");
    Serial.println(artboard.pot_1(14));

    Serial.print("filter reso:   ");
    Serial.println(artboard.pot_1(13));

    Serial.print("lfo attack:    ");
    Serial.println(artboard.pot_1(8));

    Serial.print("lfo decay:     ");
    Serial.println(artboard.pot_1(9));

    Serial.print("osc 1 shape:   ");
    Serial.println(artboard.pot_1(5));

    Serial.print("filter octave: ");
    Serial.println(artboard.pot_1(12));

    Serial.print("filter pulse:  ");
    Serial.println(artboard.pot_2(1));

    Serial.print("lfo sustain:   ");
    Serial.println(artboard.pot_1(10));

    Serial.print("lfo release:   ");
    Serial.println(artboard.pot_1(11));

    Serial.print("lfo freq:      ");
    Serial.println(artboard.pot_1(15));

    Serial.print("lfo mod:       ");
    Serial.println(artboard.pot_2(0));

    Serial.print("volume:        ");
    Serial.println(artboard.pot_2(9));

    Serial.print("env mod:       ");
    Serial.println(artboard.pot_1(2));

    Serial.print("lfo shape:     ");
    Serial.println(artboard.pot_2(2));

    // Aggiungi un ritardo per evitare di sovraccaricare l'output seriale
    delay(100);
