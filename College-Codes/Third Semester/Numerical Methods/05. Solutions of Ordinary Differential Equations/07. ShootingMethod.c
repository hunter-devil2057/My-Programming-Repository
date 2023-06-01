#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f1(x, y, z) z
#define f2(x, y, z) 6*x

int main()
{
    float xa, xb, ya, yb, x0, y0, z0, x, y, z, xp, h, sol, ny, nz, error, E, g[3], v[3], gs;
    int i;
    printf("Enter Boundary Conditions:\n");
    scanf("%f%f%f%f", &xa, &ya, &xb, &yb);
    printf("Enter the required value of x:\n");
    scanf("%f", &xp);
    printf("Enter Step Size:\n");
    scanf("%f", &h);
    printf("Enter Accuracy Limit:\n");
    scanf("%f", &E);
    x=xa;
    y=ya;
    g[1]=z=(yb-ya)/(xb=xa);
    printf("g=%f\n", g[1]);
    while(x<xb)
    {
        ny=y+(f1(x, y, z)*h);
        nz=z+(f2(x, y, z)*h);
        x=x+h;
        y=ny;
        z=nz;
    }

}