/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication6;

import java.util.Scanner;
import java.io.*;
import java.lang.*;
/**
 *
 * 
 */
public class Test {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number of lines;");
	int n = sc.nextInt();
        int a=1;
        int k;
        for(int i=1;i<=n;i++){
            k=i;
            int j=0;
            while(j<i){
                    System.out.print(a);
                    a++;
                    System.out.print((char)(k+64));
                    k++;
                    j++;
            }

            
            System.out.println("");
        }
        
    }

}
