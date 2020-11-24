package registerationform;

import java.util.Scanner;

/**
 *
 * @author User
 */

interface area{
static double pi= 3.14;
void area();
void volume();
}

 class sphere implements area{
    int r;
    Scanner in=new Scanner(System.in);
    
    sphere(){
        System.out.println("Enter radius of Sphere:");
        r = in.nextInt();
    }
   
    @Override
    public void area()
    {
        double area = 4*pi*r*r;
       System.out.println("Area of sphere:" +area);
    }


    @Override
    public void volume() {
        double volume = (4*pi*r*r*r)/3;
        System.out.println("Volume of sphere:" +volume);
    }
   
    }
 class cylinder implements area{
 
    int r,h;
    Scanner in=new Scanner(System.in);
    cylinder(){
        System.out.println("Enter radius of cylinder");
        r = in.nextInt();
        System.out.println("Enter height of cylinder");
        h = in.nextInt();
    }
    @Override
    public void area()
    {   
        double area = ((2*pi*r*h)+(2*pi*r*r));
        System.out.println("Area of Cylinder" + area);
    }

    @Override
    public void volume() {
        double volume = pi*r*r*h;
        System.out.println("Volume of Cylinder" + volume);
    }
}

public class testcircle {
    public static void main(String[] args){
       
        sphere s=new sphere();
        cylinder c=new cylinder();
       
        s.area();
        s.volume();
        c.area();
        c.volume();
       
       
    }
}