# Tiny-ML
The main goal of this project is to identify different vibration mode (Heavy-light-silent/No) on Edge impulse PlatF. To do so, we installed an ios app called Vibrate+Pro allowing us to create heavy and light vibration modes and then we fixed our Ble 33 on the phone to make sure we absorb all the vibration.

Step1: We first need to add the ble33 on the edge impulse website by running the windows.bat exec then opening shell terminal and running edge-impulse-daemon. If the ble33 is connected to another project then you shall clear using the edge-impulse-daemon --clear. 

If the bat file runns successfully, you should see the following output,
![Screenshot 2023-11-16 154134](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/6ea0cbf1-080f-4096-ad7b-e73d6a9bd1cd)

if the daemon command runs successfully, you should see the following output:
![Screenshot 2023-11-16 154312](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/27f55510-cff6-45b3-975a-0f861a2b4c66)

Also you should see the ble added with green color as follows:

![board edge ](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/60a647f6-4040-40bb-b8fa-be131ec5e90e)


![phone](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/989b146f-134a-4d3c-99aa-560da3d220eb)

Step2: we record the different levels of vibration and in our case we made 19 records, with the following levels:

![slow](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/494ecbd6-1e3b-452a-b5cf-3694964defa3)

![Fast](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/6d192aa4-6718-4d14-9e24-574b0ec26f02)

Here we have some records up to 10s and ohters last 80 seconds. We make sure that when moving some of them to test, these should be the 10s recordings because we should train on the majority of data then test on uup to 20-30%..
![data acqu](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/ce88864f-0624-4bfe-ba58-66422e16d810)


Now we head to the Spectral Features page and click Generate features after choosing the following config:

![imp design](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/b1389de7-aa4a-44d4-9fdc-2b136ec50438)

Now we head to the NN Classifier page in your project. Click Start training. After a few minutes, the model should be done training:

![just modele](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/e8845fab-d11e-48e8-bc9f-35501b78169e)

Now it's time to download the zipped code dependencies, and import them in arduino ide. Please make sure to have the recent version.

![archive created](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/f4f03913-8515-4157-b1ba-50ecab2147a0)

Now we  shall unzip the files, open the Industrial-motion-classifier_inferencing.h  file and run the arduino ino sketch.

![compiled](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/6b16a9b1-60bb-4d15-abfe-8cc7a471c877)

Each two secondes, the vibration will be recorded thanks to the inertial sensor, and we'll be able to classify this recording. As our model is accurate we obtained the following results:

result1: Heavy

![Heavy](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/3c2a64ee-40e9-4e9a-bf37-4b3ce443790d)

result2: Off

![off](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/67dd8ac6-ecd2-4715-8e47-30cdbd784d7f)

result3: Light

![Light](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/00585206-c6cb-42f3-aac0-9e49c6386583)


