/**************************************
 * DHT11 temperature and humidity experiments 
 **************************************/
#include <SoftwareSerial.h>
#include <dht11.h>
int blueTx = 2;
int blueRx = 3;
SoftwareSerial mySerial(blueTx, blueRx);
dht11 DHT11;

#define DHT11PIN A0
     

void setup(){

  Serial.begin(9600);
  mySerial.begin(9600);
  Serial.println("DHT11 Monitoring");
  Serial.print("\n");

}

void loop(){

  int val = DHT11.read(DHT11PIN);
  Serial.print("Read sensor: ");
  switch (val)
  {
  case DHTLIB_OK:
    Serial.println("OK");
    break;
  case DHTLIB_ERROR_CHECKSUM: 
    Serial.println("Checksum error"); 
    break;
  case DHTLIB_ERROR_TIMEOUT: 
    Serial.println("Time out error"); 
    break;
  default: 
    Serial.println("Unknown error"); 
    break;
  }

  //Output humidity and indoor humidity to determine the suitability of such discomfort is lit to remind
  Serial.print("Humidity (%): ");
  Serial.println((float)DHT11.humidity); 
  mySerial.print("Humidity (%): ");
  mySerial.println((float)DHT11.humidity); 
  //Output temperature and the room temperature to determine the suitability of such discomfort is lit to remind
  Serial.print("Temperature (oC): ");
  Serial.println((float)DHT11.temperature);
  mySerial.print("Temperature (oC): ");
  mySerial.println((float)DHT11.temperature);
  delay(1000);
}




