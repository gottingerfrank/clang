#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section
struct Race {
  int numberOfLaps;
  int currentLap;
  char *firstPlaceDriverName;
  char *firstPlaceRaceCarColor;
};

struct RaceCar {
  char *driverName;
  char *raceCarColor;
  int totalLapTime;
};
  

// Print functions section
void printIntro() {
  printf("Welcome to our main event digital race fans!\n");
  printf("I hope everybody has their snacks because we are about to begin!\n");
}


void printCountDown(time_t count) {  // STUCK HERE! TYPE OF ARG to time() ??
  printf("Racers Ready! In...\n");
  for (int i = count; i > 0; i--) {
    printf("%d\n", i);
    sleep(&count);
  }
  printf("Race!");
}

// Logic functions section

int main() {
	srand(time(0));
    printCountDown(5);
};