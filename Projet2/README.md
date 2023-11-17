If you followed up with project 3, you'll see that the steps in edge impulse look alike. Here we'll show the main differences.

Step 1:Connecting the Arduino Nano ble 33 as usual in my case i had to do edge-impulse-daemon--clean because the ble was connected to my previous project 3 and i had to register it from the beginning by providing my edge impusle account credentials.

Step 2: Making Records for red, Green and Yellow and moving roughly 38% of theser records to test split.

![rec](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/cf42d986-259c-4a09-8c39-f0ad56487ea5)


Step 3: We save the impulse with the following config:

![impulse](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/fabb6ab6-b5b9-4679-b640-1a0f74738c6b)


Step 4: We gp to MfCC and we generate features

![Feature](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/ac03b8b1-152b-4511-8500-10568049ec8a)

Step 5: We head to classifier and we train the model

![result](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/e3051a3c-7611-4980-9381-5690d9b5a66e)


Step 6: We head to deployment, search for arduino library then we generate the arduino dependency files in zipped mode.

![archive created](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/deecc943-e4e1-4fbe-a95a-a13c1e33d514)


Step 7 : We extract the content in the arduino sketch file, open the Proje2_inferencing.h file and compile the sketch

![compiled](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/c1031d11-00b0-423e-9395-c2f9182824ca)


Results:


![Green](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/bb99df00-3e1b-444f-8c5d-2532dabe2205)


![noise](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/a8df57a8-8ca5-41ce-8a75-5a78ea2d4f69)

![Yellow](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/38ac801d-b40a-4b8f-9e0c-8a20df658136)
