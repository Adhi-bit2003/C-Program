/*if the marks obtained by a student in the different subject are input through the keyboard
findout the aggregate marks and percentage marks obtained by the student. assume that the maximum marks 
that can be obtained by a student in the each subject it can.*/

#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,total;
    float avg;

    printf("Enter the marks of five subject: ");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);

    total=s1+s2+s3+s4+s5;
    avg=total/5.0;

    printf("Total: %d",total);
    printf("Average: %.2f",avg);
    return 0;
}