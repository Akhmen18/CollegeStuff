# -*- coding: utf-8 -*-
"""
Created on Wed Apr  1 11:33:07 2020

@author: akhil
"""
import pandas as pd
from sklearn import neighbors
import numpy as np
from sklearn import neighbors
import matplotlib.pyplot as plt

#%%
dataset = pd.read_csv('KNN_Automobile_data.csv')
dataset.replace('?',np.nan,inplace=True)
x = dataset.iloc[:,1:].values
y = dataset.iloc[:,0].values

#%%
from sklearn.impute import SimpleImputer
imputer = SimpleImputer(missing_values = np.nan, strategy = 'most_frequent',verbose=0)
imputer = imputer.fit(x)
x = imputer.transform(x)
#%%
from sklearn.preprocessing import LabelEncoder
le = LabelEncoder()

for i in range(1,8):
    x[:,i] = le.fit_transform(x[:,i])
    
x[:,13] = le.fit_transform(x[:,13])
x[:,14] = le.fit_transform(x[:,14])
x[:,16] = le.fit_transform(x[:,16])
#%%
from sklearn.model_selection import train_test_split
X_train, X_test, Y_train, Y_test = train_test_split(x,y,test_size=0.25,random_state=0)
#%%
n_neigbors = 13

knn = neighbors.KNeighborsRegressor(n_neigbors)
#%%
knn.fit(X_train,Y_train)
#%%
y_pred = knn.predict(X_test)
#%%
print(Y_test)
print(y_pred)

pearsoncorr = dataset.corr(method='pearson')
print(pearsoncorr)

