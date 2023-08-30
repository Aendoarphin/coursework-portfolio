using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Text.RegularExpressions;

namespace HealthRecordHw
{
    class Patient
    {
        //data
        public string prefix { get; set; } //extra attribute 1
        public string fname { get; set; }
        public string lname { get; set; }
        public string gender { get; set; } //M or F
        public double height { get; set; }
        public double weight { get; set; }
        public int birthYear { get; set; }
        public int birthMonth { get; set; } //use random generator
        public int birthDay { get; set; }
        public double bmi { get; set; } //the actual value
        public string healthStatus { get; set; } //overweight, etc., extra attribute 2

        public Patient()
        {
            prefix = null; fname = null; lname = null; gender = null;
            height = 0; weight = 0; birthYear = 0; birthMonth = 0;
            birthDay = 0;
        }

        public Patient(string prefix, string fname, string lname, string gender, double height,
            double weight, int birthYear, int birthMonth, int birthDay)
        {
            this.prefix = prefix;
            this.fname = fname;
            this.lname = lname;
            this.gender = gender;
            if (Regex.Match(gender, @"male | MALE | [Mm]").Success)
            {
                this.gender = "M"; 
            }
            else if (Regex.Match(gender, @"female | FEMALE | [Ff]").Success)
            {
                this.gender = "F"; 
            }
            else
            { 
                this.gender = "Nonbinary";
            }
            this.height = height;
            while (height < 0)
            {
                Console.Write("Please enter a valid height: ");
                height = double.Parse(Console.ReadLine());
            }
            this.weight = weight;
            while (weight < 0)
            {
                Console.Write("Please enter a valid weight: ");
                weight = double.Parse(Console.ReadLine());
            }
            this.birthYear = birthYear;
            while (birthYear < 1947 || birthYear > 2022)
            {
                Console.WriteLine("Please enter a valid year: ");
                birthYear = int.Parse(Console.ReadLine());
            }
            this.birthMonth = birthMonth;
            while (birthMonth < 1 || birthMonth > 12)
            {
                Console.WriteLine("Please enter a valid month: ");
                birthMonth = int.Parse(Console.ReadLine());
            }
            this.birthDay = birthDay;
            while (birthDay < 1 || birthDay > System.DateTime.DaysInMonth(birthYear, birthMonth))
            {
                Console.WriteLine("Please enter a valid day: ");
                birthDay = int.Parse(Console.ReadLine());
            }

        }

        //public string getFirstLast() { return fname + " " + lname; }
        //public void setFirstLast(string fname, string lname) { this.fname = fname; this.lname = lname; }
        //public string getPrefix() { return prefix; }
        //public void setPrefix(string prefix) { this.prefix = prefix; }
        //public string getGender() { return gender; }
        //public void setGender(string gender) { this.gender = gender; }
        //public double getHeight() { return height; } 
        //public void setHeight(double height) { this.height = height; }
        //public double getWeight() { return weight; }
        //public void setWeight(double weight) { this.weight = weight; }
        //public int getBirthYear() { return birthYear; }
        //public void setBirthYear(int birthYear) { this.birthYear = birthYear; }
        //public int getBirthMonth() { return birthMonth; }
        //public void setBirthMonth(int birthMonth) { this.birthMonth = birthMonth; }
        //public int getBirthDay() { return birthDay; }
        //public void setBirthDay(int birthDay) { this.birthDay = birthDay; }
        //public string getHealthStatus() { return healthStatus; } 
        //public void setHealthStatus(string healthStatus) { this.healthStatus = healthStatus; }

        public void CreateNewClientRecord()
        {
            //prefix
            Console.Write("Enter client prefix (Mr., Mrs., etc.): ");
            prefix = Console.ReadLine();
            //firstname
            Console.Write("Enter client first name: ");
            fname = Console.ReadLine();
            //lastname
            Console.Write("Enter client last name: ");
            lname = Console.ReadLine();

            //gender
            Console.Write("Enter client gender: ");
            gender = Console.ReadLine();
            if (gender == "male" || gender == "Male"
                || gender == "MALE")
                gender = "M";
            else if (gender == "female" || gender == "Female"
                || gender == "FEMALE")
                gender = "F";
            else
                gender = "Nonbinary";

            //height
            Console.Write("Enter client height (inches): ");
            height = double.Parse(Console.ReadLine());
            while (height < 0)
            {
                Console.Write("Please enter a valid height: ");
                height = double.Parse(Console.ReadLine());
            }
            //weight
            Console.Write("Enter client weight: ");
            weight = double.Parse(Console.ReadLine());
            while (weight < 0)
            {
                Console.Write("Please enter a valid weight: ");
                weight = double.Parse(Console.ReadLine());
            }
            //birthyear
            Console.Write("Enter year of birth: ");
            birthYear = int.Parse(Console.ReadLine());
            while (birthYear < 1947 || birthYear > 2022)
            {
                Console.WriteLine("Please enter a valid year: ");
                birthYear = int.Parse(Console.ReadLine());
            }
            //birthmonth
            Console.Write("Enter month of birth (January is \"01\"): ");
            birthMonth = int.Parse(Console.ReadLine());
            while (birthMonth < 1 || birthMonth > 12)
            {
                Console.WriteLine("Please enter a valid month: ");
                birthMonth = int.Parse(Console.ReadLine());
            }
            //birthday
            Console.Write("Enter day of birth: ");
            birthDay = int.Parse(Console.ReadLine());
            while (birthDay < 1 || birthDay > System.DateTime.DaysInMonth(birthYear, birthMonth))
            {
                Console.WriteLine("Please enter a valid day: ");
                birthDay = int.Parse(Console.ReadLine());
            } 

        }
        public void printRecord() 
        {
            Console.WriteLine("Patient Record-------------------------------");
            Console.WriteLine
                (
                    $"Name: {prefix} {fname} {lname}\n" +
                    $"Gender: {gender}\n" +
                    $"Height: {height}in\n" + 
                    $"Weight: {weight}lbs\n" +
                    $"Born: {birthMonth}/{birthDay}/{birthYear}\n" + 
                    $"BMI: {bmi} | Health Status: {healthStatus}\n"
                );
        }
        public void calculateBMI()
        {
            bmi = weight / Math.Pow(height, 2) * 703;

            if (bmi < 18.5)
                healthStatus = "Underweight";
            else if (bmi >= 18.5 && bmi < 25)
                healthStatus = "Normal";
            else if (bmi >= 25 && bmi < 30)
                healthStatus = "Overweight";
            else
                healthStatus = "Obese";
            Console.WriteLine($"\n{fname} {lname}");
            Console.WriteLine($"BMI: {bmi} | Health Status: {healthStatus}\n");
        }

    }
}
