#include <stdio.h>

int main(void)
{
  int numbers[10] = {4, 6, 8, 2, 7, 5, 0};
  for (int i = 0; i < 10; i++)
  {
    if (numbers[i] == -1)
    {

      printf("found: %i\n", numbers[i]);
      return 0;
    }
  }
  printf("not found\n");
  return 1;
}