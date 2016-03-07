/**************************************
 * DHT11 temperature and humidity alarm sound and light experiments 
 * When the indoor temperature is not appropriate, flashing LED alerts 
 * When the indoor humidity inappropriate buzzer
 **************************************/
#include <dht11.h>
dht11 DHT11;

#define DHT11PIN A0

void setup(){

  Serial.begin(9600);

}

void loop(){

  int val = DHT11.read(DHT11PIN);

  //Output humidity and indoor humidity to determine the suitability of such discomfort is lit to remind
//  Serial.print("a");
//  Serial.print((float)DHT11.humidity,1); 
//  Serial.print("z");
  //Output temperature and the room temperature to determine the suitability of such discomfort is lit to remind
//  Serial.print("a");
//  Serial.print((float)DHT11.temperature,1);
//  Serial.print("z");
  Serial.print("Humidity (%): ");
  Serial.println((float)DHT11.humidity); 
  //Output temperature and the room temperature to determine the suitability of such discomfort is lit to remind
  Serial.print("Temperature (oC): ");
  Serial.println((float)DHT11.temperature);
  delay(1000);
}




