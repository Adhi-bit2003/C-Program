//(32F-32)x5/9
/*Temperature of a city in fahrenheit degree is input through the keyboard write a program to convert 
this temperature int centigrade degree*/

#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature: ");
    scanf("%f",&f);
    c=(f-32)*(5.0/9.0);
    printf("%.2f",c);
    return 0;
}