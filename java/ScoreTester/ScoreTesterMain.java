public class ScoreTesterMain
{
   public static void main(String[] args)
   {
      ScoreTester st = new ScoreTester();
      st.openFile();
      st.readFile();
      st.closeFile();
      st.displayArrayList();
   }
}
