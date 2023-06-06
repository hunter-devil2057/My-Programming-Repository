import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter First String: ");
        String FirstString=scanner.nextLine();        //receiving first string from the user 
        System.out.println("Enter Second String: ");
        String SecondString=scanner.nextLine();       //receiving second string from the user
        System.out.println("Before Swapping:\nFirst String: "+FirstString+"\nSecond String: "+SecondString);
        String temp;
        temp=FirstString;
        FirstString=SecondString;
        SecondString=temp;
        System.out.println("After Swapping:\nFirst String: "+FirstString+"\nSecond String: "+SecondString);
    }    
}