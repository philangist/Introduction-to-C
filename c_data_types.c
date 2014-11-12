#include <stdio.h>
#include <limits.h> /* integer specifications */
#include <float.h> /* floating-point specifications */


/* Data Types
 * char - 8 bits (1 byte)
 * int - natural word size for a machine or OS (16, 32, 64 bits)
 * short int - 16 bits
 * long int - 32 bits
 * float - 32 bits
 * double - 64 bits
 * long double - 128 bits
 *
 * short int <= int <= long int
 * float <= double <= long double*/

/* Look at range limits of certain types */
int main(void){
    printf("Int range: \t%d\t%d\n", INT_MIN, INT_MAX);
    printf("Long range: \t%ld\t%ld\n", LONG_MIN, LONG_MAX);
    printf("Float range: \t%e\t%e\n", FLT_MIN, FLT_MAX);
    printf("Double range: \t%e\t%e\n", DBL_MIN, DBL_MAX);
    printf("Long double range: \t%e\t%e\n", LDBL_MIN, LDBL_MAX);
    printf("Float-Double range: \t%e\t%e\n", FLT_EPSILON, DBL_EPSILON);
    printf("void\tchar\tshort\tint\tlong\tfloat\tdouble\n");
    printf("%3d\t%3d\t%3d\t%3d\t%3d\t%3d\t%3d\n",
           sizeof(void), sizeof(char), sizeof(short), sizeof(int),
           sizeof(long), sizeof(float), sizeof(double));
}
