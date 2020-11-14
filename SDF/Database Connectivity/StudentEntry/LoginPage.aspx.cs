using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace StudentEntry
{
    public partial class LoginPage : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void LoginBtn_Click(object sender, EventArgs e)
        {
            string conString;
            SqlConnection cnn;
            SqlCommand command;
            conString = @"Data Source=DESKTOP-K54JVR5\SQLEXPRESS;Initial Catalog=StudentEntry;Integrated Security=True";
            cnn = new SqlConnection(conString);
            cnn.Open();
            command = new SqlCommand("select * from studnetReg where username=@username and pass=@pass",cnn);
            command.Parameters.AddWithValue("username", usernametxt.Text);
            command.Parameters.AddWithValue("pass", passtxt.Text);
            SqlDataAdapter adapter = new SqlDataAdapter(command);
            DataTable dt = new DataTable();
            adapter.Fill(dt);
            command.ExecuteNonQuery();
            if(dt.Rows.Count>0)
            {
                Session["Name"] = usernametxt.Text;
                Response.Redirect("Welcome.aspx");
            }
        }
    }
}