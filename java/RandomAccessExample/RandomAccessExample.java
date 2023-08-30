package RandomAccessExample;

import java.io.IOException;
import java.io.RandomAccessFile;
import java.util.Scanner;
import java.io.File;
import java.io.FileWriter;

public class RandomAccessExample
{
    public static void main(String[] args)
    {

        try
        {
            //sequential access read and write
            String my_file = "text.txt";
            String text = "Kolmikko   snowland 88\nTohoku     JR ski ski 89\nYuki snow 87";
            FileWriter writer = new FileWriter(my_file);
            writer.write(text); writer.close();
            Scanner sc = new Scanner(new File(my_file));
            while(sc.hasNextLine())
            {
                System.out.println(sc.nextLine());
            }
            sc.close();

            System.out.println();

            System.out.println("\nFile size (in bytes): " + getFileSize(my_file) + "\n");

            //random access read and write
            System.out.println("What was read:\n" + new String(read_file(my_file, 0, 60)));
            write_to_file(my_file, text, 2);

            Scanner sc2 = new Scanner(new File(my_file));
            System.out.println("Result:");
            while(sc2.hasNextLine()) {System.out.println(sc2.nextLine());}
            sc2.close();

            //random access on sequential file
            RandomAccessFile raf_seq = new RandomAccessFile(new File(my_file), "rw");
            raf_seq.seek(5); char a_char = raf_seq.readChar();
            System.out.println("\nJapanese???: " + a_char + " | at byte " + raf_seq.getFilePointer());
            raf_seq.close();
        
            //text access on RandomAccessFile
            System.out.println();
            RandomAccessFile seq_raf = new RandomAccessFile(new File(my_file), "rw");
            for(int i = 0; i < 3; i++)
            {
                System.out.println("Line " + i + ": " + seq_raf.readLine());
            }

        }
        catch(IOException e)
        {
            System.out.println("Error occured: " + e.getMessage());
        }
    }
    //read file with RandomAccessFile read Mode
    public static byte[] read_file(String file, int pos, long end) throws IOException
    {
        RandomAccessFile file_r = new RandomAccessFile(file, "r");
        file_r.seek(pos);
        byte[] bytes_to_read = new byte[(int) end];
        file_r.read(bytes_to_read);
        file_r.close();
        return bytes_to_read;
    }
    //write to file with RandomAccesFile read/write mode
    public static void write_to_file(String file, String data, int pos) throws IOException
    {
        RandomAccessFile file_rw = new RandomAccessFile(file, "rw");
        file_rw.seek(pos);
        file_rw.write(data.getBytes());
        file_rw.close();
        System.out.println("\nWriting has finished." + "\n");
    }
    //get file size
    public static long getFileSize(String file) throws IOException
    {
        RandomAccessFile file_r = new RandomAccessFile(file, "r");
        long the_size = file_r.length();
        file_r.close();
        return the_size;
    }
}

