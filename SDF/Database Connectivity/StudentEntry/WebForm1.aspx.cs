using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace StudentEntry
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            
        }

        protected void submitBtn_Click(object sender, EventArgs e)
        {

            string password;
            if (passtxt.Text == passtxt2.Text)
            {
                password = passtxt.Text;
                string conString;
                SqlConnection cnn;
                SqlCommand command;
                conString = @"Data Source=DESKTOP-K54JVR5\SQLEXPRESS;Initial Catalog=StudentEntry;Integrated Security=True";
                cnn = new SqlConnection(conString);
                cnn.Open();
                command = new SqlCommand("insert into studnetReg values(@username,@pass,@gender,@city,@address,@mobile)", cnn);
                command.Parameters.AddWithValue("username", usernameTxt.Text);
                command.Parameters.AddWithValue("pass", password);
                command.Parameters.AddWithValue("gender", GenderRB.SelectedValue);
                command.Parameters.AddWithValue("city", CityDDL.SelectedValue);
                command.Parameters.AddWithValue("address", TextBox1.Text);
                command.Parameters.AddWithValue("mobile", Mobiletxt.Text);
                command.ExecuteNonQuery();
                command.Dispose();
                cnn.Close();
                Response.Write("Registered Successfully");
                usernameTxt.Text = "";
                TextBox1.Text = "";
                Mobiletxt.Text = "";
            }
            else
            {
                Response.Write("Passwords don't match");
            }
        }
    }
}