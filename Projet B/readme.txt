
In this project, our main aim is to extend the work from project 4, where we classified images into five categories: Capacitor, Resistor, Diode, LED, and background. 
The key focus now is to send the prediction results for each component to Node-RED through Bluetooth Low Energy (BLE). To kick off, we started by adapting sketches in
the Arduino IDE, testing different options and using the LightBlue application for evaluation. Our Arduino Nano BLE 33 operates as a peripheral device, awaiting connection 
requests from Node-RED, the central device. After testing various sketches, we settled on the "enhancedadvertising" sketch, modifying the "read notify" to "read write" to 
facilitate sending data to Node-RED for display on gauges in a dashboard.


The last step is to split results and to show it in gauges.




Reference:

https://www.youtube.com/watch?v=xiv7n9ecI04

https://www.youtube.com/watch?v=It5v1mD2K4s
