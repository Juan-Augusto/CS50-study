#include <stdio.h>

int main(void)
{
  int n;
  int score[3];

  printf("Number of scores: ");
  scanf("%i", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Score %i: ", i);
    scanf("%i", &score[i]);
  }
  printf("Scores: %d, %d, %d\n", score[0], score[1], score[2]);
  printf("Average: %.2f\n", (score[0] + score[1] + score[2]) / (float)3);
}
