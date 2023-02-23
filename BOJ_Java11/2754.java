import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Map<String, String> ht = new HashMap<String, String>();

        ht.put("A+", "4.3");
        ht.put("A0", "4.0");
        ht.put("A-", "3.7");
        ht.put("B+", "3.3");
        ht.put("B0", "3.0");
        ht.put("B-", "2.7");
        ht.put("C+", "2.3");
        ht.put("C0", "2.0");
        ht.put("C-", "1.7");
        ht.put("D+", "1.3");
        ht.put("D0", "1.0");
        ht.put("D-", "0.7");
        ht.put("F", "0.0");


        String S = sc.next();

        System.out.println(ht.get(S));

    }
}
