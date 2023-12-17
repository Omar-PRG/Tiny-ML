The main goal of this project is to start from project 4, classify images into five labels: Capacitor, Resistor, Diode, Led, and background and most importantly, send the prediction result of each
component to node-red via Ble to be able to show the prediction pourcentage on gauges in a dashboard. To start, we only had to start from the work we done in project 4 and establish communication between node 
red and the nano ble 33. We first tested many  sketches in the sketch example of arduino and then used the application LightBlue, to see which sketch will help us send data to node-red. Arduino nano ble 33 is in
our case a peripheral device, because  it waits for a connection request from node red(central) then sends it data. So we started testing the Peripheral sketches in arduino ide, and finally chose the 
enhancedadvertising sketch but modified the read notify to read write because we need to write values to node-red.


The last step is to split results and to show it in gauges.

https://www.youtube.com/watch?v=xiv7n9ecI04

https://www.youtube.com/watch?v=It5v1mD2K4s
