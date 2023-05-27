// Using Various Escape Sequences in C Programming
#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Hello, World\n");
    // Here, \n is escape sequences which is used to break current lines/start new line. 
    printf("\aHello, World\n");
    // Here, \a is escape sequences which is used to display alert by creating sys. notification sound
    printf("Hello, \tWorld");
    //\t is used to provide horizontal tab space inside the statements inside quoted marks
    printf("\nThis is \vmy dummy sentence to \vprovide vertical \vspace.");
    // \v is an escape sequences which is used to provide vertical tabs to assign more space from the previous line.
    printf("\n\'Hi, Mate\'");
    // \'\' is used to display for single quote ''
    printf("\n\"I love you, Mom. Nothing is more important than you\"");
    // \"\" is used to display for double quote ""
    printf("\n\\Backslash...");
    // \\ is used to provide backslash
    printf("\nNull\0Character...");     //Prints only characters present beyond \0
    // \0 is used as a Null Character, mostly used to check conditions
    printf("\nDanger\b to Trust Others...");
    // \b is an escape sequences which is used to delete single character which is present in left of current cursor position (acts as backspace of keyboard to delete character).
    printf("\nThis is my \rtesting sentence for learning.");
    // \r eliminates those characters which are persent before this escape sequence n only represents right portion.
    printf("\nTo be best programmer, you must \fhave  deep knowledge of\f Data Structure and Algorithms....");
    // \f is form feed which is used to feed a blank space when the user prints the document. 
    
}