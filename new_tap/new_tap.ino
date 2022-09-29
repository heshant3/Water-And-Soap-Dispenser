#define SENSOR1 9
#define ACTION1 13

int count = 0;

void setup() {

  Serial.begin(9600);
  pinMode(SENSOR1, INPUT_PULLUP);
  pinMode(ACTION1, OUTPUT);

}


void loop() {

  int L = digitalRead(SENSOR1);


   if (L == 0) {
    Serial.println(" Sen 2 ");
    digitalWrite(ACTION1, HIGH);
  }

  else {
    Serial.println("No object");
    digitalWrite(ACTION1, LOW);
    delay(500);

  }

}
