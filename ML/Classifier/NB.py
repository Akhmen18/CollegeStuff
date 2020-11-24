# -*- coding: utf-8 -*-
"""
Created on Wed Mar 25 11:17:25 2020

@author: akhil
"""
import pandas as pd

dataset = pd.read_csv('Social_Network_Ads.csv')
X = dataset.iloc[:,1:4].values
Y = dataset.iloc[:,4].values.ravel()

from sklearn.preprocessing import LabelEncoder
le = LabelEncoder()
X[:,0]=le.fit_transform(X[:,0:1])

from sklearn.preprocessing import StandardScaler
sc = StandardScaler()
X = sc.fit_transform(X)

from sklearn.model_selection import train_test_split
X_train, X_test, Y_train, Y_test = train_test_split(X,Y,test_size=0.25,random_state=50)

from sklearn.naive_bayes import GaussianNB
classifier = GaussianNB()
classifier.fit(X_train, Y_train)

Y_pred = classifier.predict(X_test)
print("PREDICTED VALUES OF Y \n",Y_pred)

from sklearn.metrics import confusion_matrix
cm = confusion_matrix(Y_test,Y_pred)
print("CONFUSION MATRIX: \n ",cm)

from sklearn import metrics
print("ACCURACY:",metrics.accuracy_score(Y_test, Y_pred))
print(metrics.classification_report(Y_test, Y_pred))
print(metrics.confusion_matrix(Y_test, Y_pred))
