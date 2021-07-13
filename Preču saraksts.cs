using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Preču_saraksts
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "")
            {
                checkedListBox1.Items.Add(textBox1.Text);
                textBox1.Text = "";
                textBox1.Focus();
            }
            else
            {

                MessageBox.Show("nav nekā ievadīta");
                textBox1.Focus();
            }

        }

        private void TextBox1_KeyPressed(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
            {
                if (textBox1.Text != "")
                {
                    checkedListBox1.Items.Add(textBox1.Text);
                    textBox1.Text = "";
                    textBox1.Focus();
                }
                else
                {

                    MessageBox.Show("nav nekā ievadīta");
                    textBox1.Focus();
                }
            }
        }


        private void button2_Click(object sender, EventArgs e)
        {
            checkedListBox1.Items.Clear();
            textBox1.Focus();
        }
        for (int i = 0; i<checkedListBox1.Items.Count; i++)
  {
   if (i != e.Index)
   {
   checkedListBox1.SetItemChecked(i, false);
   }
}
else if you want to check / uncheck the ticks in some other metohd, like on a button press:

 for (int i = 0; i < checkedListBox1.Items.Count; i++)
{
    if (checkedListBox1.item[i].checked)
      checkedListBox1.item[i].checked = false;
else
    checkedListBox1.item[i].checked = true;
       }
   }
}
