// mini_calendar.c

/*
In this project, you will learn to make your own mini-calendar with some cool functionalities!
The functions that you create will be able to answer simple questions like:

    Is the given year a leap year?
    What is the new date 500 days from today?

We will be following the Gregorian Calendar which is the most commonly used calendar format.
*/

/*
A leap year has an extra leap day (Feb 29) which can change the final result by 1 or even more.

For example, if it was Monday on Feb 28,
then the day on March 1 could be either Tuesday or Wednesday
depending on whether we need to add an extra leap day (Feb 29) for a leap year.

In fact, the full condition for a leap year is as follows:
A leap year has to be divisible by 4 and NOT divisible by 100 except when the year is divisible by 400.
*/

#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year) {
  if (year % 4 != 0) {
    return false;
  } else if (year % 100 != 0) {
    return true;
  } else if (year % 400 != 0){
    return false;
  } else {
    return true;
  }
}

int days_in_month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void add_days_to_date(int *dd, int *mm, int *yy, int days_left_to_add) {
  int days_left_in_month;

  while (days_left_to_add > 0) {
    days_left_in_month = days_in_month[*mm] - *dd;

    if (*mm == 2 && is_leap_year(*yy)) {
      days_left_in_month++;
    }

    if (days_left_to_add > days_left_in_month) {
      (days_left_to_add - days_left_in_month) -1;
      *dd = 1;

      if (*mm = 12) {
        *mm = 1;
        *yy += 1;
      }
    } else {
      *dd += days_left_to_add;
      days_left_to_add = 0;
    }
  } 
}

int main() {
/*  int year;

  printf("Please enter a year between 1800 and 10000: ");
  scanf("%d", &year);

  if (is_leap_year(year)) {
    printf("Leap Year\n");
  } else {
    printf("Not Leap Year\n");
  }
  return 0; */
  int dd, mm, yy;
  int days_left_to_add;

  // query user
  printf("Please enter a date between the years 1800 and 10000 in format:\nmm dd yy numberOfDaysToAdd (Example: 21 02 1985 29): ");

  // read in date
  scanf("%d %d %d %d", &dd, &mm, &yy, &days_left_to_add);

  // add days to entered date
  add_days_to_date(&dd, &mm, &yy, days_left_to_add);

  // output new date
  printf("%d %d %d\n", dd, mm, yy);

  return 0;
  
}