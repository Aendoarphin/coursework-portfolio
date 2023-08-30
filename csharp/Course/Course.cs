using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cs_hw1
{
    class Course
    {
        //auto implemented properties
        public string CourseName { get; set; }
        public string Instructor { get; set; }
        public int DeptCode { get; set; }
        public int CourseNum { get; set; }
        public int CredHrs { get; set; }

        
        //constructor
        public Course()
        {
            CourseName = "None"; Instructor = "None";
            DeptCode = 0; CourseNum = 0; CredHrs = 0;
        }
        
        //val pass constructor
        public Course(string coursename, string instrctr, int deptcode, 
            int crsenum, int crdhrs)
        {
            CourseName = coursename; Instructor = instrctr; DeptCode = deptcode;
            CourseNum = crsenum; CredHrs = crdhrs;
        }
        //methods
        //print all course info
        public void PrintCourseInfo()
        {
            string info = $"\nCourse Name: {CourseName}\nInstructor: {Instructor}\n" +
            $"Department Code: {DeptCode}\nCourse Number: {CourseNum}\nCredit Hours: {CredHrs}\n";
            Console.WriteLine(info);
        }
        /* TRADITIONAL GET AND SET
        
        //change course name, instructor, dept. code, course number, credit hrs
        public void SetCourseName(string crsname) { CourseName = crsname; }
        public void SetInstructor(string instructor) { Instructor = instructor; }
        public void SetDeptCode(int deptcode) { DeptCode = deptcode; }
        public void SetCourseNum(int crsnum) { CourseNum = crsnum; }
        public void SetCredHrs(int crdhrs) { CredHrs = crdhrs; }

        //access course name, instructor, dept. code, course number, credit hrs
        public string GetCourseName() { return CourseName; }
        public string GetInstructor() { return Instructor; }
        public int GetDeptCode() { return DeptCode; }
        public int GetCourseNum() { return CourseNum; }
        public int GetCredHrs() { return CredHrs; }

        */

        //method to acquire user input
        public void AskUserInput()
        {
            Console.WriteLine("\n");
            Console.WriteLine("Enter the course name: ");
            CourseName = Console.ReadLine();
            Console.WriteLine("Enter the instructor name: ");
            Instructor = Console.ReadLine();
            Console.WriteLine("Enter the department code: ");
            DeptCode = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the course number: ");
            CourseNum = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the credit hours: ");
            CredHrs = int.Parse(Console.ReadLine());
            Console.WriteLine("\n");
        }

    }
}
