/**
 * @file stats.c
 * @author Andrey Ruch
 * @brief Implementation file for data analysis functions.
 *
 * This file contains implementations of functions that perform various
 * statistical analyses on an array of unsigned char data items,
 * including calculating the maximum, minimum, mean, median, and
 * sorting the array in ascending order.
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


void main() 
{
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90 };

  /* Print the original array */
  printf("Original Array:\n");
  print_array(test, SIZE);

  /* Print statistics: minimum, maximum, mean, and median */
  printf("\nStatistics:\n");
  print_statistics(test, SIZE);

  /* Sort the array in ascending order and print */
  sort_array(test, SIZE);
  printf("\nSorted Array:\n");
  print_array(test, SIZE);
}


/* Implementation File Code */
void print_statistics(unsigned char *data, int size) 
{
  if (size > 0)
  {
    printf("Minimum: %d\n", find_minimum(data, size));
    printf("Maximum: %d\n", find_maximum(data, size));
    printf("Mean: %d\n", find_mean(data, size));
    printf("Median: %d\n", find_median(data, size));
  }
  else
  {
    printf("The size is incorrect.\nStatistics cannot be printed...");
  }
}


void print_array(unsigned char *data, int size) 
{
  for (int i = 0; i < size; i++) 
    printf("%u ", data[i]);
  printf("\n");
};

/*
 * The median is the middle value (or midpoint)
 * when a data set is ordered from least to greatest.
 * The median is the number that is in the middle of the list of numbers.
 */
unsigned char find_median(unsigned char *data, int size) 
{
  unsigned char sorted[size];

  for (int i = 0; i < size; i++)
    sorted[i] = data[i];
  sort_array(sorted, size);

  // If the size is even, 
  // return the average of the two middle elements
  if (size % 2 == 0)
    return (data[(size / 2) - 1] + data[size / 2]) / 2;
  // If the size is odd,
  // return the middle element
  else
    return sorted[size / 2];
};


unsigned char find_mean(unsigned char *data, int size)
{
  int sum = 0;
  
  for (int i = 0; i < size; i++)
    sum += data[i];

  return (unsigned char)(sum / size);
};


unsigned char find_maximum(unsigned char *data, int size)
{
  unsigned char max = data[0];

  for (int i = 0; i < size; i++)
    if (data[i] > max)
      max = data[i];
  
  return max;
};


unsigned char find_minimum(unsigned char *data, int size)
{
  unsigned char min = data[0];

  for (int i = 0; i < size; i++)
    if (data[i] < min)
      min = data[i];
  
  return min;
};


/* Selection sort implementation */
void sort_array(unsigned char *data, int size) 
{
  for (int i = 0; i < size - 1; i++) 
  {
    // Assume the current index holds the minimum element
    int min_index = i;

    // Iterate through the unsorted partion 
    // to find the index of actual minimum
    for (int j = i + 1; j < size; j++) 
    {
      if (data[min_index] > data[j]) 
        min_index = j;
    }

    // Move minimum element to its correct position
    unsigned char temp = data[i];
    data[i] = data[min_index];
    data[min_index] = temp;
  }
};