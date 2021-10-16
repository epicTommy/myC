#include <stdio.h>

int main(void) {
  int mins;

  printf("Enter the time in minutes: ");
  scanf("%d", &mins);

  //calculates how many hours & minutes there is
  int hour = mins / 60;
  int min = mins % 60;

  printf("%d in hours and minutes: %d hours %d minutes \n", mins, hour, min);
  
  return 0;
}
