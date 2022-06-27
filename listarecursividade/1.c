#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int a, b, resto;
  printf("digite o dividendo da funcao: ");
  scanf("%i", &a);
  printf("digite o divisor da funcao: ");
  scanf("%i", &b);
  do
  {
    resto = a - b;
    a = resto;
  } while (resto >= b);

  printf("o resto e igual a:  %i", resto);
  return 0;
}