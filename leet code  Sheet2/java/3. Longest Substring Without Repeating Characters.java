import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] argv)
    {
        Scanner scanner = new Scanner(System.in);

    }

    /*
       s
         e
      01234567
     "abcabcbb"
    */
    public int lengthOfLongestSubstring(String s) {
        Map<Character, Integer> map = new HashMap<>();
        // a = 0
        // b = 1
        // c = 2
        int start = 0;
        int maxSize = 0; // 3
        for(int end =0; end<s.length();end++){ // end = 3
            char c = s.charAt(end); // a
            if (map.containsKey(c) && map.get(c) >= start){
                start = map.get(c) + 1;
            }
            maxSize = Math.max(maxSize, end - start + 1);

            map.put(c, end);
        }

        return maxSize;
    }
}
