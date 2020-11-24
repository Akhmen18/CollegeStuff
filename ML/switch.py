# -*- coding: utf-8 -*-
"""
Created on Wed Jan  8 11:56:58 2020

@author: Akhil Menon
"""
num1 = int(12)
num2 = int(3)
def add(num1,num2):
    num1+=num2
    return (num1)
def sub(num1,num2):
    num1-=num2
def mul(num1,num2):
    num1*=num2
def div(num1,num2):
    num1/=num2
def default():
    print("Not working")
switcher = {
    1: add,
    2: sub,
    3: mul,
    4: div
}

def switch(operation):
  return switcher.get(operation)

print("Select - \n 1.Add \n 2.Sub \n 3.Mul \n 4.Div")
c = int(input())
print(switch(c))
print("----------end-----------")