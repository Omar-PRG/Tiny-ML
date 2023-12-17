#include <ArduinoBLE.h>

BLEService myService("fff0");
BLEIntCharacteristic resistance("fff1", BLERead | BLEWrite);
BLEIntCharacteristic cap("fff2", BLERead | BLEWrite);
BLEIntCharacteristic diode("fff3", BLERead | BLEWrite);
BLEIntCharacteristic background ("fff4", BLERead | BLEWrite);

// Advertising parameters should have a global scope. Do NOT define them in 'setup' or in 'loop'
const uint8_t manufactData[4] = {0x01, 0x02, 0x03, 0x04};
const uint8_t serviceData[3] = {0x00, 0x01, 0x02};
 int esistance = 1;
 int capacitor=0;
 int dode=55;
 int bacground=14;
 
void setup() 
{
  Serial.begin(9600);
  while (!Serial);

  if (!BLE.begin()) {
    Serial.println("failed to initialize BLE!");
    while (1);
  }

  myService.addCharacteristic(resistance);
   myService.addCharacteristic(diode);
    myService.addCharacteristic(cap);
     myService.addCharacteristic(background);
  BLE.addService(myService);

  // Build scan response data packet
  BLEAdvertisingData scanData;
  // Set parameters for scan response packet
  scanData.setLocalName("Test enhanced advertising");
  // Copy set parameters in the actual scan response packet
  BLE.setScanResponseData(scanData);

  // Build advertising data packet
  BLEAdvertisingData advData;
  // Set parameters for advertising packet
  advData.setManufacturerData(0x004C, manufactData, sizeof(manufactData));
  advData.setAdvertisedService(myService);
  advData.setAdvertisedServiceData(0xfff0, serviceData, sizeof(serviceData));
  // Copy set parameters in the actual advertising packet
  BLE.setAdvertisingData(advData);

  BLE.advertise();
  Serial.println("advertising ...");
}

void loop() {
  BLE.poll();

 BLEDevice central = BLE.central();

      // Write sensor data to the GATT characteristic
               resistance.writeValue(esistance);
               cap.writeValue(capacitor);
               diode.writeValue(dode);
               background.writeValue(bacground);
              
}
