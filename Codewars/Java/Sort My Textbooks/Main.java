import java.util.*;

class sorter {

    public static List<String> sort(List<String> textbooks) {
        Collections.sort(textbooks, String.CASE_INSENSITIVE_ORDER);
        return textbooks;
    }

    public static void main(String[] args) {
        sort( new ArrayList<String>(Arrays.asList("Algebra", "english", "Geometry", "History")));
    }
}