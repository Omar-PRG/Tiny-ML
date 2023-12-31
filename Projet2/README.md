If you've been keeping track of project 3, you'll notice that the procedures in Edge Impulse are quite similar. However, there are key distinctions that we'll highlight here.

Step 1: Connect the Arduino Nano BLE 33 as usual. In my case, I had to run "edge-impulse-daemon--clean" because the BLE was previously connected to my project 3. I needed to re-register it from the beginning, providing my Edge Impulse account credentials.

Step 2: Generate records for red, green, and yellow, allocating approximately 38% of these records to the test split.

![rec](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/cf42d986-259c-4a09-8c39-f0ad56487ea5)


Step 3: We save the impulse with the following config:

![impulse](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/fabb6ab6-b5b9-4679-b640-1a0f74738c6b)


Step 4: We go to MfCC and generate features

![Feature](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/ac03b8b1-152b-4511-8500-10568049ec8a)

Step 5: We head to classifier and we train the model

![result](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/e3051a3c-7611-4980-9381-5690d9b5a66e)


Step 6: We head to deployment, search for arduino library then we generate the arduino dependency files in zipped mode.

![archive created](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/deecc943-e4e1-4fbe-a95a-a13c1e33d514)


Step 7 : We extract the content in the arduino sketch file, open the Proje2_inferencing.h file and compile the sketch

![compiled](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/c1031d11-00b0-423e-9395-c2f9182824ca)

Each two secondes, our voice will be recorded thanks to the embedded ble microphone, and we'll be able to classify the records. As our model is accurate we obtained the following results:

Results:


![Green](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/bb99df00-3e1b-444f-8c5d-2532dabe2205)


![noise](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/a8df57a8-8ca5-41ce-8a75-5a78ea2d4f69)

![Yellow](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/38ac801d-b40a-4b8f-9e0c-8a20df658136)
