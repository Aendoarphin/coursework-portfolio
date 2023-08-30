using System;
using System.Collections;
using System.IO;

namespace arrayList
{
    class Program
    {
        static void addFromFile(ArrayList list1)
        {
            string filename = "C:/users/arhon/downloads/myData.txt";
            StreamReader sr = new StreamReader(filename);
            string row; 
            while((row = sr.ReadLine()) != null)
            {
                list1.Add(row);
            }
        }

        static void combineLists(ArrayList list1, ArrayList list2)
        {
            list1.AddRange(list2); 
        }
        static void displayList(ArrayList list1)
        {
            /*Console.WriteLine("Enter a value: ");
            var x = Console.ReadLine();
            list1.Add(x);*/

            Console.WriteLine("Arraylist consists of:");
            foreach (var item in list1)
                Console.WriteLine(item);
        }
        static void Main(string[] args)
        {
            var list1 = new ArrayList(); //element types can be mixed
            //list1.Add(5); //add 5 to end of list
            //displayList(list1);
            addFromFile(list1);
            displayList(list1);

            var listFromFile = new ArrayList();
            combineLists(list1, listFromFile);
            displayList(list1);


        }

    }
}
