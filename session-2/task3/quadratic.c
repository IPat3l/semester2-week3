
/*
 * Compute the roots of quadratic equation.
 * We will assume that 2 real roots exist at this point.
 * The equation is specified with 3 real constants a,b,c
 *    a.x^2 + b.x + c = 0
 */

#include <stdio.h>
#include <math.h>

int main( void ) {

    float a = 2;
    float b = 5;
    float c = -3;
    float root1, root2;

    /*
     * Implement the formula for the 2 roots of a quadratic.
     * You can define additional variable for intermediate results to make the code simpler.
     * Print out the final results for the 2 roots as float values.
     */
    float determinent = sqrt(b*b - 4*a*c);
    root1 = (-b+determinent)/(2*a);
    root2 = (-b-determinent)/(2*a);

    float Root1 = (float)root1;
    float Root2 = (float)root2;

    printf("First root is %f\n", root1);
    printf("Second root is %f\n", root2);

    return 0;
}
