/*
 * Filename: moreScanf.c
 *
 * Description: Reads a floating point value from stdin, then outputs (in this order):
 *      1. The smallest integer larger than or equal to its value.
 *      2. The nearest integer to this value, with hallway values rounded away from zero.
 *      3. The largest integer smaller than or equal to this value.
 * 
 * Adds conditionals as compared to values.c to check mis-behaved input from the user and explains what went wrong.
 *
 * Author: Steven Wong
 * Date: May 27, 2022
 */

#include<stdio.h>
#include<math.h>

int main(void) {
    float value = 0;
    printf("Please, enter a floating point value: ");
    int result = scanf("%f", &value);

    if (result ==1) { 
        printf("The smallest integer larger than or equal to %.6f is %d.\n", value, (int)ceil(value));  // decimal places of ceiling
        printf("The nearest integer to %.6f is %d.\n", value, (int)round(value));  // decimal places of round
        printf("The largest integer smaller than or equal to %.6f is %d.\n", value, (int)floor(value));  // decimal places of floor
    } else if (result == 0) { 
        printf("scanf error: (%d) - No fields were assigned.\n", result);
    } else { 
        printf("\nscanf error: (%d) - EOF reached.\n", result);
    }

    return 0;
}