#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
  // matrix A 
  int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  // declare sum variable
  int sum = 0;
  
  // iterate through the matrix
  // outer loop for row
  for (int i = 0; i < 3; i++) 
  {
    // inner loop for column
    for (int j = 0; j < 3; j++) 
    {
      // condition to find diagonal element
      if(i == j) {
       // calculate sum
       sum += matrix[i][j];
      }
    }
  }

  // display matrix
  printf("Matrix = \n");
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n"); // new line
  }

  // display sum of diagonal elements
  printf("Sum of diagonal elements = %d\n", sum);

  return 0;
}
