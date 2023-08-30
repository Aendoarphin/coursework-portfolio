import java.util.Scanner;

public class SyllableCounter {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter a sentence ending in a question mark OR period.");

        String input;
        do {
            input = in.nextLine(); // Use nextLine() to read the entire sentence
            input = input.trim(); // Remove leading and trailing whitespace

            // Check if the input ends with a question mark or period
            if (input.endsWith("?") || input.endsWith(".")) {
                Word w = new Word(input);
                int syllables = w.countSyllables();
                System.out.println("Syllables in " + input + ": " + syllables);
            } else {
                System.out.println("Invalid input. Please enter a sentence ending in a question mark or period.");
            }
        } while (!(input.endsWith("?") || input.endsWith(".")));

        in.close();
    }
}
