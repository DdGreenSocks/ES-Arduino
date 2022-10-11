/*
  Deirdre Deeney
  
  Adafruit- Lesson 4 Shift Register Larson
*/

int latchPin = 5;
int clockPin = 6;
int dataPin = 4;

byte leds = 0;

void setup() 
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
}

void loop() 
{
  leds = 0;
  
  delay(500);
  for (int i = 0; i < 8; i++)
  {
    delay(500);
    updateShiftRegister(i,HIGH);
    delay(500);
    updateShiftRegister(i,LOW);
  }
  for (int i = 7; i >0; i--)
  {
    delay(500);
    updateShiftRegister(i,HIGH);
    delay(500);
    updateShiftRegister(i,LOW);
  }
}

void updateShiftRegister(int desiredPin, boolean desiredState)
{
   
   bitWrite(leds,desiredPin,desiredState);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, LOW);
   digitalWrite(latchPin, HIGH);
   
}

