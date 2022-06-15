/* Program to show the value or size of
various symbolic constants and types in the
C Programming Language - on the local machine */

#include stdio.h


int my_int
short my_short
long my_long
long long my_llong
char my_char
float my_float
double my_double
int *my_ipointer
char *my_cpointer

int main() {
    printf("Symbolic constant EOF:\t%6d\n", EOF);

    printf("Regular Integer - int:\t%6d Bytes\n", sizeof(my_int));
    printf("Short Integer - short:\t%6d Bytes\n", sizeof(my_short));
    printf("Long Integer - long:\t%6d Bytes\n", sizeof(my_long));
    printf("Long Long Integer - long long:\t%6d Bytes\n", sizeof(my_llong));
    printf("Character - char:\t%6d Bytes\n", sizeof(my_char));
    printf("Float Pointer - float:\t%6d Bytes\n", sizeof(my_float));
    printf("Double Pointer - double:\t%6d Bytes\n", sizeof(my_double));
    printf("Pointer to int - int*:\t6d Bytes\n", sizeof(my_ipointer))
    printf("Pointer to char - char*:\t6d Bytes\n", sizeof(my_cpointer))


    printf("int Pointer - int *:\t%6p Bytes\n", sizeof(my_ipointer));
    printf("int Pointer - int *:\t%6p Bytes\n", sizeof(my_ipointer));

}
