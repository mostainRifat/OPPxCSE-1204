import java.util.Scanner;

public class Lab10topic1ii {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.print("Enter the first integer: ");
        int num1 = scan.nextInt();
        
        System.out.print("Enter the second integer: ");
        int num2 = scan.nextInt();
        
        if (num1 > num2) {
            System.out.println("The bigger number is: " + num1);
        } else if (num2 > num1) {
            System.out.println("The bigger number is: " + num2);
        } else {
            System.out.println("Both numbers are equal.");
        }
        
        scan.close();
    }
}
