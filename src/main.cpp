//This code was made to decode and transmit IR signals in order to convert existing devices that relied on IR into smart integration
//This code will decode the signal and uses example code from example libraries
//This code will only work on Arduino Platforms, it will not work on ESP8266 platforms, the ESP8266 uses a slightly different library

#include <Arduino.h>
//Include IR decoder library
#include <IRremote.h>

#define transmit_pin 9 //This is the pin that is set by default for the transmit pin for IR leds, this can be modified but it requires extra work. Default on Arduino Uno is pin 3 and default on Arduino Mega is pin 9
#define recieve_pin 10 //This is the signal pin of the IR reciever. Please ensure you are using an IR reciever with 3 pins

#define Transmit_Code 0x8F330CF //This is the test transmit code that you want to transmit. It is in hexadecimal form, use 0x to indicate it is in hexadecimal form

IRrecv reciever(recieve_pin); // Create the IR Reciever Object to recieve
IRsend transmitter; // Create the IR transmitter Object to transmit

decode_results results; //This is the object that contains the decoded data

void setup() {
  Serial.begin(9600); //Set Baud Rate
  pinMode(recieve_pin, INPUT); //Declare Recieve Pin as Input
  reciever.enableIRIn(); //Enable the reciever

  Serial.print("Please ensure that you have uncommented the code of the transmit/recieve to use this code");

}

void loop() {

  
  //Uncomment this code if you need to figure out the reciever code type and code

  /*if (reciever.decode(&results)) {
    if (results.decode_type == NEC) {
      Serial.print("NEC: ");
    } else if (results.decode_type == SONY) {
      Serial.print("SONY: ");
    } else if (results.decode_type == RC5) {
      Serial.print("RC5: ");
    } else if (results.decode_type == RC6) {
      Serial.print("RC6: ");
    } else if (results.decode_type == UNKNOWN) {
      Serial.print("UNKNOWN: ");
    }
    Serial.println(results.value, HEX);
    reciever.resume(); // Receive the next value
  }
  */

  /*Uncomment this code if you want to transmit code
  transmitter.sendNEC(Transmit_Code, 32); //This is in the NEC format, if you have another format search up the proper method. i.e .sendSony(), .sendNEC()
  delay(2000); //Adjust delay as necessary
  */

}

