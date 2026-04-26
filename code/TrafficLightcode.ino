
const int RED1 = 4;
const int YELLOW1 = 3;
const int GREEN1 = 2;

const int RED2 = 8;
const int YELLOW2 = 9;
const int GREEN2 = 10;

void setup() {
  // put your setup code here, to run once:
pinMode(RED1, OUTPUT);
pinMode(YELLOW1, OUTPUT);
pinMode(GREEN1, OUTPUT);
pinMode(RED2, OUTPUT);
pinMode(YELLOW2, OUTPUT);
pinMode(GREEN2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  go();
  delay(3000);
  caution();
  delay(3000);
  stop();
  delay(3000);
  wait();
  delay(3000);
  prepare();
  delay(3000);
  stop();
  delay(3000);
}

void go() {
  digitalWrite(RED1, LOW); 
  digitalWrite(YELLOW1, LOW);
  digitalWrite(GREEN1, HIGH);
  digitalWrite(RED2, HIGH); 
  digitalWrite(YELLOW2, LOW);
  digitalWrite(GREEN2, LOW);
}

void caution() {
  digitalWrite(RED1, LOW); 
  digitalWrite(YELLOW1, HIGH);
  digitalWrite(GREEN1, LOW);
  digitalWrite(RED2, HIGH); 
  digitalWrite(YELLOW2, LOW);
  digitalWrite(GREEN2, LOW);
}

void stop() {
  digitalWrite(RED1, HIGH); 
  digitalWrite(YELLOW1, LOW);
  digitalWrite(GREEN1, LOW);
  digitalWrite(RED2, HIGH); 
  digitalWrite(YELLOW2, LOW);
  digitalWrite(GREEN2, LOW);
}

void wait() {
  digitalWrite(RED1, HIGH); 
  digitalWrite(YELLOW1, LOW);
  digitalWrite(GREEN1, LOW);
  digitalWrite(RED2, LOW); 
  digitalWrite(YELLOW2, LOW);
  digitalWrite(GREEN2, HIGH);
}

void prepare() {
  digitalWrite(RED1, HIGH); 
  digitalWrite(YELLOW1, LOW);
  digitalWrite(GREEN1, LOW);
  digitalWrite(RED2, LOW); 
  digitalWrite(YELLOW2, HIGH);
  digitalWrite(GREEN2, LOW);
}



 