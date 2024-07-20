#include<stdio.h>
int main()
{
    float km,m,cm,ft,i;

    printf("Enter the Kilometer: ");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    ft=cm/2.54;
    i=ft/12;
    printf("Meter: %.2f",m);
    printf("Centimeter: %.2f",cm);
    printf("Feet: %.2f",ft);
    printf("Inches: %.2f",i);

    return 0;
}
