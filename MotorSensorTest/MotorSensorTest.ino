int x;

void setup() {
#define M1A 8
#define M1B 9
#define M2A 6
#define M2B 7
  Serial.begin(9600);
  pinMode(M1A, OUTPUT);
  pinMode(M1B, OUTPUT);
  pinMode(M2A, OUTPUT);
  pinMode(M2B, OUTPUT);

}

void loop() {
  x = analogRead(3);
  Serial.print(x);
  if (x > 100) {
    Serial.println("BLACK");
    digitalWrite(M1A, HIGH);
    digitalWrite(M1B, LOW);
    digitalWrite(M2A, LOW);
    digitalWrite(M2B, HIGH);
    delay(100);
  } else {
    Serial.println("WHITE");
    digitalWrite(M1A, LOW);
    digitalWrite(M1B, HIGH);
    digitalWrite(M2A, HIGH);
    digitalWrite(M2B, LOW);
    delay(1000);
    digitalWrite(M1A, HIGH);
    digitalWrite(M1B, LOW);
    digitalWrite(M2A, HIGH);
    digitalWrite(M2B, LOW);
    delay(1000);
  }
}
