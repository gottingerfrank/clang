#include <stdio.h>

int main(void)
{
  int var1, var2;
  int max;

    printf("Please enter 2 Integers to determine max (enter 'q' to quit):\n");

    while (scanf("%d %d", &var1, &var2) == 2) {
        if (var1 > var2)
            max = var1;
        else
            max = var2;

        printf("The max of Numbers %d and %d is: %d\n", var1, var2, max);
    }

    return 0;
}