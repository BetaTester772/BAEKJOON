import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] nlist = new int[26];
        for (int i = 0; i < 26; i++) {
            nlist[i] = -1;
        }
        String S = sc.next();

        for (int i = 0; i < S.length(); i++) {
            int c = (int) S.charAt(i) - 97;
            if (nlist[c] == -1)
                nlist[c] = i;

        }
        for (int i = 0; i < 26; i++) {
            System.out.printf("%d ", nlist[i]);
        }
    }
}
