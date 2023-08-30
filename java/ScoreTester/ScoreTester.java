import java.util.ArrayList;
import java.util.Scanner;
import java.io.File;

public class ScoreTester
{
   private Scanner sc;
   private ArrayList<String> scores = new ArrayList<String>();

   public void openFile()
   {
      try
      {
         sc = new Scanner(new File("input.txt"));
      }
      catch(Exception e)
      {
         System.out.println("File could not be found.");
      }
   }

   public void readFile()
   {
      while(sc.hasNext())
      {
         String the_score = sc.next();
         scores.add(the_score);
      }
   }
   
   public void closeFile()
   {
      sc.close();
   }

   public void displayArrayList()
   {
      for(int i = 0; i < scores.size(); i++)
      {
         System.out.println("Score #"+ (i+1) + ": " + scores.get(i));
      }
   }
}
