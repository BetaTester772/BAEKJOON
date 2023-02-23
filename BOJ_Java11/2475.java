import java.util.Scanner;

import static java.lang.Math.pow;

public class Main {

    public static int check(int a[]){
        int N = 0;
        for (int i = 0; i < 5; i++) {
            N += pow(a[i], 2);
        }
        return N % 10;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] nlist  = new int[5];

        for (int i = 0; i < 5; i++) {
            nlist[i] = sc.nextInt();
        }

        System.out.println(check(nlist));
    }
}
