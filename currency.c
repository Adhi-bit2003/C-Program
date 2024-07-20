#include<stdio.h>
int main()
{
    int amt;
    printf("Enter the amount: ");
    scanf("%d",&amt);
    printf("\nNumber of 100rs:%d",(amt/100));
    printf("\nNumber of 50rs:%d",((amt%100)/50));
    printf("\nNumber of 10rs:%d",((amt%100)%50)/10);
    printf("\nRemaining amount:%d",((amt%100)%50)%10);
    return 0;
}