//#include "iOSTrigger.h"
#include <Adafruit_CC3000.h>
#include <ccspi.h>
#include <SPI.h>
#include <string.h>
#include "utility/debug.h"

#define LENGTH 1

int rxBuffer[128];
int rxIndex = 0;

void setup() {
  //Open serial communication
  Serial.begin( 115200 );
  
  // Connect to access point
  cc3000.connectToAP( WLAN_SSID, WLAN_PASS, WLAN_SECURITY ) );

  //Set analog output pins
  pinMode( 3, OUTPUT );
  pinMode( 4, OUTPUT );
  pinMode( 5, OUTPUT );
  pinMode( 6, OUTPUT );
}

void loop () {
  if (Serial.available() > 0) {
    rxBuffer[rxIndex++] = Serial.read();
    if (rxIndex == LENGTH) {
      Serial.print("Byte received: ");
      Serial.println(rxBuffer[0]);
      if (rxBuffer[0] == 65) {
        triggerA();
      } else if ( rxBuffer[0] == 66 ) {
        triggerB();
      } else if ( rxBuffer[0] == 67 ) {
        triggerC();
      } else if ( rxBuffer[0] == 68 ) {
        triggerD();
      } else if ( rxBuffer[0] == 69 ) {
        triggerE();
      } else if ( rxBuffer[0] == 70 ) {
        triggerF();
      } else if ( rxBuffer[0] == 71 ) {
        triggerG();
      } else if ( rxBuffer[0] == 72 ) {
        triggerH();
      } else if ( rxBuffer[0] == 73 ) {
        triggerI();
      } else if ( rxBuffer[0] == 74 ) {
        triggerJ();
      } else if ( rxBuffer[0] == 75 ) {
        triggerK();
      } else if ( rxBuffer[0] == 76 ) {
        triggerL();
      } else if ( rxBuffer[0] == 77 ) {
        triggerM();
      } else if ( rxBuffer[0] == 78 ) {
        triggerN();
      } else if ( rxBuffer[0] == 79 ) {
        triggerO();
      }    
      rxIndex = 0;
    }
  }
}

//All
void triggerA() {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
}

// Triple combinations
void triggerB() {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}

void triggerC() {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
}

void triggerD() {
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
}

void triggerE() {
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
}

//Double combinations
void triggerF() {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void triggerG() {
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
}

void triggerH() {
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
}

void triggerI() {
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}

void triggerJ() {
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
}

void triggerK() {
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
}

// Single combinations
void triggerL() {
  digitalWrite(3, HIGH);
  delay(100);
  digitalWrite(3, LOW);
}

void triggerM() {
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(4, LOW);
}

void triggerN() {
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(5, LOW);
}

void triggerO() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
}

// Saving for now
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
