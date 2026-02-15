
/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    char testChar;
    float testFloat;

    short int testShort;
    unsigned short int testShort2;

    int testInt;
    unsigned int testInt2;

    long int testLong;
    unsigned long int testLong2;

    double testDouble;

    printf("Char size is %ld bytes\n",sizeof(testChar));
    printf("Float size is %ld bytes\n",sizeof(testFloat));
    printf("Short int size is %ld bytes\n",sizeof(testShort));
    printf("U Short Int size is %ld bytes\n",sizeof(testShort2));
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("U Int size is %ld bytes\n",sizeof(testInt2));
    printf("Long Int size is %ld bytes\n",sizeof(testLong));
    printf("U Long Int size is %ld bytes\n",sizeof(testLong2));
    printf("Double size is %ld bytes\n",sizeof(testDouble));

    return 0;
}
