package program;

import java.util.Scanner;

public class prexsum {

    public static int[] makeprefxsum(int[] arr) {
        
        int n = arr.length;
        int[] pref = new int[n];
        pref[0] = arr[0];

        for (int i = 1; i < pref.length; i++) {
            pref[i] = pref[i-1] + arr[i];
        }
        return pref;
    }


    public static void Prinarray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Size of the array : ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.println("Enter array : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Original array :");
        Prinarray(arr);
        int[] pref = makeprefxsum(arr);

        System.out.println("After prefix Sum: ");
        Prinarray(pref);
        sc.close();
    }
}
