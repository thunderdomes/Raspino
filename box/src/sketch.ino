#include <DHT.h>
#define DHTPIN 7
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup()
{
 
  
  
  Serial.begin(9600);
  //Serial.println("Booting..");
  dht.begin();
  
}

void loop()
{
  // Read values from dht11 sensor
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  //Print temperatures
  // check if returns are valid, if they are NaN , output error.
  if (isnan (temperature) || isnan (humidity)) {
          Serial.println("Failed to read from dht");
  } else {
    Serial.print(humidity);
    Serial.print("*");
    Serial.print(temperature);
    Serial.println("*");
         
  }
}