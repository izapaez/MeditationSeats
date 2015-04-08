
const int button1 = 2;
const int button2 = 3;
const int button3 = 4;
const int button4 = 5;

int inByte;


void setup() {
  Serial.begin(9600);
  establishContact();
}

void loop () {



  if (Serial.available()){
    inByte = Serial.read();

    int sensorValue = digitalRead(button1);
    Serial.print(sensorValue);
    Serial.print(',');
    sensorValue = digitalRead(button2);
    Serial.print(sensorValue);
    Serial.print(',');
    sensorValue= digitalRead(button3);
    Serial.print(sensorValue);
    Serial.print(',');
    sensorValue = digitalRead(button4);
    Serial.print(sensorValue);
    Serial.println(" ");
  }

}

void establishContact(){
 while(Serial.available() <=0){
    Serial.println("begin");
    delay(10);
  }
}




