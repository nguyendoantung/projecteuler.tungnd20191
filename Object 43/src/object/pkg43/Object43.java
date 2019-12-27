/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package object.pkg43;

/**
 *
 * @author Admin
 */
public class Object43 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        long result = 0;
        //long result = 0;
        int[] perm =  { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        int[] divisors = { 1,  2, 3, 5, 7, 11, 13, 17 };
 
        int count = 1;
        int numPerm = 3265920;
 
        while (count < numPerm) {
            int N = perm.length;
            int i = N - 1;
            while (perm[i - 1] >= perm[i]) {
                i = i - 1;
            }
 
        int j = N;
        while (perm[j - 1] <= perm[i - 1]) {
            j = j - 1;
        }
 
    // swap values at position i-1 and j-1
        swap(i - 1, j - 1);
 
        i++;
        j = N;
        while (i < j) {
            swap(i - 1, j - 1);
            i++;
            j--;
        }
        int divisible = 1;
        for (int k = 1; k < divisors.length; k++) {
            int num = 100 * perm[k] + 10 * perm[k + 1] + perm[k + 2];
            if (num % divisors[k] != 0) {
                divisible = 0;
                break;
            }
        }
        if (divisible == 1) {
            long num = 0;
            for(int k = 0; k < perm.length; k++){
                num = 10*num + perm[k];
            }
            result += num;
            }
        count++;
        }
        System.out.println("result: "+ result);
    }

    private static void swap(int i, int i0) {
        int temp;
        temp = i0;
        i = i0;
        i0 = temp;
    }
    
}
