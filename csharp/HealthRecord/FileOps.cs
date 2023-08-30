using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace HealthRecordHw
{
    class FileOps
    {
        //read patient info from file into arr/arrlist of obj
        string FileName;
        public void ReadFile(List<Patient> patientlist)
        {
            Console.WriteLine("Enter directory of read file: ");
            FileName = Console.ReadLine();
            while(!(FileName.StartsWith("C:/")))
            {
                Console.WriteLine("Enter a valid directory: ");
                FileName = Console.ReadLine(); 
            }
            StreamReader sr = new StreamReader(FileName); //read the file            
            string patient;
            while((patient = sr.ReadLine()) != null)
            {
                //recommended, simpler
                string[] words = patient.Split(", ");
                patientlist.Add(new Patient(words[0], words[1], words[2], words[3], double.Parse(words[4]), 
                    double.Parse(words[5]), int.Parse(words[6]), int.Parse(words[7]), int.Parse(words[8])));

                ////alternative
                //Patient p = new Patient(words[0], words[1], words[2], words[3], double.Parse(words[4]),
                //    double.Parse(words[5]), int.Parse(words[6]), int.Parse(words[7]), int.Parse(words[8]));
                //patientlist.Add(p);
            }

            //Console.WriteLine("Contents of file: ");
            //foreach (Patient p in patientlist)
            //{
            //    Console.WriteLine($"{p.prefix} {p.fname} {p.lname} {p.gender} {p.height} {p.weight} {p.birthYear} {p.birthMonth} {p.birthDay}");
            //}
        }
        //Write to a new file the patients namd and bmi
        public void AddToFile(List<Patient> patientList)
        {
            Console.WriteLine("Contents added to the file: ");
            StreamWriter sw = new StreamWriter("C:/users/arhon/downloads/arhon.txt");
            foreach (Patient p in patientList)
            {
                //sw.WriteLine($"Name: {p.fname} {p.lname} | BMI: {p.bmi}");
                ////display to the screen any output that you send to the file.
                //Console.WriteLine($"Name: {p.fname} {p.lname} | BMI: {p.bmi}");
                sw.WriteLine($"{p.fname} {p.lname} {p.bmi}");
            }
            sw.WriteLine("\n");
            sw.Close(); //close the file
        }

        
    }
}
