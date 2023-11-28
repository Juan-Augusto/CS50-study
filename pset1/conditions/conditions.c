#include <stdio.h>

int main(void)
{
  int points;
  const int baseline = 2;
  printf("Enter points: ");
  scanf("%i", &points);

  if (points < baseline)
  {
    printf("You lose!\n");
  }
  else if (points > baseline)
  {
    printf("You won!\n");
  }
  else
  {
    printf("You tied!\n");
  }
}