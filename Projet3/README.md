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


![data acqu](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/ce88864f-0624-4bfe-ba58-66422e16d810)


