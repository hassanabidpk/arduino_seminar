#include <dht.h>

dht DHT;

#define DHT11_PIN 5

void setup()
{
  Serial.begin(9600);
  Serial.println("DHT TEST PROGRAM ");
  Serial.print("LIBRARY VERSION: ");
  Serial.println(DHT_LIB_VERSION);
  Serial.println();
  Serial.println("Type,\tstatus,\tHumidity (%),\tTemperature (C)");
}

void loop()
{
  // READ DATA
//  Serial.print("DHT11, \n");
  int chk = DHT.read11(DHT11_PIN);
  switch (chk)
  {
    case DHTLIB_OK:  
		Serial.print("OK,\n"); 
		break;
    case DHTLIB_ERROR_CHECKSUM: 
		Serial.print("Checksum error,\n"); 
		break;
    case DHTLIB_ERROR_TIMEOUT: 
		Serial.print("Time out error,\n"); 
		break;
    case DHTLIB_ERROR_CONNECT:
        Serial.print("Connect error,\n");
        break;
    case DHTLIB_ERROR_ACK_L:
        Serial.print("Ack Low error,\t");
        break;
    case DHTLIB_ERROR_ACK_H:
        Serial.print("Ack High error,\n");
        break;
    default: 
		Serial.print("Unknown error,\n"); 
		break;
  }
  // DISPLAY DATA
  Serial.print("Humidity (%) : ");
  Serial.print(DHT.humidity, 1);  
  Serial.print("    Temperature : ");
  Serial.println(DHT.temperature, 1);
  Serial.print("\n");
  delay(2000);
}
//
// END OF FILE
//

