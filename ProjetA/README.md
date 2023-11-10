# Tiny-ML
TinyML is a type of machine learning that allows models to run on smaller, less powerful devices. As part of our Tiny-Ml course,  we put our homeworks inside this repository. 
The main goal of this project is to make machine learning work with the Arduino IDE. We'll use the Arduino Nano 33 BLE Sense MCU and the TensorFlow Lite Library for this. By using the BLE sensors, we want to teach our model to recognize Yes/No gestures, so it can predict the gestures we make. Follow the steps provided to correctly build your model. If you struggle, you find a step by step guide here https://docs.arduino.cc/tutorials/nano-33-ble-sense/get-started-with-machine-learning


https://github.com/Omar-PRG/Tiny-ML/assets/93102956/efd57515-b394-4fdd-9844-b1e89f320ffc

Step1: First we need to run the accelerometer script provided in project A and named SimpleAccelerometer.ino in order send data to serial monitor, because this data will be processed using a python script, enabling us to save the output only when we perform gestures. 


Step2, initiate the data collection process by running the Python script. Within the Spyder console, the script provides instructions on when to commence and the number of gestures to perform. It is recommended to execute 10 gestures for "Yes" and 10 for "No." Ensure proper file organization by saving CSV files with the designated names "Yes" and "No." Adjust the CSV file names in the Python code accordingly. Additionally, be certain to select the correct COM number for your BLE device within the Python script.


Step3, Now that you have the Yes and No CSV files, we should generate our model.h file. To do so, create a google colab project and follow with the instruction here  : https://colab.research.google.com/github/arduino/ArduinoTensorFlowLiteTutorials/blob/master/GestureToEmoji/arduino_tinyml_workshop.ipynb

![image](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/b285cdf2-9112-4b82-b395-17b43feb656e)




Step 4: Once the model.h file is generated, just put it under the same directory as the classify_imu.ino file,  and run the classify_imu sketch. Afer making three gestures, you get the output down below. 

![thumbnail_IMG_0715](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/1d1ed6ac-94db-49d2-9013-31135f6f79ba)
