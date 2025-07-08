package java;
import java.util.*;

public class Last {
    static int Lastcount(int arr[], int x) {
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == x) {
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter size of array: ");
        int n = scanner.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter elements of array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        System.out.println("Enter first element to find: ");
        int x = scanner.nextInt();
        System.out.println("Count of " + x + " is " + Lastcount(arr, x));

        System.out.println("Enter second element to find: ");
        int x2 = scanner.nextInt();
        System.out.println("Count of " + x2 + " is " + Lastcount(arr, x2));

    }
}