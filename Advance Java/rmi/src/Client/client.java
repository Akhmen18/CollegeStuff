/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Client;
import Server.adder;
import Server.server;
import java.rmi.*;
/**
 *
 * @author akhil
 */
public class client {
       public static void main(String args[])
   {
     try
    {
     String addserverURL="rmi://"+args[0]+"/AddServer1";
    adder addinterface=(adder)Naming.lookup(addserverURL);
  System.out.println("The first number is:"+args[1]);
int d1=Integer.parseInt(args[1]);
System.out.println("The second number is:"+args[2]);
int d2=Integer.parseInt(args[2]);
System.out.println("The Sum is:" +addinterface.add(d1,d2));

    }
   catch(Exception e)
  {
     System.out.println("Exception :"+e);
   }

    }

}
