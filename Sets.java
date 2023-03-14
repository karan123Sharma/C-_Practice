import java.util.HashSet;
import java.util.Set;

public class Sets {
    public static void main(String[] args) {
        Set<Integer> s = new HashSet<>();
        s.add(23);
        s.add(56);
        s.add(12);
        s.add(78);
        s.add(13);
        s.add(13);
        for (var i : s) {
            System.out.println(i);
        }

    }
}
