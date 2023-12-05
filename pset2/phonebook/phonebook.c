#include <stdio.h>
#include <string.h>

typedef struct
{
  char *name;
  char *number;
} person;

int main(void)
{
  person people[2];
  people[0].name = "David";
  people[0].number = "617-555-0100";

  people[1].name = "Emma";
  people[1].number = "617-555-0101";

  for (int i = 0; i < 2; i++)
  {
    if (strcmp(people[i].name, "David") == 0)
    {
      printf("%s\n", people[i].number);
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}