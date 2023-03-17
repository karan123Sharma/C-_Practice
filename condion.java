import java.util.Scanner;

public class condion {
    public static void main(String[] args) {
        int a;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        if (a < 40) {
            System.out.println("Fail");
        } else if (a >= 40 && a < 60) {
            System.out.println("Pass");
        } else if (a >= 60 && a < 80) {
            System.out.println("B");
        } else {
            System.out.println("A");
        }
    }
}
