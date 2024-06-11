import java.util.Arrays;
import java.util.List;

public class MixedSum {

    public static int sum(List<?> mixed) {
        int sum = 0;

        for (Object o : mixed) {
            sum += Integer.parseInt(o.toString());
        }

        return sum;
    }

    public static void main(String[] args) {
        System.out.printf(sum(Arrays.asList(9, 3, "7", "3")) + "");
    }
}