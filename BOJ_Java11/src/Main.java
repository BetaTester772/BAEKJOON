//2744
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S = sc.next();
        for (int i = 0; i < S.length(); i++) {
            char c= String.pars S.charAt(i);
            if (c > 96)
                System.out.println(c);
        }
    }
}