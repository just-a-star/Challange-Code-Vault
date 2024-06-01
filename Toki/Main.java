import java.util.Scanner;
import java.util.Stack;

public class Main {

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {

            // Input
            int n = sc.nextInt();
            int m = sc.nextInt();
            sc.nextLine();
            String T = sc.nextLine();
            String D = sc.nextLine();

            Stack<Character> stack = new Stack<>();

            // Push
            for (char ch : T.toCharArray()) {
                stack.push(ch);
            }
            // Process
            for (char ch : D.toCharArray()) {
                if (!stack.isEmpty() && stack.peek() == ch) {

                    while (!stack.isEmpty() && stack.peek() == ch) {
                        stack.pop();
                    }
                } else {
                    if (!stack.isEmpty()) {
                        stack.push(ch);
                    }
                }
            }
            // Output
            if (stack.isEmpty()) {
                System.out.println("MENANG");
            } else {
                System.out.println("KALAH");
            }

        }
    }
}
