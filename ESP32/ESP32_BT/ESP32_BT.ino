#include "BluetoothSerial.h"
#include "HardwareSerial.h"

int cmd;
int ledPin = 2;

HardwareSerial SerialPort(2);
BluetoothSerial serialBT;

void setup() {
  // put your setup code here, to run once:
  serialBT.begin("Esp32-BT");
  SerialPort.begin(115200, SERIAL_8N1, 16, 17);
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(serialBT.available()){
    cmd = serialBT.read();
    SerialPort.write(cmd);
  }
}
