/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Server;
import java.rmi.Remote;
import java.rmi.RemoteException;

/**
 *
 * @author akhil
 */
public interface adder extends Remote{
    public int add(int n1, int n2)throws RemoteException;
}
