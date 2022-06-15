#include <stdio.h>
#include <string.h>

int main()
{   
    char name[10];
    int i = 0;
    
    printf("Enter your name: ");
    
    while (( name[i] = gets() ) != '\n' )
        ++i;
    
    printf("\nGood Morning %s, you have a nice day!\n", char *name);

    return 0;
}