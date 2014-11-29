/*
Luigi Findanno 13/04/2014
Serial to parallel out
When receive:
uppercase = out on
lowercase = out off
*/

const int ua = 2;
const int ub = 3;
const int uc = 4;
const int ud = 5;
const int ue = 6;
const int uf = 7;
const int ug = 8;
const int uh = 9;

void setup() {
  // inizializza pin:
  pinMode(ua, OUTPUT);
  pinMode(ub, OUTPUT);
  pinMode(uc, OUTPUT);
  pinMode(ud, OUTPUT);
  pinMode(ue, OUTPUT);
  pinMode(uf, OUTPUT);
  pinMode(ug, OUTPUT);
  pinMode(uh, OUTPUT);  
  // initialize serial:
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    int inByte = Serial.read();

    switch (inByte) {
    case 'A':    
      digitalWrite(ua, HIGH);
      break;
    case 'B':    
      digitalWrite(ub, HIGH);
      break;
    case 'C':    
      digitalWrite(uc, HIGH);
      break;
    case 'D':    
      digitalWrite(ud, HIGH);
      break;
    case 'E':    
      digitalWrite(ue, HIGH);
      break;
    case 'F':    
      digitalWrite(uf, HIGH);
      break;
    case 'G':    
      digitalWrite(ug, HIGH);
      break;
    case 'H':    
      digitalWrite(uh, HIGH);
      break;
    case 'a':    
      digitalWrite(ua, LOW);
      break;
    case 'b':    
      digitalWrite(ub, LOW);
      break;
    case 'c':    
      digitalWrite(uc, LOW);
      break;
    case 'd':    
      digitalWrite(ud, LOW);
      break;
    case 'e':    
      digitalWrite(ue, LOW);
      break;
    case 'f':    
      digitalWrite(uf, LOW);
      break;
    case 'g':    
      digitalWrite(ug, LOW);
      break;
    case 'h':    
      digitalWrite(uh, LOW);
      break;
    } 
  }
}
