/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package java_jdbc;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.Scanner;
/**
 *
 * @author psvishnu
 */
public class VishnuJDBC {
    public static void main(String[] args) throws SQLException {
        Scanner sc = new Scanner(System.in);
        String name;
        int age;
        System.out.println("Enter name:");
        name = sc.nextLine();
        System.out.println("Enter age:");
        age = sc.nextInt();
        try{
            Class.forName("com.mysql.jdbc.Driver");
            Connection connection=DriverManager.getConnection("jdbc:mysql://localhost:3306/test1","root","1234");
            PreparedStatement ps=connection.prepareStatement("insert into vishnu value(?,?)");
            ps.setString(1,name);
            ps.setString(2, Integer.toString(age));
            //ResultSet rs=ps.executeQuery();
            int i=ps.executeUpdate();
                if(i>0){
                    System.out.println("Database Updated");
                }
        }
        catch(Exception e){}
    }
}
