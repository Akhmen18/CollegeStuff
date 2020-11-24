# -*- coding: utf-8 -*-
"""
Created on Wed Jan 29 11:37:37 2020

@author: Akhil
"""
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
dataset = pd.read_csv("Salary_Data.csv")
a = dataset.iloc[:,:]
meanx=a.loc[:,"YearsExperience"].mean()
meany=a.loc[:,"Salary"].mean() 
#print(meanx)
#print(meany)
a["x-xm"]=a["YearsExperience"]-meanx
#print(a)
a["y-ym"]=a["Salary"]-meany
a["xm*ym"]=a["YearsExperience"]*a["Salary"]
num=a["xm*ym"].sum()
a["sqr"]=a["x-xm"]*a["x-xm"]
den=a["sqr"].sum()

slope = num/den
c = meany - (slope*meanx)
a["ynew"]=(slope*a["YearsExperience"])+c
yn=a.iloc[:,6]
x=a.iloc[:,0]
plt.scatter(x,yn)
plt.show()


