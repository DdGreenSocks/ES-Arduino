/*
  Deirdre Deeney
  
  Adafruit- Lesson 3 RGB LED
*/

int redled = 11;
int greenled = 10;
int blueled = 9;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);
  pinMode(blueled, OUTPUT);
}

void loop()
{
  setColor(255, 0, 0);  // red
  delay(1000);
  setColor(0, 255, 0);  // green
  delay(1000);
  setColor(0, 0, 255);  // blue
  delay(1000);
  setColor(255, 255, 0);  // yellow (red/green)
  delay(1000);  
  setColor(80, 0, 80);  // purple (red/blue)
  delay(1000);
  setColor(0, 0, 0);  // off
  delay(1000);
  setColor(0, 255, 255);  // aqua (green/blue)
  delay(1000);
}

void setColor(int red, int green, int blue)
{
  
  analogWrite(redled, red);
  analogWrite(greenled, green);
  analogWrite(blueled, blue);  
}