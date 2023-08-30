package JavaHomework;

import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String [] args)
    {
        try
        {
            File myFile = new File("Homework4.txt"); //construct the file to read and write
            PrintWriter pw = new PrintWriter(myFile); //construct PrintWriter for filewriting
            System.out.println("Printwriter has written: ");
            for(int i = 1; i <= 100; i++) //write Strings 1-100 to file
            {
                pw.write(i+"  ");
                System.out.print(i+"  ");
            }
            pw.close();

            System.out.println();

            ArrayList<Integer> myList = new ArrayList <Integer>(100); //construct an int arraylist of size 100
            Scanner sc = new Scanner(new FileReader("Homework4.txt")); //construct a filereader for reading Homework4.txt
            for(int i = 0; i < 100; i++) //read each string number and recast it into an integer
            {
                int intRecast = Integer.parseInt(sc.next());
                int temp = intRecast;
                System.out.println("The String " + (i+1) + " recasted as an integer: " + temp);
                myList.add(temp); //add the integer to the arraylist
            }
            sc.close();

            System.out.println("\nContents of the array list: ");
            for(int i = 0; i < myList.size(); i++) //print the arraylist
            {
                System.out.print(myList.get(i) + "  ");
            }
            
        }
        catch(IOException ioe)
        {
            System.out.println("Error: "+ ioe.getMessage());
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }

    }
}
