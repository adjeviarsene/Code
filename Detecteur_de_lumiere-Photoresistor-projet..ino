int AnalogValue;
int ValuePr=A0;
int intensite=19;

int Led_rouge=13;
int Led_jaune=9;
int Led_vert=10;

void setup() {
  pinMode(ValuePr,INPUT);
  pinMode(Led_rouge,OUTPUT);
  pinMode(Led_jaune,OUTPUT);
  pinMode(Led_vert,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  AnalogValue= analogRead((ValuePr)/4);
  analogWrite(Led_rouge,AnalogValue);
  analogWrite(Led_jaune,AnalogValue);
  analogWrite(Led_vert,AnalogValue);
  
  delay(20);
  
}
