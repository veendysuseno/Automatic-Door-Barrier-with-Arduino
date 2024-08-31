#include <Servo.h>
Servo myservo;

#define in 2
#define out 3

void setup() {
  myservo.attach(11);
  pinMode(in, INPUT);
  pinMode(out, INPUT);
}

void loop() {
  int nilai_in = digitalRead(in);
  int nilai_out = digitalRead(out);

  if(nilai_in == LOW){
    myservo.write(90);
  }
  else if (nilai_out == LOW){
    myservo.write(0);
  }
}
