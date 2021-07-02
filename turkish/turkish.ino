#include <Vector.h>

#include <Tone.h>



int buzzer = 11;

int turkish[17] = {988, 880, 831, 880, 1046, 0, 1175, 1046, 988, 1046, 1318, 0, 1397, 1318, 1245, 1318};

void setup(){
 
}
void loop(){

  int i;

  for(i = 0; i < 17; i++){
    tone(buzzer, turkish[i]);
    delay(150);
    noTone(buzzer);
    delay(50);
    
  }

  i = 0;
}
