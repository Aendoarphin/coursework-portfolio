using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ObjectsFromToFilesFromArrays
{
    class Client
    {
        public string fname { get; set; }
        public string lname { get; set; }
        public string phone { get; set; }
        public string email { get; set; }

        public static int numofcontacts = 0;

        public Client(string fname, string lname, string phone, string email)
        {
            this.fname = fname; 
            this.lname = lname;
            this.phone = phone;
            this.email = email;
        }



    }
}
