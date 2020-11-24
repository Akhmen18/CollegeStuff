/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package akhil;

import java.io.IOException;
import java.io.PrintWriter;
import static java.lang.System.out;
import javax.ejb.EJB;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author akhil
 */
public class calcserv extends HttpServlet {

    @EJB
    private CalcBeanLocal calcBean;

    /**
     * Processes requests for both HTTP <code>GET</code> and <code>POST</code>
     * methods.
     *
     * 
     */
    public void doPost(HttpServletRequest request, HttpServletResponse response)
    throws ServletException, IOException {
        int a = Integer.parseInt(request.getParameter("num1"));
        out.println(calcBean.calcSome(a));
    }
    
}

  