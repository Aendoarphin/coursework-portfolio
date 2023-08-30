import java.util.regex.*;

public class Word {
    private String text;

    public Word(String text) {
        this.text = text;
    }

    public String getText() {
        return text;
    }

    public int countSyllables() {
        String word = text.toLowerCase();
        int syllableCount = 0;

        // Define a regular expression pattern to match vowels
        Pattern pattern = Pattern.compile("[aeiouy]+");

        Matcher matcher = pattern.matcher(word);

        while (matcher.find()) {
            syllableCount++;
        }

        // Adjust for words that end with 'e' but are not the only vowel (e.g., "time")
        if (word.endsWith("e") && syllableCount > 1) {
            syllableCount--;
        }

        return syllableCount;
    }
}