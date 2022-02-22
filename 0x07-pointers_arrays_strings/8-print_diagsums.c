#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @A: the matrix
  * @size: the size
  *
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
  int matrix[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
  int sum = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if(i == j) 
      {
       sum += matrix[i][j];
      }
    }
  }
  printf("Matrix = \n");
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n"); // new line
  }
  printf("Sum of diagonal elements = %d\n", sum);

  return 0;
}
