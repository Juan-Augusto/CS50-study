#include <stdio.h>

int main(void)
{
  char *names[7] = {"bill", "charlie", "fred", "george", "ginny", "percy", "ron"};
  for (int i = 0; i < 7; i++)
  {
    if (names[i] == "ron")
    {

      printf("found: %s\n", names[i]);
      return 0;
    }
  }
  printf("not found\n");
  return 1;
}