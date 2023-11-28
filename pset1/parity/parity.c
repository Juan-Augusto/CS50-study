#include <stdio.h>

int main(void)
{
  int user_input;
  int remainder;
  printf("Enter a number: ");
  scanf("%d", &user_input);

  remainder = user_input % 2;
  if (remainder == 0)
    printf("The number is even.\n");
  else
    printf("The number is odd.\n");
}