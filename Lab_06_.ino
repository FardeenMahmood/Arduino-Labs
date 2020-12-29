int c = 0;

#define SEG_A 11 // constants for each of the arduino connection to a particular segment
#define SEG_B 10
#define SEG_C 9
#define SEG_D 8
#define SEG_E 7
#define SEG_F 6
#define SEG_G 5
#define SEG_DP 4
#define COM 12

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(SEG_A, OUTPUT); // configure pins used to ouput
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);
  pinMode(SEG_DP, OUTPUT);
  pinMode(COM, OUTPUT);
  digitalWrite(COM, HIGH);
}
void loop() {
  // put your main code here, to run repeatedly:
  c = Serial.read();
  
  switch(c) {
    case '0' : digitalWrite(SEG_A, LOW);
               digitalWrite(SEG_B, LOW);
               digitalWrite(SEG_C, LOW);
               digitalWrite(SEG_D, LOW);
               digitalWrite(SEG_E, LOW);
               digitalWrite(SEG_F, LOW);  
               digitalWrite(SEG_DP, LOW);
    break;
    case '1' : digitalWrite(SEG_B, LOW);
               digitalWrite(SEG_C, LOW);
               digitalWrite(SEG_DP, LOW);
    break;
    case '2' : digitalWrite(SEG_A, LOW);
               digitalWrite(SEG_B, LOW);
               digitalWrite(SEG_G, LOW);
               digitalWrite(SEG_E, LOW);
               digitalWrite(SEG_D, LOW);
               digitalWrite(SEG_DP, LOW);
    break;
    case '3' : digitalWrite(SEG_A, LOW);
               digitalWrite(SEG_B, LOW);
               digitalWrite(SEG_C, LOW);
               digitalWrite(SEG_D, LOW);
               digitalWrite(SEG_G, LOW);
               digitalWrite(SEG_DP, LOW);
    break;
    case '4' : digitalWrite(SEG_B, LOW);
               digitalWrite(SEG_C, LOW);
               digitalWrite(SEG_G, LOW);
               digitalWrite(SEG_F, LOW); 
               digitalWrite(SEG_DP, LOW);
    break;
    case '5' : digitalWrite(SEG_A, LOW);
               digitalWrite(SEG_C, LOW);
               digitalWrite(SEG_D, LOW);
               digitalWrite(SEG_F, LOW);
               digitalWrite(SEG_G, LOW);
               digitalWrite(SEG_DP, LOW);
    break;
    case '6' : digitalWrite(SEG_A, LOW);
               digitalWrite(SEG_C, LOW);
               digitalWrite(SEG_D, LOW);
               digitalWrite(SEG_E, LOW);
               digitalWrite(SEG_F, LOW);  
               digitalWrite(SEG_G, LOW);  
               digitalWrite(SEG_DP, LOW);
    break;
    case '7' : digitalWrite(SEG_A, LOW);
               digitalWrite(SEG_B, LOW);
               digitalWrite(SEG_C, LOW);
               digitalWrite(SEG_DP, LOW);
    break;
    case '8' : digitalWrite(SEG_A, LOW);
               digitalWrite(SEG_B, LOW);
               digitalWrite(SEG_C, LOW);
               digitalWrite(SEG_D, LOW);
               digitalWrite(SEG_E, LOW);
               digitalWrite(SEG_F, LOW); 
               digitalWrite(SEG_G, LOW); 
               digitalWrite(SEG_DP, LOW);
    break;          
    case '9' : digitalWrite(SEG_A, LOW);
               digitalWrite(SEG_B, LOW);
               digitalWrite(SEG_C, LOW);
               digitalWrite(SEG_E, LOW);
               digitalWrite(SEG_F, LOW); 
               digitalWrite(SEG_DP, LOW);
    break;
  }

  delay(1000);

  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH); 
  digitalWrite(SEG_G, HIGH); 
  digitalWrite(SEG_DP, HIGH);
}




