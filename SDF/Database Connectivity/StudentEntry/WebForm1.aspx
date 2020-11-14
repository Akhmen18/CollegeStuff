<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="StudentEntry.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <style type="text/css">
        .auto-style1 {
            width: 123px;
        }
        .auto-style2 {
            width: 123px;
            height: 26px;
        }
        .auto-style3 {
            height: 26px;
        }
        .auto-style4 {
            width: 100%;
        }
        .auto-style5 {
            width: 229px;
        }
        .auto-style6 {
            height: 26px;
            width: 229px;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
        <asp:ScriptManager ID="ScriptManager1" runat="server"></asp:ScriptManager>
        <div>
            <table style="margin-bottom: 0px;" class="auto-style4">
                <tr>
                    <td class="auto-style1">Username:</td>
                    <td class="auto-style5">
                        <asp:TextBox ID="usernameTxt" runat="server" TextMode="Email"></asp:TextBox>
                    </td>
                    <td>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="usernameTxt" ErrorMessage="Username Needed" ForeColor="#CC0000"></asp:RequiredFieldValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style1">Email:</td>
                    <td class="auto-style5">
                        <asp:TextBox ID="emailTb" runat="server"></asp:TextBox>
                    </td>
                    <td>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="emailTb" ErrorMessage="Email is Needed" ForeColor="#CC0000"></asp:RequiredFieldValidator>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                        <asp:RegularExpressionValidator ID="RegularExpressionValidator2" runat="server" ControlToValidate="emailTb" ErrorMessage="Enter Correct Email Address" ForeColor="#CC0000" ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*"></asp:RegularExpressionValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style2">Re-Enter Email:</td>
                    <td class="auto-style6">
                        <asp:TextBox ID="emailtb2" runat="server"></asp:TextBox>
                    </td>
                    <td class="auto-style3">
                        <asp:CompareValidator ID="CompareValidator1" runat="server" ControlToCompare="emailtb2" ControlToValidate="emailTb" ErrorMessage="Email is wrong" ForeColor="#CC0000"></asp:CompareValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style1">Password:</td>
                    <td class="auto-style5">
                        <asp:TextBox ID="passtxt" runat="server" TextMode="Password"></asp:TextBox>
                    </td>
                    <td>
                        &nbsp;&nbsp;<asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" ControlToValidate="passtxt" ErrorMessage="Password is needed" ForeColor="#CC0000"></asp:RequiredFieldValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style1">Retype Password:</td>
                    <td class="auto-style5">
                        <asp:TextBox ID="passtxt2" runat="server" TextMode="Password"></asp:TextBox>
                    </td>
                    <td>
                        <asp:CompareValidator ID="CompareValidator2" runat="server" ControlToCompare="passtxt2" ControlToValidate="passtxt" ErrorMessage="Password doesn't match" ForeColor="#CC0000"></asp:CompareValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style1">Gender:</td>
                    <td class="auto-style5">
                        <asp:RadioButtonList ID="GenderRB" runat="server">
                            <asp:ListItem>Male</asp:ListItem>
                            <asp:ListItem>Female</asp:ListItem>
                            <asp:ListItem>Others</asp:ListItem>
                        </asp:RadioButtonList>
                    </td>
                    <td>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator4" runat="server" ControlToValidate="GenderRB" ErrorMessage="Gender is Needed" ForeColor="#CC0000"></asp:RequiredFieldValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style2">City:</td>
                    <td class="auto-style6">
                        <asp:DropDownList ID="CityDDL" runat="server">
                            <asp:ListItem>Mumbai</asp:ListItem>
                            <asp:ListItem>Delhi</asp:ListItem>
                            <asp:ListItem>Bangalore</asp:ListItem>
                            <asp:ListItem>Other</asp:ListItem>
                        </asp:DropDownList>
                    </td>
                    <td class="auto-style3">
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator5" runat="server" ControlToValidate="CityDDL" ErrorMessage="City is Needed" ForeColor="#CC0000"></asp:RequiredFieldValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style1">Address:</td>
                    <td class="auto-style5">
                        <asp:TextBox ID="TextBox1" runat="server" Height="66px" Width="176px"></asp:TextBox>
                    </td>
                    <td>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator6" runat="server" ControlToValidate="TextBox1" ErrorMessage="Address is Needed" ForeColor="#CC0000"></asp:RequiredFieldValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style1">Mobile Number:</td>
                    <td class="auto-style5">
                        <asp:TextBox ID="Mobiletxt" runat="server" TextMode="Phone"></asp:TextBox>
                    </td>
                    <td>
                        <asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" ControlToValidate="Mobiletxt" ErrorMessage="Phone Number is needed" ForeColor="#CC0000"></asp:RegularExpressionValidator>
&nbsp;&nbsp;&nbsp;&nbsp;
                        <asp:RegularExpressionValidator ID="RegularExpressionValidator3" runat="server" ControlToValidate="Mobiletxt" ErrorMessage="Enter correct Phone Number" ValidationExpression="[0-9]{10}"></asp:RegularExpressionValidator>
                    </td>
                </tr>
                <tr>
                    <td class="auto-style1">&nbsp;</td>
                    <td class="auto-style5">
                        &nbsp;</td>
                    <td>
                        &nbsp;</td>
                </tr>
            </table>
        </div>
        <br />
        <asp:Button ID="submitBtn" runat="server" Height="33px" OnClick="submitBtn_Click" Text="Submit" Width="82px" />
    </form>
</body>
</html>
