package Book;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class MakeBook 
{
    
    public static void main(String[] args)
    {
        //ASK FOR INPUT FOR EACH VARS
        Scanner input = new Scanner(System.in);
        System.out.println("Enter name of author: ");
        String theAuth = input.nextLine();
        System.out.println("Enter name of title: ");
        String theTitle = input.nextLine();
        System.out.println("Enter name of publisher: ");
        String thePub = input.nextLine();
        System.out.println("Enter number of pages: ");
        int thePages = Integer.parseInt(input.nextLine());
        System.out.println("Enter the year made: ");
        int theYear = Integer.parseInt(input.nextLine());
        input.close();
        //MAKE A BOOK
        Book myBook = new Book(); System.out.println("\nEmpty book: " + myBook.getAll());
        Book myBook2 = new Book(theAuth, theTitle, thePub, thePages, theYear);
        System.out.println("\nBook info: " + myBook2.getAll());
        

        //MAKE A HASHMAP
        HashMap<String, Integer> map = new HashMap<String, Integer>();
        //MAKE ARRAYLIST OF THE MAP
        ArrayList<HashMap<String, Integer>> myList = new ArrayList<HashMap<String, Integer>>();
        map.put("San", 3); map.put("Ni", 2); map.put("Roku", 6); map.put("Q", 9); myList.add(map);
        //PRINT THE MAP
        System.out.println("\nContents of the hashmap: ");
        for(Map.Entry<String, Integer> entry : map.entrySet())
        {
            System.out.println( entry.getKey() + " " + entry.getValue() );
        }
        //ACCESS AND PRINT ARRAYLIST
        System.out.println("\nContents of the arraylist: ");
        for(int i=0; i < myList.size(); i++)
        {
            
            System.out.println(myList.get(i));
        }
        System.out.println();
    }
}

