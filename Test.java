import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Test {
	public static void main(String[] args) {
		List<Integer>nm = new ArrayList<>();
        Scanner Sc = new Scanner(System.in);
        int num = Sc.nextInt();
        int num2 = Sc.nextInt();
        int num3 = Sc.nextInt();
        nm.add(num);
        nm.add(num2);
        nm.add(num3);
        Collections.reverse(nm);
        for(var i:nm){
            System.out.println(i);
        }


	}
}           