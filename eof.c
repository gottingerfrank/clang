/* Program to show the value or size of
various symbolic constants and types in the
C Programming Language - on the local machine */

#include <stdio.h>


int my_int = 87;
short my_short = 21;
long my_long = 99999;
long long my_llong = 999999999;
char my_char = 'A';
float my_float = 0.33;
double my_double = 0.3333;
int *my_ipointer = &my_int;
char *my_cpointer = &my_char;

int main() {
    printf("Symbolic constant EOF:\t%6d\n", EOF);

    printf("Regular Integer - int:\t%6d Bytes\n", sizeof(my_int));
    printf("Short Integer - short:\t%6d Bytes\n", sizeof(my_short));
    printf("Long Integer - long:\t%6d Bytes\n", sizeof(my_long));
    printf("Long Long Integer - long long:\t%6d Bytes\n", sizeof(my_llong));
    printf("Character - char:\t%6d Bytes\n", sizeof(my_char));
    printf("Float Pointer - float:\t%6d Bytes\n", sizeof(my_float));
    printf("Double Pointer - double:\t%6d Bytes\n", sizeof(my_double));
    printf("Pointer to int - int*:\t%6d Bytes\n", sizeof(my_ipointer));
    printf("Pointer to char - char*:\t%6d Bytes\n", sizeof(my_cpointer));


    printf("int Pointer - int *:\t%6p Bytes\n", sizeof(my_ipointer));
    printf("int Pointer - int *:\t%6p Bytes\n", sizeof(my_ipointer));

    printf("------------------ Data Type Sizes: MACROS ------------------\n");
    printf("int Size [__SIZEOF_INT__]:", __SIZEOF_INT__);
    
}
