#include <SoftwareSerial.h>// import the serial library
SoftwareSerial MyBlue(10,11); // RX, TX
char com;

#define rightPWM 9
#define leftPWM 10
#define in1 5
#define in2 6
#define in3 7
#define in4 8

int PWM = 255;

void forw();
void back();
void right();
void left();
void halt();
void stopp();

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  forw();
  delay(100);
  back();
}

void back(){
  analogWrite(rightPWM, PWM);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(leftPWM, PWM);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void forw(){
  analogWrite(rightPWM, PWM);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(leftPWM, PWM);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void left(){
  analogWrite(rightPWM, PWM);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(leftPWM, PWM);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void right(){
  analogWrite(rightPWM, PWM);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(leftPWM, PWM);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void stopp(){
  analogWrite(rightPWM, PWM);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(leftPWM, PWM);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void halt(){
  analogWrite(rightPWM, PWM);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  analogWrite(leftPWM, PWM);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);
}
