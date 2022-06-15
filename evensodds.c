#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LENGTH 20

int main() {

  int evens[] = {2, 4, 6, 8, 10, 12};
  int odds[] = {1, 4, 5, 7, 10, 11}; // Do not modify this line.
  char myString[] = "Hello World!\n";
  int *p_myString = &myString;
  char myStr2[MAX_LENGTH]; 
  int *p_myStr2 = &myStr2;
  
  // int strcpy(char *dst, char *src);

  printf("%i\n", evens[5]); // Checkpoint 1. Fix this error.

  // Code for checkpoint 2 goes here.
  printf("%i\n", evens[2]);
  // Code for checkpoint 3 goes here.
  odds[1] = 3;
  odds[4] = 9;

  for (int i = 0; i < 6; i++) {
      printf("odds[%d]: %d\n", i, odds[i]);
  }

  for (int j = 0; j < 14; j++) {
      printf("%c", myString[j]);
  }
  printf("\n");

  strcpy(myStr2, myString); //DevSkim: ignore DS185832 until 2022-07-03 

  printf("str myStr2:\t%s", myStr2);
  printf("char myStr2:\t%c\n", myStr2);
  printf("p* myStr2:\t%p\n", myStr2 );
  printf("p* p_myStr2:\t%p\n", p_myStr2);
  printf("p* p_myStr2(-1):\t%p\n", p_myStr2);
  printf("int hex myStr2:\t%016x\n\n", myStr2 );

  printf("char myString:\t%c\n", myString );
  printf("p* myString:\t%p\n", myString );
  printf("p* p_myString:\t%p\n", p_myString);
  printf("sizeof: p_myString: %d\n", sizeof p_myString);

  return 0;
}