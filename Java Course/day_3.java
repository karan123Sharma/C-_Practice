import java.util.Scanner;

public class day_3 {
    public static int Problem1() {
    //    for(int i=1,j=1;i<=3 || j<=3;j++,i++){
    //         System.out.print("%d",);
    //         i++;
    //     }
    return 0;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        // int a = Problem1();
        // System.out.println(a);
        int num = 10;
        int a = 0;
        int b =2,c= 3,d=4;
        for (int i=0;i<num;i++){
            if(i%b == 0 || i%c == 0 || i%d ==0){
                a++;
            }
        }

        // while(t > 0){
        //     int a = sc.nextInt();
        //     int arr[] = new int[a];
        //     int min =100;
        //     for(int i=0;i<a;i++){
        //         arr[i] = sc.nextInt();
        //         if(arr[i] < min){
        //             min = arr[i];
        //         }
        //     }
        //     int ele = sc.nextInt();
        //     System.out.println(ele - min);
        // }
    }
}
