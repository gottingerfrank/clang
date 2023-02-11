/* Various Data Sizes on Machine ARM64 - Mach Kernel, M1 64Bit Apple Processors */

#include <stdio.h>


int main(void) {
    int myInt;
    short myShort;
    long myLong;

    myShort = __SIZEOF_SHORT__;
    myInt = __SIZEOF_INT__;
    myLong = __SIZEOF_LONG__; 
    
    printf("------------------ Data Type Sizes: MACROS ------------------\n");
    printf("\nint Size [__SIZEOF_SHORT__]: %d", myShort);
    printf("\nint Size [__SIZEOF_INT__]: %d", myInt);
    printf("\nlong int Size [__SIZEOF_LONG__]: %ld", myLong);
    printf("\nint size_t Size [__SIZEOF_SIZE_T__]: %d ", __SIZEOF_SIZE_T__);
    printf("\npointer Size [__SIZEOF_POINTER__]: %d", __SIZEOF_POINTER__);
    printf("\npointer example[&myInt]: %p", &myInt);
    printf("\npointer example II(0x)[&myInt]: %016x", &myInt);
    printf("\npointer example III[&myLong]: %p", &myLong);
    printf("\npointer example IV(0x)[&myLong]: %016x", &myLong);
    printf("\n\n--------------------------- END ---------------------------\n");

    return 0;
}

    
