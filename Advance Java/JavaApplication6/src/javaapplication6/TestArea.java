/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication6;

/**
 *
 * 
 */
interface interArea{
    double pi = 3.14;
    public void area();
}

class Circle implements interArea{
    int r;
    Circle(int a){
        r=a;
    }

    @Override
    public void area() {
        System.out.println("Area"+(pi*r*r));
    }
    
}
class Sphere implements interArea{
    int r;
    Sphere(int a){
        r = a;
    }
    @Override
    public void area() {
        System.out.println("Area"+(4*pi*r*r));
    }
    
}
public class TestArea {
    public static void main(String[] args){
        Circle c1 = new Circle(4);
        c1.area();
        Sphere s1 = new Sphere(5);
        s1.area();
    }
}
