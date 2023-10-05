using System;
using System.Collections.Generic;
using System.DirectoryServices.ActiveDirectory;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Hw3FoodReceipt
{
    internal class MenuItem
    {
        public string name { get; set; }
        public double price { get; set; }
        public string description { get; set; }
        public string category { get; set; }
        //public int itemId { get; set; }

        public static int itemCount { get; set; }
        public static double subTotal { get; set; }
        public static double total { get; set; }
        public const double tax = 0.035;

        public MenuItem()
        {
            name = "";
            price = 0;
            category = "";
            description = "";
            //itemId = 0;
        }

        public MenuItem(string name, double price, 
            string description, string category)
        {
            this.name = name;
            this.price = price;
            this.description = description;
            this.category = category;
            //this.itemId = itemId;
        }
    }
}
