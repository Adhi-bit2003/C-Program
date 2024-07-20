#include<stdio.h>
int main()
{
    int year;
    printf("Enter the Year: ");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("This is Leap Year");
        }
        else{
            printf("Not the Leap Year");
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("This is Leap Year");
        }
        else{
            printf("Not the leap year");
        }
    }
    return 0;
}