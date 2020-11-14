<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="LoginPage.aspx.cs" Inherits="StudentEntry.LoginPage" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <style type="text/css">
        .auto-style1 {
            width: 100%;
            height: 100px;
        }
        .auto-style2 {
            width: 84px;
        }
        .auto-style3 {
            width: 163px;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <table class="auto-style1">
                <tr>
                    <td class="auto-style2">Username:</td>
                    <td class="auto-style3">
                        <asp:TextBox ID="usernametxt" runat="server"></asp:TextBox>
                    </td>
                    <td>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="usernametxt" ErrorMessage="Username Needed" ForeColor="#CC0000"></asp:RequiredFieldValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style2">Password:</td>
                    <td class="auto-style3">
                        <asp:TextBox ID="passtxt" runat="server" TextMode="Password"></asp:TextBox>
                    </td>
                    <td>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="passtxt" ErrorMessage="Password Needed" ForeColor="#CC0000"></asp:RequiredFieldValidator>
                    </td>
                </tr>
            </table>
        </div>
        <asp:Button ID="LoginBtn" runat="server" Height="32px" OnClick="LoginBtn_Click" Text="Login" Width="66px" />
    </form>
</body>
</html>
