/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main(void){
	
	float mark1, mark2;
	float total, average;

  printf("Enter student First Mark :");
  scanf("%f", &mark1);
      
  printf("Enter student Second Mark :");
  scanf("%f", &mark2);

  total = mark1 + mark2;
   average = total/2;
      
  printf("Average is : %.2f\n", average);
      
	return 0; 
}
















