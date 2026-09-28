// Macy Seaholm
// CSCI 112 Fall 2026
// Programming Assignment #5
// I declare that I am the author of this work, take full responsibility for it, and have disclosed any material external assistance
// code.c — student implementation only

/*
 * To use the function prototypes from code.h, you must include the header:
 *   #include "code.h"
 * 
 * You also need stdio.h for any input/output operations.
 *   #include <stdio.h>
 * 
 * Write your function implementations below each TODO.
 */



/*
 * ============================================================================
 * FUNCTION: find_max
 * ============================================================================
 * 
 * Find the maximum value in an array.
 * Start with the first element and compare with the rest.
 */
int find_max(int arr[], int n)
{
   int max = arr[0];

   for (int i = 1; i <= n; i++)
    {
        if (arr[i] < max)
        {
            max == arr[i];
        }
    }
   
return max;
}

/*
 * ============================================================================
 * FUNCTION: find_min
 * ============================================================================
 * 
 * Find the minimum value in an array.
 * Start with the first element and compare with the rest.
 */
int find_min(int arr[], int n)
{
    int min = arr[0];

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < min)
        {
            min == arr[i];
        }
    }
return min;
}

/*
 * ============================================================================
 * FUNCTION: sum_array
 * ============================================================================
 * 
 * Sum all elements in the array.
 * Use a running total and add each element.
 */
long sum_array(int arr[], int n)
{

}

/*
 * ============================================================================
 * FUNCTION: average
 * ============================================================================
 * 
 * Calculate the average of a float array.
 * Sum all elements and divide by the count.
 */
double average(float arr[], int n)
{
    // TODO: Your implementation here
}

/*
 * ============================================================================
 * FUNCTION: linear_search
 * ============================================================================
 * 
 * Find the INDEX (position) of a target value in an array.
 * 
 * Why WHILE loop? Because we don't know how many elements we'll check
 * before finding the target (or reaching the end). It could be the first
 * element, or the last element, or not there at all!
 * 
 * Search for a target value in the array.
 * Return the index if found, -1 if not found.
 * Use while loop because you don't know when to stop.
 */
int linear_search(int arr[], int n, int target)
{
    // TODO: Your implementation here
}


/*
 * ============================================================================
 * FUNCTION: heron
 * ============================================================================
 * 
 * Calculate the square root of a number using Heron's method.
 * 
 * Start with an initial guess (x/2), then repeatedly improve it:
 *   next_guess = (guess + x/guess) / 2.0
 * 
 * Stop when the difference between consecutive guesses is smaller than epsilon.
 * Remember: no abs() or fabs() - use: if (x < 0) x = -x;
 */
double heron(double x, double epsilon)
{
    // TODO: Your implementation here
}