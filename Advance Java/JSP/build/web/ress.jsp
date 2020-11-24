<%-- 
    Document   : ResponseJSP
    Created on : 3 Apr, 2020, 12:37:50 PM
    Author     : akhil
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Response Page</title>
    </head>
    <body>
        <%!
          int select(int a)
          {
              int k = (a>18)? 1 : 0;
              return k;
          }
        %>
        <% 
        int a = Integer.parseInt(request.getParameter("age"));
        String name = request.getParameter("name");
        int param = select(a);
        if(param == 1)
        {
            out.print("Welcome: "+name+"\n"+"Age:"+a);
            out.print("You've registerd at Akhil's Base:Hades");
        }
        else
        {
           
        }
        %>
    </body>
</html>
