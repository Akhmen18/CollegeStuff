# -*- coding: utf-8 -*-
"""
Created on Wed Mar 25 11:55:34 2020

@author: akhil
"""

import pandas as pd
import numpy as np
dataset = pd.read_csv('pima-indians-diabetes.csv')
X = dataset.iloc[:,:9].values
Y = dataset.iloc[:,9].values.ravel()
#%%

from sklearn.impute import SimpleImputer
imputer = SimpleImputer(missing_values = np.nan, strategy = 'mean',verbose=0)
imputer = imputer.fit(X)
X = imputer.transform(X)

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