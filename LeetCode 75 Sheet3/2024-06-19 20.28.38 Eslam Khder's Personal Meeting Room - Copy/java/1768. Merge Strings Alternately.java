import java.util.Scanner;

public class Main {
    public static void main(String[] argv)
    {
        Scanner scanner = new Scanner(System.in);

    }


    public String mergeAlternately(String word1, String word2) {
        int sizeWord1 = word1.length(); // 1
        int sizeWord2 = word2.length(); // 3

        int w1 = 0; // 0 1
        int w2 = 0; // 0 1 2 3

        String result = ""; // "aert"

        //         0               012
        // word1= "a"      word2= "ert"
        while (w1 < sizeWord1 || w2 < sizeWord2) {

            if (w1 < sizeWord1) {
                result += word1.charAt(w1);
                w1++;
            }

            if (w2 < sizeWord2) {
                result += word2.charAt(w2);
                w2++;
            }
        }

        return result;
    }

}
