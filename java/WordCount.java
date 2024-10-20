public class WordCount {
    public static void main(String[] args) {
        String text = "This is a sample sentence for counting words using ASCII in Java";

        // Initializing word count variable
        int wordCount = 0;

        // Iterating over each character in the string
        boolean inWord = false;
        for (int i = 0; i < text.length(); i++) {
            char c = text.charAt(i);

            // Checking if the character is a letter or digit using ASCII values
            boolean isLetterOrDigit = (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');

            if (isLetterOrDigit) {
                // If the character is a letter or digit and not in a word, increase word count
                if (!inWord) {
                    wordCount++;
                    inWord = true;
                }
            } else {
                // If the character is not a letter or digit, set inWord to false
                inWord = false;
            }
        }

        // Displaying the word count
        System.out.println("Number of words: " + wordCount);
    }
}
