using System;
using System.Collections.Generic;
using static System.Console;

namespace cs_hw1
{
    class Program
    {
        public static void Main(string[] args)
        {
            //vars for value pass constructor
            string courseName = "Data Structures"; string instructorName = "Bekkering";
            int deptCode = 1121, courseNum = 2322, credHrs = 3;
            //standard constructor object
            Course course1 = new Course();

            /*
                value pass constructor object
                (course name, instructor, dept. code, course number, credit hours)
            */
            Course course2 = new Course(courseName, instructorName, deptCode, courseNum, credHrs);

            course1.PrintCourseInfo(); //fields for course1 have been initialized to none or 0
            course2.PrintCourseInfo(); //fields for course2 have been defined on line 11-13

            //modify contents of course1 and course2 via user input
            course1.AskUserInput(); course1.PrintCourseInfo();
            course2.AskUserInput(); course2.PrintCourseInfo();

            //call set method for each object
            Console.WriteLine(course1.Instructor); Console.WriteLine(course2.Instructor);

            Console.WriteLine("\n");

            //make instructor obj AND course name obj
            Course course_name = new Course(); Course instructor_name = new Course();
            //show initial contents 
            Console.WriteLine(course_name.CourseName); Console.WriteLine(instructor_name.Instructor);
            //modify and print contents
            Console.WriteLine(course_name.CourseName = "Comp"); Console.WriteLine(instructor_name.CourseName = "Tesson");

            Console.ReadKey();
        }
    }
}
