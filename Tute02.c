/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() 
{
  //creating variables
  int distance, amount = 0;
  
  //get the distance from the keyboard
  printf("Enter distance : ");
  scanf("%d", &distance);

  //checking the distance
  if(distance > 30)
  {
    amount = (30 * 50) + (distance - 30) * 40;//calculating the amount
  }
  else
  {
    amount = distance * 50;//calculating the amount
  }

  //print the output
  printf("\nAmount = %d\n", amount);

  return 0;
}
