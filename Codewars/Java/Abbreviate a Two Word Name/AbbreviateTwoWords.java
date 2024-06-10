public class AbbreviateTwoWords {
    public static String abbrevName(String name) {
        String[] res = name.split(" ");
        return String.format("%s.%s", res[0].toUpperCase().charAt(0), res[1].toUpperCase().charAt(0));
    }

    public static void main(String[] args) {
        System.out.printf( abbrevName("John Doe"));
    }
}