using System;
using System.Collections.Generic;

namespace HealthRecordHw
{
    class Program
    {
        static void Main(string[] args)
        {
            ////FROM HW2
            ////regular constrctr, ask user for input
            //Patient patient1 = new Patient();
            //patient1.CreateNewClientRecord();
            //patient1.calculateBMI();
            //patient1.printRecord();

            //Console.WriteLine();

            ////regular constrctr, use auto imp property get and set
            //Patient patient2 = new Patient();
            //patient2.prefix = "Lt."; Console.WriteLine($"Prefix = {patient2.prefix}");
            //patient2.fname = "Luke"; Console.WriteLine($"Prefix = {patient2.fname}");
            //patient2.lname = "Skywalker"; Console.WriteLine($"Prefix = {patient2.lname}");
            //patient2.gender = "Male"; Console.WriteLine($"Gender = {patient2.gender}");
            //patient2.weight = 200; Console.WriteLine($"Prefix = {patient2.weight}");
            //patient2.height = 68; Console.WriteLine($"Prefix = {patient2.height}");
            //patient2.birthYear = 1999; Console.WriteLine($"Birth Year = {patient2.birthYear}");                            
            //patient2.birthMonth = 10; Console.WriteLine($"Birth Month = {patient2.birthMonth}");
            //patient2.birthDay = 3; Console.WriteLine($"Birth Day = {patient2.birthDay}");


            //patient2.calculateBMI();

            ////value pass constrctr with rand generator as param
            //Random rand = new Random();
            //int randomHeight = rand.Next(1, 500);
            //Console.WriteLine($"Random number generated for weight: {randomHeight}\n");

            //Random rand2 = new Random();
            //int randomWeight = rand2.Next(1, 1000);
            //Console.WriteLine($"Random number generated for weight: {randomWeight}\n");

            //Random rand3 = new Random();
            //int randomYear = rand3.Next(1900, 2022);
            //Console.WriteLine($"Random number generated for birth year: {randomYear}\n");

            //Random rand4 = new Random();
            //int randomMonth = rand4.Next(1, 12);
            //Console.WriteLine($"Random number generated for birth month: {randomMonth}\n");

            //Random rand5 = new Random();
            //int randomDay = rand5.Next(1, 31);
            //Console.WriteLine($"Random number generated for birth day: {randomDay}\n");

            //Patient patient3 = new Patient("Ms.", "Maxine", "Gracie", "genderfluid", randomHeight, randomWeight, randomYear, randomMonth, randomDay);
            //patient3.calculateBMI();

            ////print patient records
            //patient2.printRecord();
            //patient3.printRecord();

            ////HW3
            List<Patient> patientList = new List<Patient>();
            FileOps fo = new FileOps();
            //read patient info from file into arr/arrlist of obj
            fo.ReadFile(patientList);
            ////Calculate BMI of and health status of each patient
            foreach(Patient p in patientList)
            {
                p.calculateBMI();
            }
            ////Write to a new file the patients namd and bmi
            fo.AddToFile(patientList);


        }
    }
}
