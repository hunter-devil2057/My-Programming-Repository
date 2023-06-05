public class Main
{
    public static void main(String[] args)
    {
        // Creating a variable
        // dataType variableName;       //declaring a variable of datatype
        int i1;      //declaration of variable
        // Used for short integer value numbers. 
        i1=123;      //assigning the value of variable x
        int i2=456;      //initializing the value of x(declaration + assignment)
        System.out.println("The Default Integer Values are: \ni1: "+i1+"\ti2: "+i2);      //the use of +, here is to concatenate(combine/attach) two or more strings.

        long l1;    //declaration of variable
        // long used for long integer value numbers. 
        l1=123456789101123L;        //assigning the value of variable x1
        //after using long keyword, L should be used at the ending of the number/data
        long l2=456123456789L;  //initializing the value of x (declaration +  assignment of value)
        System.out.println("The Default Long Integer Values are: \nl1: "+l1+"\tl2: "+l2);

        byte b1=-128, b2=127;     //accepts value ranging from: -128 to 127 (Byte is not mostly used)
        System.out.println("The Default Byte Value is:\nb1: "+b1+"\tb2: "+b2);

        short s1, s2;    //declaration of variables
        // short stores integer values ranging from -32,768 to 32,767
        s1=-32768;
        s2=32767;
        System.out.println("The Default Short Values are:\ns1: "+s1+"\ts2: "+s2);
        // mostly long and int are used rather than byte and short (for learning as a beginner)
        // int, long, byte and short are used to store integer(+ve and -ve values, but not fractional(decimal) values)

        float f1, f2;
        // float accepts only decimal digits upto 7 digits
        // if digits exceeds more than 7 digits than it displays round-off'ed number.
        f1=3.14152468f;      //here, f is required at ending to indicate float (decimal) values
        f2=1.23456999f;         //here, f is required at ending to indicate float (decimal) values
        System.out.println("The Default Float Values are:\n f1: "+f1+"\tf2: "+f2);

        double d1;
        // double accepts fractional digits upto 15 digits
        // if digits exceeds more than 15 digits than it displays round-off'ed number.
        d1=3.1415161718192021;
        double d2=1.234567891011199988887689;
        System.out.println("The Default Double Values are:\n d1: "+d1+"\td2: "+d2);

        boolean B1;
        // boolean keyword only holds either true or false 
        // does not accepts other character instead of true or false
        // used to check condition, flow of signal, acceptivity, etc.
        B1=true;
        boolean B2=false;
        System.out.println("The Default Boolean Values are:\n B1: "+B1+"\tB2: "+B2);

        char symbol1;
        symbol1='c';
        char Symbol2='s';
        System.out.println("The Default Character Values are:\nsymbol1: "+symbol1+"\tsymbol2: "+Symbol2);

        String query1;
        query1="Isn't Java Programming Fun?";
        String query2="Yeah, it excites me too......";
        System.out.println("The Default String Values are:\nComputer: "+query1+"\nUser: "+query2);
    }
}
