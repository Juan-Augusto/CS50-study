#include <stdio.h>
#include <string.h>
int get_string_length(char *s);

int main(void)
{
  char name[50];
  printf("Name: ");
  scanf("%s", name);
  int length;
  length = get_string_length(name);

  printf("Length: %d\n", length);
}

int get_string_length(char *s)
{
  int i = 0;
  while (s[i] != '\0')
  {
    i++;
  }
  return i;
}