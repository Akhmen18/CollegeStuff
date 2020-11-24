<%-- 
    Document   : Add
    Created on : 05-Dec-2019, 6:44:20 PM
    Author     : akhil
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Sum</title>
    </head>
    <body>
        <%= "<h1>The sum is "+(Integer.parseInt(request.getParameter("uname1"))+Integer.parseInt(request.getParameter("uname2")))+"</h1>"%>   
    </body>
</html>
