# -*- coding: utf-8 -*-
"""
Created on Wed Feb 12 12:03:28 2020
@author: akhil
"""
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
#file:///C:/Users/akhil/Downloads/Kid.csv
dataset = pd.read_csv("Kid.csv")
a = dataset.iloc[:,:]
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression

x = dataset.iloc[:,2:]
y = dataset.iloc[:,1]

xtrain, xtest, ytrain, ytest = train_test_split( 
		x, y,test_size=0.2,random_state = 0) 

classifier = LogisticRegression(random_state = 0) 
classifier.fit(xtrain, ytrain) 
y_pred = classifier.predict(xtest) 
from sklearn.metrics import confusion_matrix 
cm = confusion_matrix(ytest, y_pred) 
print ("Confusion Matrix : ", cm) 
from sklearn.metrics import accuracy_score 
print ("Accuracy : ", accuracy_score(ytest, y_pred))


from sklearn import metrics
ax = plt.subplots()
sns.heatmap(pd.DataFrame(metrics.confusion_matrix(ytest, y_pred)), annot=True,cmap="Spectral" ,fmt='g')
plt.tight_layout()
plt.title('Confusion matrix', y=1.1)
plt.ylabel('Actual label')
plt.xlabel('Predicted label')


