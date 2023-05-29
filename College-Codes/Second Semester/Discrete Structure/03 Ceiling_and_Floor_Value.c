#include<stdio.h>
#include<conio.h>
#include<math.h>    //using mainly for floor() and ceil() function
int main()
{
    float val, f_val, c_val;
    /*
    val=value from the user
    f_val=floor value 
    c_val=ceiling value
    */
   printf("Enter Float Value:\n");
   scanf("%f", &val);   //reading float value from the user
   f_val=floor(val);
/*
    floor(variable_name) is a mathematical function which provides floor value of float function
    requires header file <math.h> to use 
*/
    c_val=ceil(val);
/*
    ceil(variable_name) is a mathematical function which provides ceiling value of float function
    requires header file <math.h> to use 
*/

    printf("Therefore,\n\tFloor Value=%.3f\n\tCeiling Value=%.3f", f_val, c_val);
    return 0;
}