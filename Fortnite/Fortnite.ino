int red=10;
int yellow=9;
int green=11;
float timer1 = 0;
float timer2 = 50;
float timer3 = 100;
void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  Serial.println(analogRead(0));
 if (timer1 >= 255) {timer1 = 0;}
 if (timer2 >= 255) {timer2 = 0;}
 if (timer3 >= 255) {timer3 = 0;}
analogWrite(red,timer1);
analogWrite(yellow, timer2);
analogWrite(green, timer3);
 timer1+= .3;
 timer2+= .3;
 timer3+= .3; 
}
