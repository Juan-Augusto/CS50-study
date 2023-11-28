#include <stdio.h>

void count(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Hello, World! %d\n", i);
    }
}
int main(void)
{
    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);
    count(user_input);
}