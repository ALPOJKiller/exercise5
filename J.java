import java.util.ArrayList;
import java.util.Scanner;
import java.util.regex.*;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Pattern pattern = Pattern.compile("(\\d+)");
        String s = null;
        int case_count = 0;
        try {
            while ((s = scanner.nextLine()) != null) {
                Matcher matchs = pattern.matcher(s);
                ArrayList list = new ArrayList();
                while (matchs.find())
                    list.add(matchs.group(1));
                System.out.print("Case ");
                System.out.print(++case_count);
                System.out.print(": (");
                System.out.print(list.size());
                System.out.print(')');
                for (Object ss : list) {
                    System.out.print(' ');
                    System.out.print(ss);
                }
                System.out.println();
            }
        } catch (java.util.NoSuchElementException e) {
            System.exit(0);
        }
    }
}

