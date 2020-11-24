/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Server;
import java.net.MalformedURLException;
import java.rmi.*;
import java.rmi.server.*;
/**
 *
 * @author akhil
 */
public class server extends UnicastRemoteObject implements adder {
    public server()throws RemoteException{
        super();
    }

    @Override
    public int add(int n1, int n2) throws RemoteException {
        return (n1+n2);
    }
    public static void main (String Args[]) throws RemoteException, MalformedURLException
    {
        try
        {
            server Server= new server();
            Naming.rebind("Hello Server",new server());
            System.out.println("Server is ready...");
        }
        catch(RemoteException e){
            System.out.println("Exception"+e);
        }
    }

}
