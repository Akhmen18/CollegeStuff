# -*- coding: utf-8 -*-
"""
Created on Wed Apr  1 15:11:34 2020

@author: akhil
"""

from sklearn.datasets import load_iris

iris = load_iris()

print(iris.feature_names)
print(iris.target_names)

from sklearn.model_selection import train_test_split
X_train, X_test, Y_train, Y_test = train_test_split(iris.data,iris.target,test_size=0.25)

from sklearn.neighbors import KNeighborsClassifier
knn = KNeighborsClassifier(n_neighbors=12,p=2)

knn.fit(X_train,Y_train)
y_pred = knn.predict(X_test)
print("Predicted Values of Y",y_pred)

from sklearn.metrics import confusion_matrix
cm = confusion_matrix(Y_test,y_pred)
print("CONFUSION MATRIX: \n ",cm)

from sklearn import metrics
print("ACCURACY:",metrics.accuracy_score(Y_test, y_pred))
print(metrics.classification_report(Y_test, y_pred))
print(metrics.confusion_matrix(Y_test, y_pred))