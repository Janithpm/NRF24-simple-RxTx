#include <RF24.h>
#include <SPI.h>
#include <nRF24L01.h>
RF24 radio(9,10);
const uint64_t pipe = 0x0a0c0a0c0aLL;
char msg[10];


void setup() {
radio.begin();
Serial.begin(9600);
radio.openWritingPipe(pipe);

}

void loop() {
  

}
void serialEvent(){
Serial.readBytesUntil('\n',msg,sizeof(msg));
  radio.write(msg,sizeof(msg));
}
