using System;
using System.Drawing;
using System.Windows.Forms;
using Newtonsoft.Json;
using System.IO;

namespace Hw3FoodReceipt
{
    public partial class Form1 : Form
    {
        FileOps fo = new FileOps();

        // To identify which section of navbar is selected
        private string navSelected = "";
        
        // Path to json file
        public static string menuFilePath = "C:\\Users\\Arhon\\source\\repos\\Hw3FoodReceipt\\Hw3FoodReceipt\\menu.json";
        // Path of output file
        public string fileOutPath = "C:\\Users\\Arhon\\Downloads\\receipt.txt";
        // Init vars for the total num of food types
        public int foodsTotal;

        // Store each menu item into obj array
        public static string menuContents = File.ReadAllText(menuFilePath);
        MenuItem[] menuItems = JsonConvert.DeserializeObject<MenuItem[]>(menuContents);

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // Populate the combo box contents
            // For each food in the menu
            foreach (MenuItem food in menuItems)
            {
                // Add the food names into their designated combo box
                string foodCategory = food.category;
                switch (foodCategory)
                {
                    case "Appetizers":
                        comboAppetizers.Items.Add(food.name);
                        break;
                    case "Entrees":
                        comboEntrees.Items.Add(food.name);
                        break;
                    case "Desserts":
                        comboDesserts.Items.Add(food.name);
                        break;
                    case "Beverages":
                        comboBeverages.Items.Add(food.name);
                        break;
                    default:
                        break;
                }
            }
        }

        private void navToggle(object sender, EventArgs e)
        {
            Button clickedBtn = (Button)sender;

            // Button is not active
            if (clickedBtn.BackColor == Color.WhiteSmoke)
            {
                hideAllSectionContent();
                
                openingImage.Visible = true;
                // Toggle back to initial color
                clickedBtn.ForeColor = Color.WhiteSmoke;
                clickedBtn.BackColor = Color.Firebrick;
            }
            else // The button is active
            {
                openingImage.Visible = false;

                clickedBtn.ForeColor = Color.Firebrick;
                clickedBtn.BackColor = Color.WhiteSmoke;

                foreach (Button btn in navItemLayout.Controls)
                {
                    // Maintain same color state for unselected buttons
                    if (btn.Name != clickedBtn.Name)
                    {
                        btn.ForeColor = Color.WhiteSmoke;
                        btn.BackColor = Color.Firebrick;
                    }
                }

                // Determines what content to show in window
                navSelected = clickedBtn.Text;

                navShowButtonContents(navSelected);
            }
        }

        private void navShowButtonContents(string selectedNavItem)
        {
            hideAllSectionContent();
            switch (selectedNavItem)
            {
                case "MENU":
                    tblMenu.Visible = true;
                    break;
                case "ORDER":
                    panelOrder.Visible = true;
                    break;
                case "SERVICES":
                    imgServices.Visible = true;
                    break;
                case "ABOUT":
                    imgAbout.Visible = true;
                    break;
                case "CONTACT US":
                    imgContact.Visible = true;
                    break;
                default:
                    break;
            }
        }

        private void hideAllSectionContent()
        {
            imgContact.Visible = false;
            imgServices.Visible = false;
            imgAbout.Visible=false;
            tblMenu.Visible=false;
            panelOrder.Visible=false;
        }

        private void moveButton_MouseDown(object sender, MouseEventArgs e)
        {
            Button button = (Button)sender;
            button.Top += 5;
        }

        private void moveButton_MouseUp(object sender, MouseEventArgs e)
        {
            Button button = (Button)sender;
            button.Top -= 5;
        }

        private void btnBack_Click(object sender, EventArgs e)
        {
            // If user clicks back, empty the cart (subtotal, item count, etc.)
            panelOrder.Visible = false;
            openingImage.Visible = true;
            btnOrder.BackColor = Color.Firebrick;
            btnOrder.ForeColor = Color.WhiteSmoke;
            btnReset_Click(sender, e);
        }

        private void btnReset_Click(object sender, EventArgs e)
        {
            MenuItem.total = 0;
            MenuItem.subTotal = 0;
            MenuItem.itemCount = 0;
            lblTax.ResetText();
            lblTotal.ResetText();
            lblSubtotal.ResetText();
            comboAppetizers.ResetText();
            comboBeverages.ResetText();
            comboDesserts.ResetText();
            comboEntrees.ResetText();
            numAppetizers.ResetText();
            numBeverages.ResetText();
            numDesserts.ResetText();
            numEntrees.ResetText();
            priceAppetizer.ResetText();
            priceBeverage.ResetText();
            priceDessert.ResetText();
            priceEntree.ResetText();
            txtCart.ResetText();
            descAppetizer.ResetText();
            descBeverage.ResetText();
            descDessert.ResetText();
            descEntree.ResetText();
        }

