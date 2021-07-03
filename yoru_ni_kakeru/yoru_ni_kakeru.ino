
//int ikura[15] = {659, 784, 880, 698, 698, 659, 587, 523, 587, 880, 784, 659, 659, 587, 523};

int first[3] = {659, 784, 880};
int sec[6] = {659, 587, 523, 587, 880, 784};
int long_part[2] = {880, 659};
int fin[12] = {659, 587, 523, 587, 880, 784, 880, 987, 1046, 0, 659, 587};

int buzzer = 11;



void setup(){

}

void loop(){

  int i;

  for(i = 0; i < 3; i++){
    tone(buzzer, first[i]);
    delay(275);
    noTone(buzzer);
    delay(25);
  }
  
  tone(buzzer, 698);
  delay(600);
  noTone(buzzer);
  delay(40);

  for(i = 0; i < 6 ; i++){
    tone(buzzer, sec[i]);
    delay(275);
    noTone(buzzer);
    delay(25);
  }

  

  for(i = 0; i < 2 ; i++){
    tone(buzzer, long_part[i]);
    delay(450);
  }
  tone(buzzer, 587);
  delay(275);
  noTone(buzzer);
  tone(buzzer, 523);
  delay(275);
  noTone(buzzer);

  i = 0;


  noTone(buzzer);
  delay(450);

  for(i = 0; i < 3; i++){
    tone(buzzer, first[i]);
    delay(200);
    noTone(buzzer);
    delay(20);
  }

  tone(buzzer, 698);
  delay(425);
  noTone(buzzer);
  delay(33);

  for(i = 0; i < 12 ; i++){
    tone(buzzer, fin[i]);
    delay(175);
    noTone(buzzer);
    delay(15);
  }

  tone(buzzer, 523);
  delay(666);
  
  noTone(buzzer);
  delay(1000);

  

  
}
