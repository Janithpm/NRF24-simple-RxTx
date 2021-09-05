#include<RF24.h>
#include<SPI.h>
#include<nRF24L01.h>

RF24 radio(9,10);
const uint64_t pipe = 0x0a0c0a0c0aLL;
char msg[10];
void setup(){
pinMode(2,OUTPUT);
Serial.begin(9600);
radio.begin();
radio.openReadingPipe(1,msg);
radio.startListening();

}

void loop() {
if(radio.available()){
  
  
radio.read(msg,sizeof(msg));
Serial.println(msg);

}

  
}
