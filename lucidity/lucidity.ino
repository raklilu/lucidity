
 
int g = 8; 
int y = 10;
int r = 12;

void setup(){
 pinMode(g, OUTPUT);
 pinMode(y, OUTPUT);
 pinMode(r, OUTPUT); 

  delay(1000); //Delay 10 seconds (milliseconds)
  riff();
  delay(1000);
  riff();
  delay(1000);
  riff();
  delay(500);
  flash();
  delay(1000);
  flash();  
  delay(1000);
  flash();
}

void riff(){
  digitalWrite(g, HIGH);
  delay(300);
  digitalWrite(g, LOW);  
  delay(300);
  digitalWrite(y, HIGH);
  delay(300);
  digitalWrite(y, LOW);
  delay(300);
  digitalWrite(r, HIGH);
  delay(300);
  digitalWrite(r, LOW);
}

void flash(){
  digitalWrite(g, HIGH);
  digitalWrite(y, HIGH);
  digitalWrite(r, HIGH);
  delay(300);
  digitalWrite(r, LOW);
  digitalWrite(y, LOW);
  digitalWrite(g, LOW);  
}

void loop(){
 // setup();
}
