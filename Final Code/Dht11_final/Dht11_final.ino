#include <dht.h>
dht DHT;
#define DHT11_PIN 2
void setup() {
  Serial.begin(9600);
}

void loop() {
  int chk= DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.print(DHT.temperature);
  Serial.print("\nHumidity = ");
  Serial.print(DHT.humidity);
  delay(1000);

}
