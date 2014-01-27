//#include "iOSTrigger.h"

#define LENGTH 1

int rxBuffer[128];
int rxIndex = 0;

void setup() {
  //Open serial communication and configue WiFly
  Serial.begin(9600);
//  configWiFly();
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop () {
  if (Serial.available() > 0) {
    rxBuffer[rxIndex++] = Serial.read();
    if (rxIndex == LENGTH) {
      Serial.print("Byte received: ");
      Serial.println(rxBuffer[0]);
      if (rxBuffer[0] == 65) {
        triggerA();
      } 
      if (rxBuffer[0] == 66) {
        triggerB();
      }
      if (rxBuffer[0] == 67) {
        triggerC();
      }
      if (rxBuffer[0] == 68) {
        triggerD();
      }      
      rxIndex = 0;
    }
  }
}

//void configWiFly() {
//  //Send header byte to intialize serial communication
//  Serial.write("0");
//  //Send WiFly command mode string
//  Serial.write("$$$");
//  //Delay so that WiFly can enter command mode
//  //Configure WLAN
//  Serial.write("set w j 1");
//  Serial.println();
//  delay(200);
//  Serial.write("set w a ");
//  Serial.write(auth);
//  Serial.println();
//  delay(200);
//  Serial.write("set w p ");
//  Serial.write(key);
//  Serial.println();
//  delay(200);
//  Serial.write("set w s ");
//  Serial.write(ssid);
//  Serial.println();
//  delay(200);
//  //CONFIGURE IP
//  Serial.write("set i p ");
//  Serial.write(proto);
//  Serial.println();
//  delay(200);
//  Serial.write("set i h ");
//  Serial.write(host);
//  Serial.println();
//  delay(200);
//  Serial.write("set i r ");
//  Serial.write(remote);
//  Serial.println();
//  delay(200);
//  Serial.write("set i l ");
//  Serial.write(local);
//  Serial.println();
//  delay(200);
//  //Housekeeping
//  Serial.write("save");
//  Serial.println();
//  delay(200);
//  Serial.write("exit");
//  Serial.println();
//  delay(200);
//}

void triggerA() {
  digitalWrite(3, HIGH);
  delay(100);
  digitalWrite(3, LOW);
}

void triggerB() {
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(4, LOW);
}

void triggerC() {
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(5, LOW);
}

void triggerD() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
}

void triggerE() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
}

void triggerF() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
}

void triggerD() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
}

void triggerG() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
}

void triggerH() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
}

void triggerI() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
}

void triggerK() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
}

void triggerK() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
}

void triggerL() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
}

void triggerM() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
}

void triggerN() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
}

void triggerO() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
}

void triggerP() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
}
