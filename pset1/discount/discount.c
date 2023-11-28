#include <stdio.h>

float get_float(void), discount(float regular_price, int discount_percentage);
int get_int(void);

int main(void)
{
  float regular = get_float();
  int percentage_off = get_int();
  float sale_price = discount(regular, percentage_off);
  printf("The sale price is %.2f.\n", sale_price);
}

float get_float(void)
{
  float n;
  printf("Enter the price: ");
  scanf("%f", &n);
  return n;
}

int get_int(void)
{
  int n;
  printf("Enter the discount percentage: ");
  scanf("%d", &n);
  return n;
}

float discount(float regular_price, int discount_percentage)
{
  float sale_price;
  sale_price = regular_price * (1 - discount_percentage / 100.0);
  return sale_price;
}
