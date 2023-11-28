#include <stdio.h>

int get_long(char *prompt)
{
  long n;
  printf("%s", prompt);
  scanf("%li", &n);
  return n;
}

int main(void)
{
  long a = get_long("Enter a: ");
  long b = get_long("Enter b: ");
  printf("a + b = %li\n", a + b);
}