using System;
using System.Collections.Generic; //needed to use lists

namespace ObjectsFromToFilesFromArrays
{
    class Program
    {
        static void Main(string[] args)
        {
            //create arraylist
            List<Client> contactList = new List<Client>(); //list object similar to array
            //create file object
            FileOperations fileObj = new FileOperations(); //uses a default constrctr

            fileObj.ReadFile(contactList);
            fileObj.AddToFile(contactList);

            /*Client c1 = new Client("Joe", "Smith", "918-555-4141", "jsmith@gmail.com");
            Client c2 = new Client("Maya", "Smith", "918-112-4533", "msmith@gmail.com");
            FileOperations fo = new FileOperations();*/

            /*fo.AddToFile(c1);
            fo.AddToFile(c2);*/


        }
    }
}
