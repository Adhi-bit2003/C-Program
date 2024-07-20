#include<stdio.h>
int main()
{
    float s,p,c;
    printf("\nEnter the selling price: ");
    scanf("%f",&s);
    printf("\nEnter the profit: ");
    scanf("%f",&p);
    c=(s-p)/15;
    printf("Cost of one item: %.2f",c);
    return 0;
}