        private void populateSummary(MenuItem food, int quantity)
        {
            // Add to subtotal
            MenuItem.subTotal += food.price * quantity;
            // Finalize the total
            MenuItem.total = (MenuItem.subTotal * MenuItem.tax) + MenuItem.subTotal;

            //Display the values
            lblSubtotal.Text = "$" + MenuItem.subTotal.ToString("N2");
            lblTotal.Text = "$" + MenuItem.total.ToString("N2");
            lblTax.Text = "$" + (MenuItem.tax * MenuItem.subTotal).ToString("N2");
        }

        private void addButton_Click(object sender, EventArgs e)
        {
            Button btn = (Button)sender;
            bool valueSelected = false;

            switch (btn.Name)
            {
                case "btnAddAppetizer":
                    if (comboAppetizers.SelectedItem != null && numAppetizers.Value != 0)
                    {
                        
                        int selectionCount = (int)numAppetizers.Value;
                        txtCart.Text += selectionCount + " × " + comboAppetizers.Text + Environment.NewLine;
                        MenuItem.itemCount += selectionCount;

                        foreach (MenuItem item in menuItems)
                        {
                            if (item.name == (string)comboAppetizers.SelectedItem)
                            {
                                populateSummary(item, selectionCount);
                            }
                        }
                        valueSelected = true;
                    }
                    break;
                case "btnAddEntree":
                    if (comboEntrees.SelectedItem != null && numEntrees.Value != 0)
                    {
                        
                        int selectionCount = (int)numEntrees.Value;
                        txtCart.Text += selectionCount + " × " + comboEntrees.Text + Environment.NewLine;
                        MenuItem.itemCount += selectionCount;

                        foreach(MenuItem item in menuItems)
                        {
                            if (item.name == (string)comboEntrees.SelectedItem)
                            {
                                populateSummary(item, selectionCount);
                            }
                        }
                        valueSelected = true;
                    }
                    break;
                case "btnAddDessert":
                    if (comboDesserts.SelectedItem != null && numDesserts.Value != 0)
                    {
                        
                        int selectionCount = (int)numDesserts.Value;
                        txtCart.Text += selectionCount + " × " + comboDesserts.Text + Environment.NewLine;
                        MenuItem.itemCount += selectionCount;

                        
                        foreach (MenuItem item in menuItems)
                        {
                            if (item.name == (string)comboDesserts.SelectedItem)
                            {
                                populateSummary(item, selectionCount);
                            }
                        }
                        valueSelected = true;
                    }
                    break;
                case "btnAddBeverage":
                    if (comboBeverages.SelectedItem != null && numBeverages.Value != 0)
                    {
                        
                        int selectionCount = (int)numBeverages.Value;
                        txtCart.Text += selectionCount + " × " + comboBeverages.Text + Environment.NewLine;
                        MenuItem.itemCount += selectionCount;

                        foreach (MenuItem item in menuItems)
                        {
                            if (item.name == (string)comboBeverages.SelectedItem)
                            {
                                populateSummary(item, selectionCount);
                            }
                        }
                        valueSelected = true;
                    }
                    break;
                default:
                    break;
            }

            if (!valueSelected)
            {
                MessageBox.Show("Must select an item with a quantity of at least 1.");
            }
        }

        private void showItemPrice(object sender, EventArgs e)
        {
            // Note: no need to identify which combo box,
            //       function is set for all four comboboxes
            ComboBox comboBox = (ComboBox)sender;
            string selectedCombo = comboBox.Name;
            string category = selectedCombo.Substring(5);
            string selectedItem = comboBox.Text;
            foreach(MenuItem item in menuItems)
            {
                // Look for the menu item in the actual data
                if(item.name == selectedItem && item.category == category)
                {
                    switch (category)
                    {
                        case "Appetizers":
                            priceAppetizer.Text = "$" + item.price.ToString();
                            descAppetizer.Text = item.description;
                            break;
                        case "Entrees":
                            priceEntree.Text = "$" + item.price.ToString();
                            descEntree.Text = item.description;
                            break;
                        case "Desserts":
                            priceDessert.Text = "$" + item.price.ToString();
                            descDessert.Text = item.description;
                            break;
                        case "Beverages":
                            priceBeverage.Text = "$" + item.price.ToString();
                            descBeverage.Text= item.description;
                            break;
                        default:
                            break;
                    }
                }
            }
        }

        private void btnCheckout_Click(object sender, EventArgs e)
        {
            fo.writeFile(fileOutPath, "Items: \n" + txtCart.Text, "Subtotal: " + 
                lblSubtotal.Text, "Total: " + lblTotal.Text, "Tax: " + lblTax.Text);
            MessageBox.Show("THANK YOU FOR CHOOSING SNACKINGTON!" +
                "YOUR ORDER SUMMARY HAS BEEN CREATED IN: \n" + fileOutPath);
        }
    }
}
