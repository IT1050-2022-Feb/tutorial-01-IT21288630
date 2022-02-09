/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  //creating variables
  int mark1, mark2;
  float avg = 0;
  
  printf("Enter mark1 : ");
  scanf("%d", &mark1);
  
  printf("Enter mark2 : ");
  scanf("%d", &mark2);

  avg = (mark1 + mark2) / 2;

  printf("\nAverage = %.2f\n", avg);

  return 0;
}

