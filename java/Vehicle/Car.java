public class Car extends Vehicle
{
   // This instance variable is added to the subclass
   private String registrationId;
   
   public Car()
   {
      setNumberOfTires(4); 
      registrationId = "??????";
   }

   public void setRegistrationId(String newValue)
   {
      registrationId = newValue;
   }

   public String getRegistrationId()
   {
      return registrationId;
   }

   public String toString() 
   {
      return super.toString() + "[registrationId=" + registrationId + "]";
      // This is a good way of implementing toString in a subclass--see Special Topic 9.6
   }
}
