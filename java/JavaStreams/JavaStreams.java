package JavaStreams;

import java.util.stream.Stream;
import java.util.stream.Collectors;
import java.util.List;
import java.util.Optional;
import java.util.ArrayList;

public class JavaStreams
{
   public static void main(String[] args)
   {
    //make arraylist of Integer
    ArrayList<Integer> intList = new ArrayList<Integer>();
    for(int i = 0; i <= 100; i++)
    {
        intList.add(i);
    }
    //make stream of arraylist of Integer
    Stream<Integer> myStream = intList.stream();
    //copy into new list of values > 50
    List<Integer> intList2 = myStream.filter(num -> 
    num > intList.get(50) && num < intList.size())
    .collect(Collectors.toList());
    //use Optional
    Optional<Integer> optResult = Optional.of(0);
    if(intList2.size() <= 50 && intList2.size() >= 50)
    {
        System.out.print("Result: " + intList2 + "\n");
    }
    else
    {
        System.out.print("List not found, " + optResult);
    }
    //find the average
    double avrge = intList2.stream().collect(Collectors.averagingInt(a -> Integer.valueOf(a)));
      System.out.println("Average = " + avrge);
    }
}

