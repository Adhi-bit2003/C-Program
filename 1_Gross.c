/*Ramesh's basic salary is input through the keyboard. his Dearness allowance is 40% of Basic Salary
and House rent allowance is 20% of basic salary .Write a program to calculate his gross salary*/


#include<stdio.h>
int main()
{
    float basic,da,hra,gs;
    printf("ENTER THE BASIC SALARY:");//User input
    scanf("%f",&basic);
    da=basic*0.4;// 40/100=0.4
    hra=basic*0.2;// 20/100=0.2
    gs=basic+da+hra;// Total

    printf("Dearness Allowance %.2f\n",da);
    printf("House Rent Allowance %.2f\n",hra);
    printf("Gross Salary %.2f",gs);

    return 0;
}
