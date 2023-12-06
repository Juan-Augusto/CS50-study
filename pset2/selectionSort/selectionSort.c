#include <stdio.h>

int main(void)
{
  int numbers[10] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 10};

  for (int i = 0; i < 10; i++)
  {
    int currentNumber = numbers[i];
    int nextNumber = numbers[i + 1];
    int smallestNumber;

    if (currentNumber > nextNumber)
    {
      smallestNumber = nextNumber;
      numbers[i] = smallestNumber;
      numbers[i + 1] = currentNumber;
    }
    else
    {
      smallestNumber = currentNumber;
    }

    printf("%i\n", numbers[i]);
  }
}