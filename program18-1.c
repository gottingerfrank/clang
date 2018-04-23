// Simple Program to work
// with Fractions in C

#include <stdio.h>

typedef struct {
    int numerator;
    int denominator;
} Fraction;


int main(void)
{

    Fraction myFract;

  myFract.numerator = 3;
  myFract.denominator = 7;

  printf("The Fraction is %i/%i\n", myFract.numerator, myFract.denominator);

  return 0;
}

