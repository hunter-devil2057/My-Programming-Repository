import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter First Number: ");
        int FirstNumber=scanner.nextInt();
        System.out.println("Enter Second Number: ");
        int SecondNumber=scanner.nextInt();
        System.out.println("Before Swapping:\nFirst Number: "+FirstNumber+"\tSecond Number: "+SecondNumber);
        int temp;
        temp=FirstNumber;
        FirstNumber=SecondNumber;
        SecondNumber=temp;
        System.out.println("After Swapping:\nFirst Number: "+FirstNumber+"\tSecond Number: "+SecondNumber);
    } 
}