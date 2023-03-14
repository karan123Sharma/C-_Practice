import java.util.HashSet;
import java.util.Set;

public class Remove_Duplicate {
    public static void main(String[] args) {
        int arr[]={10,10,20,30,40};
        Set<Integer> s =new HashSet<>();
        for(int i=0;i<arr.length;i++){
            s.add(arr[i]);
        }
        for(var i:s){
            System.out.println(i);
        }
        
    }
}
