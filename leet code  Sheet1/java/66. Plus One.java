import java.util.Scanner;

public class Main {
    public static void main(String[] argv)
    {
        Scanner scanner = new Scanner(System.in);
        int [] arr = {9,9,9};

        arr = plusOne(arr);
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]);
        }
    }

    public static int[] plusOne(int[] digits) {
        //  0 1 2
        // [1,2,3]      [1,2,4]
        // [1,9,9]      [2,0,0]

        //  0 1 2
        // [9,9,9]      [0,0,0]                  [1,0,0,0]


        int size = digits.length; // 3

        for(int i = size-1 ; i>=0; i--){  // i=2 1 0   i>= 0   i--    2 1 0

            if (digits[i] != 9){
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        int [] result = new int[size + 1]; // [0,0,0,0]
        result[0] = 1;
        return result;
    }

}
