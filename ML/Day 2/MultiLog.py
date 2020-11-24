# -*- coding: utf-8 -*-
"""
Created on Wed Feb 12 12:43:00 2020

@author: akhil
"""

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
dataset = pd.read_csv("Social_Network_Ads.csv")
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression