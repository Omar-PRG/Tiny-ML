
In this project, our main aim is to extend the work from project 4, where we classified images into five categories: Capacitor, Resistor, Diode, LED, and background. 
The key focus now is to send the prediction results for each component to Node-RED through Bluetooth Low Energy (BLE). To kick off, we started by executing sketches of the Arduino Ble library in the Arduino IDE, testing different options and using the LightBlue application each time we want to evaluate. Our Arduino Nano BLE 33 operates as a peripheral device, awaiting connection  requests from Node-RED, the central device, so what interests us is the peripheral examples and not central ones.


![11111](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/78351f8c-6205-4503-88cc-f7e81ed47e02).


After testing various sketches under the peripheral examples, we settled on the "enhancedadvertising" sketch, because we were able to detect the Ble service on the Light Blue app. The following capture shows the algorithm.

![image](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/2cebe833-a5f9-47a2-97ce-e40eae7d0e0d)

The following capture shows what we found on the Light Blue app after executing the code.

![image](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/2e45b130-d2ed-4a2c-92ef-f1054df69a6c)

The following sketch from the arduino Ble library, called ButtonLed, provided essential insights, serving as the cornerstone for initiating our project also allowed us to better understand not only how to be visible to node-red but also how to send values. Its main use is to turn on or off the onboard led of the arduino nano Ble 33 when the state of a connected button to pin 4 changes, and what interests us is that it sends the led state and button notification by bluetooth to check it out on the Light bLue app.


![image](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/d66a1e12-cc1d-4431-b216-07fdbddbb7df)




![image](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/70ed5bec-9fbc-4e4f-bed6-d39a148ef367)


1) Whatever we want to send, we want to define a BLE service like BLEService myService("fff0");
2)if we want to send values(integer) concerning different components we need to create BLEIntCharasteristic(READ & Write), 
BLEIntCharacteristic resistance("fff1", BLERead | BLEWrite);
BLEIntCharacteristic cap("fff2", BLERead | BLEWrite);
BLEIntCharacteristic diode("fff3", BLERead | BLEWrite);
BLEIntCharacteristic background ("fff4", BLERead | BLEWrite);
3) In setup, we should add all these services :
4)  myService.addCharacteristic(resistance);
    myService.addCharacteristic(diode);
    myService.addCharacteristic(cap);
    myService.addCharacteristic(background);
    BLE.addService(myService);


5) 
And finally, in loop, we write the values this way:

               resistance.writeValue(esistance);
               cap.writeValue(capacitor);
               diode.writeValue(dode);
               background.writeValue(bacground);
   //With esistance, capacitor, dode and bacground the pourcentages of the prediction that we received each two secondes from Project 4.


So what do we get? The following result: 


![preuve](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/ccec59bb-2ccb-40c4-8b30-1296159327d2)




The last step is to split results and to show it in gauges.




Reference:

https://www.youtube.com/watch?v=xiv7n9ecI04

https://www.youtube.com/watch?v=It5v1mD2K4s
