
// import java.lang.FdLibm.Pow;
import java.util.*;

class day_1 {
    public static Boolean Neon_Number(int neon) {
        int num = neon * neon;
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num = num / 10;
        }
        if (sum == neon) {
            return true;
        }
        return false;
    }

    public static void Series() {
        for (int i = 1; i <= 10; i++) {
            System.out.print(i * 2 + " " + i * 4 + " ");
        }
    }

    public static void Pos_negative(int pos_neg) {
        if (pos_neg < 0) {
            System.out.println("Negative");
        } else {
            System.out.println("Positive");
        }
    }

    public static void Perfect_Number() {
        for (int k = 1; k <= 8128; k++) {
            int sum = 0;
            for (int i = 1; i < k; i++) {
                if (k % i == 0) {
                    sum += i;
                }
            }
            if (sum == k) {
                System.out.println(sum);
            }
        }
    }

    public static void Palindrome(String str) {
        String str2 = "";
        for (int i = str.length() - 1; i >= 0; i--) {
            str2 += str.charAt(i);
        }
        System.out.println(str2 + " " + str);
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) != str2.charAt(i)) {
                System.out.println("Not  a Palindrome");
                break;
            }
        }
    }

    public static Boolean Armstrong(int n, int number) {
        int sum = 0;
        int num = number;
        while (number > 0) {
            sum += (StrictMath.pow(number % 10, n));
            number = number / 10;
        }
        System.out.println(sum);
        if (sum == num) {
            return true;
        } else {
            return false;
        }
    }

    public static void Prime() {
        for (int i = 2; i < 100; i++) {
            if (i == 2 || i == 3 || i == 5 || i == 7) {
                System.out.print(i + " ");
            } else if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0) {
                System.out.print(i + " ");
            }
        }
    }

    public static void Pattern1(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(" * ");
            }
            System.out.println();
        }
    }

    public static void Pattern2(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == j || (i + j) == n - 1) {
                    System.out.print(" * ");
                } else {
                    System.out.print("   ");
                }

            }
            System.out.println();
        }
    }

    public static void Pattern3(int n) {
        for (int i = 0; i <= n; i++) {
            for (int j = 5; j >= i; j--) {
                System.out.print(" " + j + " ");
            }
            System.out.println();
        }
    }

    public static void Pattern4(int n) {
        int num = n;
        for (int i = n; i >= 1; i--) {
            for (int j = i; j >= 1; j--) {
                System.out.print(" " + j + " ");
            }
            System.out.println();
        }
    }

    public static void Pattern5(int n) {
        char num = 'A';
        for (int i = 1; i <= n; i++) {
            for (int j = i; j >= 1; j--) {
                System.out.print(" " + num + " ");
            }
            num++;
            System.out.println();
        }
    }

    private static int Problem1(int a, int b) {
        int count = 0;
        for (int i = 1; i <= a; i++) {
            if (i % b == 0) {
                count++;
            }
        }
        return count;
    }

    private static int Problem2(int a) {
        int count = 0;
        for (int i = 0; i < a; i++) {
                if ( i % 5 == 0 ) {
                    count++;
                }
        }
        return count;
    }
    public static int Problem3(int a) {
        Boolean flag = true;
        int a1 = 0,b =0;
        for(int i=1;i<=a;i++){
            a1+=i;
            b = i*2;
            if(a1==a){
                System.out.println("Oswald");
            }
            else if(b==a){
                System.out.println("Henry");
            }
        }
        return a;
    }
    public static void Problem4(int a) {
        for(int i=0;i<20;i+=2){
            int x = i;
            int y = i+1;
            int temp = x;
            x = y;
            y = temp;
        }
    }
    public static void Problem5(int a) {
        int sum = 0; 
        int i = 10;
        while(a>0){
            i--;
            sum = sum + ((a%10)*i);
            a= a/10;
        }
        if(sum%11==0){
            System.out.println("VALID");
        }
        else{
            System.out.println("Invalid");
        }
        // System.out.println("Hello");
    }
    public static void Problem6(int a) {
        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // int neon = sc.nextInt();
        // Boolean Neon_ans = Neon_Number(neon);
        // System.out.println(Neon_ans);
        // System.out.print("---------------------------\n");
        // Series();
        // System.out.println();
        // System.out.println("---------------------------\n");
        // System.out.print("Enter the Number to check pos or neg : ");
        // int pos_neg = sc.nextInt();
        // Pos_negative(pos_neg);
        // System.out.print("---------------------------\n");
        // System.out.print("Enter the value of n : ");
        // int n = sc.nextInt();
        // System.out.print("Enter the Number : ");
        // int number = sc.nextInt();
        // Boolean Armstrong = Armstrong(n, number);
        // System.out.println(Armstrong);
        // Perfect_Number();
        // String str = sc.nextLine();
        // Palindrome(str);
        // Prime();
        // int nu = sc.nextInt();
        // Pattern5(nu);
        // int a = sc.nextInt();
        // int b = sc.nextInt();
        // int ans = Problem1(a,b);
        int a = sc.nextInt();
        Problem5(a);
        sc.close();

    }
}