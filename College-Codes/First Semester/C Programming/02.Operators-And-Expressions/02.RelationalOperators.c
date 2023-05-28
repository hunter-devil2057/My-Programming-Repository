#include<stdio.h>
#include<conio.h>

int main()
{
    int a=5, b=6;
    printf("The datas we have are:\n");
    printf("\ta = %d \t b = %d", a, b);
    printf("\nLess Than:\n\ta < b = %d and b < a = %d", a<b, b<a);
    printf("\nGreater Than:\n\ta > b = %d and b > a = %d", a>b, b>a);
    printf("\nLess Than or Equal to:\n\ta <= b = %d and b <= a = %d", a<=b, b<=a);
    printf("\nGreater Than or Equal to:\n\ta >= b = %d and b >= a = %d", a>=b, b>=a);
    int c=5, d=6;
    printf("\nIf c=%d and d=%d", c, d);
    printf("\nEqual To:\n\ta == b => %d \t b == a => %d \n\tc == a => %d \t d == b => %d ", a==b, b==a, c==a, d==b);
    printf("\nEqual To:\n\ta != b => %d \t b != a => %d \n\tc != a => %d \t d != b => %d ", a!=b, b!=a, c!=a, d!=b);
    printf("\nNote:\n\tTRUE Condition represents 1 \n\tFALSE Condition represents 0");
    getch();
    return 0;
}

/*
                    Types of Relational Operators:
                    - Less Than (<): a<b
                    - Greater Than (>): a>b
                    - Less Than or Equal to (<=): a<=b
                    - Greater Than or Equal to (>=): a>=b
                    - Equal to(==): a==b
                    - Not Equal to (!=): a!=b
*/