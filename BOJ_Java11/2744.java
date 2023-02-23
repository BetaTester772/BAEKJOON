//2744

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S = sc.next();
        for (int i = 0; i < S.length(); i++) {
            int c = S.charAt(i);
            if (c > 96)
                System.out.print((char) (c - 32));
            else
                System.out.print((char) (c + 32));
        }
    }
}