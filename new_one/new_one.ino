
#define SENSOR1 11  // Sensor 1
#define SENSOR2 12  // Sensor 2

#define ACTION1 6  // Motor 1
#define ACTION2 7  //Motor 2
int count = 0;

/*--------------------------------------------------------------*/

void setup() {
  Serial.begin(9600);
  pinMode(SENSOR1, INPUT_PULLUP);
  pinMode(SENSOR2, INPUT_PULLUP);

  pinMode(ACTION1, OUTPUT);
  pinMode(ACTION2, OUTPUT);
}

void loop() {

  int L = digitalRead(SENSOR1); //Sensor 1 value reade 
  int R = digitalRead(SENSOR2); //Sensor 2 value reade

/*------------------------------------(Soap part)---------------------------*/
  if (L == 1) {
    Serial.println(" Sen 1");

    count=count+1;
    delay(100);
    Serial.println(count);


    if (count <= 5) {
      digitalWrite(ACTION1, HIGH);
      digitalWrite(ACTION2, LOW);
    }
    else {
      digitalWrite(ACTION1, LOW);
      digitalWrite(ACTION2, LOW);
    }

  }
/*--------------------------------------------------(Water part)------*/
  else if (R == 1) {
    count = 0;
    Serial.println(" Sen 2 ");
    digitalWrite(ACTION2, HIGH);
    digitalWrite(ACTION1, LOW);
    delay(700);
  }

  else if (R == 1 && L==1){

    
  }

/*---------------------------------------------------(End of part)-----*/
  else {
    count = 0;
    Serial.println("No object");
    digitalWrite(ACTION1, LOW);
    digitalWrite(ACTION2, LOW);
    delay(700);
  }
/*---------------------------------------------------(End if else loop)----*/
}

/*---------------------------------------------------(END code)---------*/
