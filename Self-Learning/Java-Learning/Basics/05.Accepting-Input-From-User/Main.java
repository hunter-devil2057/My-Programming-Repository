import java.util.Scanner;   //for using Scaner to get input from the user. 
public class Main
{
    public static void main(String[] args)
    {
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter Your First Name:");
        String FirstName=scanner.nextLine();
        // scanner.nextLine is used for receiving string values from the user. 
        System.out.println("Enter Your Last Name:");
        String LastName=scanner.nextLine();
        System.out.println("Enter Your Age:");
        int Age = scanner.nextInt();
        // scanner.nextInt() is used for receiving integer value. 
        System.out.println("Student Details:");
        System.out.println("First Name: "+FirstName);
        System.out.println("Last Name:"+LastName);
        System.out.println("Age: "+Age);
    }
}