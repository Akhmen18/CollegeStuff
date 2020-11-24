# -*- coding: utf-8 -*-
"""
Created on Wed Jan 15 11:45:10 2020

@author: Akhil
"""
import numpy as np
import pandas as pd
dataset = pd.read_csv("Data1.csv")

a = dataset.iloc[0:11,:2]
a1 = dataset.iloc[12:,0:]

