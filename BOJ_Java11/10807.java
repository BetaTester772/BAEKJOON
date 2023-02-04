import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] num = new int[N];
        for (int i = 0; i < N; i++) {
            num[i] = sc.nextInt();
        }
        int v = sc.nextInt(), m = 0;

        for (int i = 0; i < N; i++) {
            if(num[i] == v) m++;
        }
        System.out.println(m);
    }
}
