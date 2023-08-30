public class VehicleDemo
{
   public static void process(Vehicle v, String registrationId)
   {
      // This example shows the syntax of instanceof and casting
      if (v instanceof Car) 
      {
         Car c = (Car) v; // Vehicle has no setRegistrationId method--must cast
         c.setRegistrationId(registrationId);
      }

      System.out.println(v); // calls v.toString()
   }

}
