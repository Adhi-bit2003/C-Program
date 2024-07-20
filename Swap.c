/*Two numbers are input through the keyboard into two location c and d write a program to interchange the contents of c and d*/

#include<stdio.h>
int main()
{
    int c,d,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&c,&d);
    printf("Before swap: %d %d\n",c,d);
    b=c;
    c=d;
    d=b;
    printf("After swap: %d %d",c,d);
    return 0;
}