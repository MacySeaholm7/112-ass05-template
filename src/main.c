/*
 * main.c - Sandbox for testing
 * 
 * To use the functions you implemented in code.c, you must include the header:
 *   #include "code.h"
 * 
 * This tells the compiler where to find the function prototypes.
 * Without this include, the compiler won't know about your functions!
 */

#include <stdio.h>

int main(void)
{
int arr[] = {5, 2, 8, 1, 9};
printf("Max: %d\n", find_max(arr, 5));
printf("Min: %d\n", find_min(arr, 5));
printf("Sum: %ld\n", sum_array(arr, 5));
float farr[] = {2.0f, 4.0f, 6.0f};
printf("Average: %f\n", average(farr, 3));
}