/*if a 5 digit number is input through the keyboard write a program to reverse the  number*/

#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,h,i,rev;
    printf("Enter the number: \n");
    scanf("%d",&a);
    b=a/10;//1234
    c=a%10;//5
    d=b/10;//123
    e=b%10;//4
    f=d/10;//12
    g=d%10;//3
    h=f/10;//1
    i=f%10;//2
    rev=(c*10000)+(e*1000)+(g*100)+(i*10)+h;
    printf("Reverse of the no %d is:%d",a,rev);
    return 0;
}