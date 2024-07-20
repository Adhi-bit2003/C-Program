/*if a four digit number is input through the keyboard write a program to obtain the the sum of first and
last digit of number*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,sum;
    printf("Enter four digit no:");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    d=b/10;
    e=b%10;
    f=d/10;
    g=d%10;
    sum=c+f;
    printf("sum of No: %d",sum);
    return 0;
}