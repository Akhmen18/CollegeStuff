# -*- coding: utf-8 -*-
"""
Created on Wed Jan 15

@author: Akhil
"""
import numpy as np
import pandas as pd
dataset = pd.read_csv("Data1.csv")

a = dataset.iloc[0:11,:2]
a1 = dataset.iloc[12:,0:]
a2 = dataset.iloc[:,:3]
a3 = dataset.iloc[:,:4].values
from sklearn.preprocessing import Imputer
imputer = Imputer(missing_values = 'NaN', strategy = 'most_frequent', axis = 0)
a2 = imputer.fit_transform(a2)
print(a2)
#a3 = imputer.fit_transform(a3)
#%%
#a3 = a3.values
from sklearn.preprocessing import LabelEncoder
le = LabelEncoder()
a3[:,3] = le.fit_transform(a3[:,3])
print(a3[:,3])
print(a3.shape)
#%%
from sklearn.preprocessing import OneHotEncoder
ohe = OneHotEncoder()
ohe.fit_transform(a3[:,3])