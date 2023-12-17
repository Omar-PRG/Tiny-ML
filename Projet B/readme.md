
In this project, our main aim is to extend the work from project 4, where we classified images into five categories: Capacitor, Resistor, Diode, LED, and background. 
The key focus now is to send the prediction results for each component to Node-RED through Bluetooth Low Energy (BLE). To kick off, we started by executing sketches of the Arduino Ble library in the Arduino IDE, testing different options and using the LightBlue application each time we want to evaluate. Our Arduino Nano BLE 33 operates as a peripheral device, awaiting connection  requests from Node-RED, the central device, so what interests us is the peripheral examples and not central ones. After testing various sketches under the peripheral examples, we settled on the "enhancedadvertising" sketch, because we were able to detect the Ble service on the Light Blue app. The following capture shows the algorithm.

![image](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/2cebe833-a5f9-47a2-97ce-e40eae7d0e0d)

The following capture shows what we found on the Light Blue app after executing the code.

![image](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/2e45b130-d2ed-4a2c-92ef-f1054df69a6c)

The following sketch changed the whole game and allowed us to better understand not only how to be visible to node-red but also how to send values. Its main use is to turn on or off the onboard led of the arduino nano Ble 33 when the state of a connected button to pin 4 changes, and what interests us is that it sends the value of the led and button by bluetooth to check it out on the Light bLue app. The following sketch from the arduino Ble library, called ButtonLed, provided essential insights, serving as the cornerstone for initiating our project.



![image](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/d66a1e12-cc1d-4431-b216-07fdbddbb7df)




![image](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/70ed5bec-9fbc-4e4f-bed6-d39a148ef367)






The last step is to split results and to show it in gauges.




Reference:

https://www.youtube.com/watch?v=xiv7n9ecI04

https://www.youtube.com/watch?v=It5v1mD2K4s
