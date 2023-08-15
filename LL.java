import java.util.*;
public class LL{
    public static void main(String[] args) {
        LinkedList<Integer> l = new LinkedList<Integer>();
        l.add(0, 1);
        l.addFirst(2);
        l.addFirst(3);
        l.addFirst(4);
        l.addFirst(5);
        l.addFirst(6);
        l.addLast(0);
        // l.remove();
        // l.removeAll(l);
       LinkedList<Integer>  k = (LinkedList<Integer>) l.clone();
        System.out.println(k);
        System.out.println(l);
    }
}
