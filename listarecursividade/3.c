#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculo3(int x, int y);

int main()
{
  int a, b, resto;
  printf("digite o dividendo da funcao: ");
  scanf("%i", &a);
  printf("digite o divisor da funcao: ");
  scanf("%i", &b);
  resto = calculo3(a, b);
  printf("o resto e igual a: %i\n", resto);

  return 0;
}

int calculo3(int x, int y)
{
  if (x < y)
  {
    return x;
  }

  return calculo3(x - y, y);
}