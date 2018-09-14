int red=A0;
int yellow=A1;
int green=A2;
int timer = 0;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
 

}

void loop() {
 if (timer > 1023)
 {
  timer = 0;
  }

analogWrite(red, timer);
 timer += 10;
}
