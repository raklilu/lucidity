

int g = 8; 
int y = 10;
int r = 12;

void setup(){
 pinMode(g, OUTPUT);
 pinMode(y, OUTPUT);
 pinMode(r, OUTPUT); 
}

void loop(){
  digitalWrite(g, HIGH);
  delay(300);
  digitalWrite(y, HIGH);
  delay(300);
  digitalWrite(r, HIGH);
  delay(300);
  digitalWrite(r, LOW);
  delay(300);
  digitalWrite(y, LOW);
  delay(300);
  digitalWrite(g, LOW);
  delay(125);
}
