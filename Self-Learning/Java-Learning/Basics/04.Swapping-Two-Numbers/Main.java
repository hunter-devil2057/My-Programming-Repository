public class Main
{
    public static void main(String[] args)
    {
        int Number1;
        Number1=13;
        int Number2=31;
        System.out.println("Before Swapping:\nFirst Number: "+Number1+"\nSecond Number: "+Number2);
        int temp;
        temp=Number1;
        Number1=Number2;
        Number2=temp;
        System.out.println("After Swapping:\nFirst Number: "+Number1+"\nSecond Number: "+Number2);
    } 
}