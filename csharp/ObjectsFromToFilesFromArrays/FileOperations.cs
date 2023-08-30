using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO; //lets you use StreamWriter

namespace ObjectsFromToFilesFromArrays
{
    class FileOperations
    {
        //string fname = "C:\\temp\\myContacts.txt" //method 1
        //string fname = "C:/users/arhon/downloads/mycontacts.txt"; //method 2
        string fname = "C:/users/arhon/downloads/inputFile.txt"; //input file
        string fname2 = "C:/users/arhon/downloads/outputFile.txt"; //output file

        //code to read from file
        public void ReadFile(List<Client> contactList)
        {
            StreamReader sr = new StreamReader(fname); //use fname1 as input file for stream reader sr
            string person; //create string obj to store one line at a time as you read it from the file
            //loop through the file one line at a time
            while((person = sr.ReadLine()) != null) //keep reading until you reach null value
            {
                //split each string line into the separate fields
                string[] words = person.Split(','); //split each line based on a comma, into individual words

                //method 1
                /*
                 * Client c1 = new Client(words[0], words[1], words[2], words[3]); //create client obj
                contactList.Add(c1); //add client obj to the list
                */

                //method 2
                contactList.Add(new Client(words[0], words[1], words[2], words[3]));
            }
            //test content of the list
            foreach (Client c in contactList)
            {
                Console.WriteLine(c.lname);
            }
        }

        //write to file
        public void AddToFile(List<Client> contactList) //pass client obj to this method
        {
            StreamWriter sw = new StreamWriter(fname2); //pass the directory into this obj
            foreach (Client c in contactList)
            {
                sw.WriteLine($"First: {c.fname} | Last: {c.lname} | Phone: {c.phone} | Email: {c.email}");
            }
            sw.WriteLine("\n");
            sw.Close(); //close the file
        }
    }
}
