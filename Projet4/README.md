In this project, our objective is to classify images into five labels: Capacitor, Resistor, Diode, Led, and, if present, identify the background. As mentionned in projects 2 and 3, we start by checking whether the microcontroller is connected to a different project or not, and then we connect it then we start by individually selecting pictures and assigning labels to groups based on their type. For instance, when navigating the unzipped "electronic-components-png" file, if we choose pictures of LEDs, we assign the label Led to that particular group.
![1](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/57fe7aa1-d2e1-4f41-83a6-37743dd65ca8)

Now please go to Impulse design and modify the Image data setting to 28 x 28 (width x height). If your initial images are not square, customize the Resize mode to crop or adjust the images accordingly. Integrate an Image processing block and include a Classification (Keras) learning block in the process.


![2](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/d237d852-12f7-40d7-9fef-5880e28e37fc)


After, you go to Image under Impulse design on the left-side navigation bar. Change Color depth to Grayscale. Click Save parameters. Next, generate features and navigate to the NN Classifier. I suggest modifying the Number of training cycles to a value between 100 and 200, especially since we are dealing with a small dataset. Click on Start training. Once the training is complete, assess the performance of your model. 

![3](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/c8ff80d4-3f26-4230-a410-475bb0689bc6)



![4](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/bb5d0127-754d-4aca-9c4d-2267f21ad1d8)

Comparing the accuracy results of this model with those of the dense neural network example might be misleading. It's important to note that we're dealing with a relatively small dataset (50 samples per class), and the samples are likely randomly distributed between the training and test sets. 

For example, a slight change in the inclusion or exclusion of a single sample in the training set could cause the validation accuracy results to fluctuate by 0.5% (assuming 200 samples in the training set). To obtain a more reliable assessment of the model's performance, a larger dataset would be beneficial as it helps prevent overfitting and provides a more accurate representation.

In the meantime, consider playing with the model's hyperparameters, such as the number of training cycles, the number of filters, and kernel sizes. You can also explore adding or removing layers. If you introduce a dropout layer after the first convolution layer and adjust the second convolution layer to have 28 filters, it improves  accuracy on the validation data and contributes to refining the model's performance.

![upload](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/936373ca-c648-46c5-ace7-4dae6bb69b3e)

Since the camera doesn't have good quality, we will try live classification with iphone 11 by scanning the bare code after choosing add a new device in Devices:


![1122](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/62f72ed8-42eb-4cae-8f9f-9d6686ff85df)


On our phone we get the following page: 

![1113](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/42ee4a4a-2987-426b-a287-d4b3cbab19ad)


Now we choose the option swich to classification mode and we enable permession to camera,  we get the following result:


![t](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/c34bd91a-4a54-4743-a5a5-4b71cb74c340)



![tt](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/a6d94daf-5143-46af-b188-66df65408b16)



![ttt](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/59055b5d-4062-4371-ac72-7031cbf15734)



![tttt](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/fc27d169-27e7-4855-8424-4702d85971a2)
