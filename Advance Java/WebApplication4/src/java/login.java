/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
import java.sql.*;
/**
 *
 * @author akhil
 */
public class login extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response)throws ServletException, IOException {
            response.setContentType("text/html;charset=UTF-8");
            PrintWriter out = response.getWriter();

            String name = request.getParameter("name");
            String password = request.getParameter("pass");

            try {
                Class.forName("com.mysql.jdbc.Driver");
                Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/test1","root","1234");

                PreparedStatement ps = con.prepareStatement("Select name, password from student where name=? and password=?");

                ps.setString(1, name);
                ps.setString(2, password);
                out.println(ps.executeUpdate());
                int i = ps.executeUpdate();


                if(i > 0) {
                    out.println("You are sucessfully Logined");
                }

            }
            catch(Exception se) {
                se.printStackTrace();
            }

        }


}
