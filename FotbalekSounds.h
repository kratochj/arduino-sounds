/*
  Morse.h - Library for playing sounds.
  Created by Jiri Kratochvil
  Released into the public domain.
*/
#ifndef FotbalekSounds_h
#define FotbalekSounds_h

#include "Arduino.h"

class FotbalekSounds
{
  public:
    FotbalekSounds(int pin);
    void play_end_of_game();  
  private:
    void playTone(int tone, int duration);
    void playNote(char note, int duration);
    
    int _pin;
};

#endif
