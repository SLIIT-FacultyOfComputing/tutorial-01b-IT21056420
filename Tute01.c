/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) 
{
    int mark1,mark2;

    printf("Enter 1st subject mark =");       
    scanf ("%d",&mark1);

    printf("Enter 2nd subject mark =");
    scanf("%d",&mark2);

    int sum;
    float average;

    sum=mark1+mark2;
    average=sum/2;
    
    printf("Average Of the two marks=%.2f\n",average);

    return 0;
}

