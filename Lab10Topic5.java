public class Lab10Topic5 {
    public static void main(String[] args) {
        // Initialize a sample string
        String originalStr = "Hello, World!";

        // charAt(int index) - Get and print a character at a specific index
        char charAtIndex = originalStr.charAt(7);
        System.out.println("charAt(7): " + charAtIndex);

        // compareTo(String anotherString) - Compare two strings lexicographically
        String compareToStr = "Hello, Universe!";
        int compareToResult = originalStr.compareTo(compareToStr);
        System.out.println("compareTo(compareToStr): " + compareToResult);

        // concat(String str) - Concatenate two strings
        String concatStr = originalStr.concat(" How are you?");
        System.out.println("concat(concatStr): " + concatStr);

        // equals(Object anObject) - Check if two strings are equal
        String equalStr = "Hello, World!";
        boolean isEqual = originalStr.equals(equalStr);
        System.out.println("equals(equalStr): " + isEqual);

        // isEmpty() - Check if a string is empty
        String emptyStr = "";
        boolean isEmpty = emptyStr.isEmpty();
        System.out.println("isEmpty(emptyStr): " + isEmpty);

        // length() - Get the length of a string
        int length = originalStr.length();
        System.out.println("length(originalStr): " + length);

        // replace(CharSequence target, CharSequence replacement) - Replace a substring
        String replacedStr = originalStr.replace("World", "Universe");
        System.out.println("replace(originalStr): " + replacedStr);

        // substring(int beginIndex) - Extract a substring
        String subStr = originalStr.substring(7);
        System.out.println("substring(7): " + subStr);

        // toLowerCase() - Convert to lowercase
        String lowerCaseStr = originalStr.toLowerCase();
        System.out.println("toLowerCase(originalStr): " + lowerCaseStr);

        // toUpperCase() - Convert to uppercase
        String upperCaseStr = originalStr.toUpperCase();
        System.out.println("toUpperCase(originalStr): " + upperCaseStr);

        // trim() - Remove leading and trailing whitespace
        String trimmedStr = "   Spaces   ";
        String trimmed = trimmedStr.trim();
        System.out.println("trim(trimmedStr): " + trimmed);
    }
}
