package program;

import java.util.Arrays;

public class twp {

    public static int[] sortsqrs(int[] arr) {
        int n = arr.length;
        int left = 0, right = n - 1;
        int ans[] = new int[n];
        int k = n-1;  
        
        while (left <= right) {
            if (Math.abs(arr[left]) > Math.abs(arr[right])) {
                ans[k--] = arr[left] * arr[left];
                left++;
            } else {
                ans[k--] = arr[right] * arr[right];
                right--;
            }
        }
        
        return ans; // Return the sorted squared array
    }

    public static void main(String[] args) {
        int[] arr = {-7, -3, 2, 3, 11};
        int[] result = sortsqrs(arr);
        System.out.println(Arrays.toString(result));
    }
}
