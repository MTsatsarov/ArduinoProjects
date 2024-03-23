#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
#define PIN8 8
#define PIN9 9
#define PIN10 10
int delayTime = 400;
const int numLeds = 9;
int ledPins[numLeds] = {PIN2, PIN3, PIN4, PIN5, PIN6, PIN7, PIN8, PIN9, PIN10};
void setup() {
  pinMode(PIN2, OUTPUT);
  pinMode(PIN3, OUTPUT);
  pinMode(PIN4, OUTPUT);
  pinMode(PIN5, OUTPUT);
  pinMode(PIN6, OUTPUT);
  pinMode(PIN7, OUTPUT);
  pinMode(PIN8, OUTPUT);
  pinMode(PIN9, OUTPUT);
  pinMode(PIN10, OUTPUT);
  
}

void loop() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }
  for (int i = numLeds; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }
  for (int i = 0; i < numLeds; i++) {
    if(ledPins[i] % 2 ==0){
      digitalWrite(ledPins[i], HIGH);
      delay(delayTime);
      digitalWrite(ledPins[i], LOW);
    }
  }
  for (int i = 0; i < numLeds; i++) {
    if(ledPins[i] % 2 !=0){
      digitalWrite(ledPins[i], HIGH);
      delay(delayTime);
      digitalWrite(ledPins[i], LOW);
    }
  }
  for (int i = 0; i < numLeds / 2; i++) {
     digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[numLeds - i - 1], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW); 
    digitalWrite(ledPins[numLeds - i - 1], LOW);
  }
   digitalWrite(ledPins[numLeds /2], HIGH);
   delay(delayTime);
   digitalWrite(ledPins[numLeds /2], LOW);

    for (int i = numLeds / 2; i < numLeds; i++) {
     digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[numLeds - i - 1], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW); 
    digitalWrite(ledPins[numLeds - i - 1], LOW);
  }
}
