#include <stdio.h>

int get_name(void)
{
  char s[100];
  printf("What is your name? ");
  scanf("%s", s);
  printf("Hello: %s\n", s);
  return 0;
}

int main(void)
{
  get_name();

  return 0;
}
