public class Main
{
    public static void main(String[] args)
    {
        String name1;
        name1="Manish";
        String name2="Anush";
        System.out.println("Before Swapping:\nFirst Person: "+name1+"\nSecond Person:"+name2);
        String temp=name1;
        name1=name2;
        name2=temp;
        System.out.println("After Swapping:\nFirst Person: "+name1+"\nSecond Person: "+name2);
    }
}