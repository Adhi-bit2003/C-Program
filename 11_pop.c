/*in a town the percentage of men is 52,the percentage of total literacy is 48 if total percentage of literate
men is 35 of the total population,write a program to find the total number of illiterate men and women if the populatio
of the town is 80,000*/

#include<stdio.h>
int main()
{
    int pop,pop_men,pop_women,lit_men,lit_women,ilit_men,ilit_women;
    pop=80,000;
    pop_men=(52*pop)/100;
    pop_women=pop-pop_men;
    lit_men=(35*pop)/100;
    lit_women=pop-lit_men;
    ilit_men=pop-lit_men;
    ilit_women=pop-lit_women;

    printf("/nTotal population : %d",pop);
    printf("/nPopulation of men: %d",pop_men);
    printf("/nPopulation of women: %d",pop_women);
    printf("/npopulation of literate men: %d",lit_men);
    printf("/nPopulation of literate women:%d",lit_women);
    printf("/npopulation of iliterate men:%d",ilit_men);
    printf("/npopulation of iliterate women:%d",ilit_women);
    return 0;

}