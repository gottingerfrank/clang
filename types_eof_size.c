/* Program to show the value or size of
various symbolic constants and types in the
C Programming Language - on the local machine */

#include <stdio.h>
#include <limits.h>

int main(void){

    int my_int;
    short my_short;
    long my_long;
    long long my_llong;
    char my_char;
    float my_float;
    double my_double;
    int *my_ipointer;
    char *my_cpointer;


    printf("\n**********************************************\n");
    printf("Symbolic constant EOF:\t%6lu\n\n", EOF);

    printf("Regular Integer - int:\t%6d Bytes\n", sizeof(my_int));
    printf("Short Integer - short:\t%6d Bytes\n", sizeof(my_short));
    printf("Long Integer - long:\t%6ld Bytes\n", sizeof(my_long));
    printf("Long Long Integer - long long:\t%6lld Bytes\n", sizeof(my_llong));

    printf("Character - char:\t%6c Bytes\n", sizeof(my_char));

    printf("Float Pointer - float:\t%6f Bytes\n", sizeof(my_float));
    printf("Double Pointer - double:\t%6lf Bytes\n", sizeof(my_double));

    printf("Pointer to int - int*:\t%6p Bytes\n", sizeof(my_ipointer));
    printf("Pointer to char - char*:\t%6p Bytes\n", sizeof(my_cpointer));
    printf("\n**********************************************\n\n");

    return 0;

}