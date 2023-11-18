In this project the goal is to classfy the images to five labels: Capacitor, Resistor, Diode and Led. If there's a background we'll also able to identify it. 

As mentionned in projects 2 and 3, we follow the steps, to add the tiny ML to the project. 
After we select the pictures with option "individually" and we set the Label for the group of selected captures depending on their type, for example if we go in the unzipped "electronic-components-png file and we select the Led pictures, we choose the label Led.
![1](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/57fe7aa1-d2e1-4f41-83a6-37743dd65ca8)

Now Go to Impulse design and modify the Image data setting to 28 x 28 (width x height). If your initial images are not square, customize the Resize mode to crop or adjust the images accordingly. Integrate an Image processing block and include a Classification (Keras) learning block in the process.


![2](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/d237d852-12f7-40d7-9fef-5880e28e37fc)


After, you go to Image under Impulse design on the left-side navigation bar. Change Color depth to Grayscale. Click Save parameters. Next, generate features and navigate to the NN Classifier. I suggest modifying the Number of training cycles to a value between 100 and 200, especially since we are dealing with a small dataset. Click on Start training. Once the training is complete, assess the performance of your model. 

![3](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/c8ff80d4-3f26-4230-a410-475bb0689bc6)



![4](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/bb5d0127-754d-4aca-9c4d-2267f21ad1d8)

Comparing the accuracy results of this model with those of the dense neural network example might be misleading. It's important to note that we're dealing with a relatively small dataset (50 samples per class), and the samples are likely randomly distributed between the training and test sets. 

For example, a slight change in the inclusion or exclusion of a single sample in the training set could cause the validation accuracy results to fluctuate by 0.5% (assuming 200 samples in the training set). To obtain a more reliable assessment of the model's performance, a larger dataset would be beneficial as it helps prevent overfitting and provides a more accurate representation.

In the meantime, consider experimenting with the model's hyperparameters, such as the number of training cycles, the number of filters, and kernel sizes. You can also explore adding or removing layers. For instance, in my experimentation, I introduced a dropout layer after the first convolution layer and adjusted the second convolution layer to have 28 filters, resulting in improved accuracy on the validation data. These adjustments can contribute to refining the model's performance while we await future discussions and projects that delve into methods for creating larger datasets.

![upload](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/936373ca-c648-46c5-ace7-4dae6bb69b3e)

Since the camera doesn't have goof quality, we will try live classification with iphone 11, we get the following result:

![111](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/0fbf759a-1911-4c27-bd27-c69ab9d93cae)


![222](https://github.com/Omar-PRG/Tiny-ML/assets/93102956/d9fcd076-3cd5-4e57-b6af-974460652c64)


