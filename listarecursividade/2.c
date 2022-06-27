#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculo(int dividendo, int divisor);

int main()
{
  int a, b, resto;
  printf("digite o dividendo da funcao: ");
  scanf("%i", &a);
  printf("digite o divisor da funcao: ");
  scanf("%i", &b);
  resto = calculo(a, b);

  printf("o resto e igual a: %i", resto);
  return 0;
}

int calculo(int dividendo, int divisor)
{
  int resto;
  do
  {
    resto = dividendo - divisor;
    dividendo = resto;
  } while (resto >= divisor);

  return resto;
}