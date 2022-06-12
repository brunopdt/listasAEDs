#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int matriz[10][10])
{
  /*7. Preencher uma matriz  de 10 x 10  posições com valores aleatórios de 15 a 50 (utilize para cada número a função rand – faça uma
função que dados os valores inicial e final devolva um número aleatório dentro deste intervalo) Em seguida imprima os índices (i,j) da
matriz e o valor correspondente, na forma de matriz.*/
  printf("\n\nQUESTAO NUMERO 7\n");
  srand(time(NULL));
  int vmin, vmax;
  printf("digite o valor minimo da matriz: "); // Como o professor explicou em sala, utilizar de variáveis para delimitar o valor minimo e máximo da matriz, em vez de números. Por base de correção do exercício, utilizar 15 e 50 (como é descrito no ex7).
  scanf("%i", &vmin);
  printf("digite o valor maximo da matriz: ");
  scanf("%i", &vmax);

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      matriz[i][j] = (rand() % (vmax - vmin + 1)) + vmin;
    }
  }

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf(" %i-%i: %i  ", i, j, matriz[i][j]);
    }
    printf("\n");
  }
}

void menorMaior(int matriz[10][10])
{
  /*8. Escreva um procedimento que receba a matriz criada no exercício acima(passagem de parâmetro), imprimir o maior e o menor elemento da matriz bem como a posição de cada um. */
  printf("\n\nQUESTAO NUMERO 8\n");
  int maior, menor, xmaior, ymaior, xmenor, ymenor;
  maior = matriz[0][0];
  menor = matriz[0][0];
  xmaior = 0;
  ymaior = 0;
  xmenor = 0;
  ymenor = 0;

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (matriz[i][j] <= menor)
      {
        menor = matriz[i][j];
        xmenor = i;
        ymenor = j;
      }
      else if (matriz[i][j] > maior)
      {
        maior = matriz[i][j];
        xmaior = i;
        ymaior = j;
      }
    }
  }

  printf("maior: %i, na posicao: linha: %i coluna: %i \nmenor: %i, na posicao: linha %i coluna %i\n", maior, xmaior, ymaior, menor, xmenor, ymenor);
}

void somaDiagonal(int matriz[10][10])
{
  /* 9.  escreva um procedimento que receba a matriz do exercício 7 e imprima a soma dos elementos da diagonal. */
  printf("\n\nQUESTAO NUMERO 9\n");
  int soma = 0;

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (i == j)
      {
        soma += matriz[i][j];
      }
    }
  }

  printf("soma da diagonal principal = %i", soma);
}

void usuario(int matriz[10][10])
{
  /* 10. A partir do exercício número 1, peça ao usuário a posição [i,j] da matriz , e em seguida exiba o valor que esta na matriz nesta posição.
FLAG -1 */
  printf("\n\nQUESTAO NUMERO 10\n");
  int i, j;
  do
  {
    printf("digite o indice i do elemento na matriz: ");
    scanf("%i", &i);
    printf("digite o indice j do elemento na matriz: ");
    scanf("%i", &j);

    while (i > 10 || j > 10 || i < -1 || j < -1)
    {
      printf("\nvalor do indice invalido, digite novamente!\n");
      printf("digite o indice i do elemento na matriz: ");
      scanf("%i", &i);
      printf("digite o indice j do elemento na matriz: ");
      scanf("%i", &j);
    }

    printf("ELEMENTO NA POSICAO INFORMADA: %i\n", matriz[i][j]);
  } while (i != -1 && j != -1);
}

void conferirMatriz(int matriz[10][10])
{
  /* 11. Escreva um procedimento que receba a matriz do exercício 7 A partir do exercício número 1, peça um número qualquer e verifique se o
número está ou não na matriz. Se estiver imprima a posição deste número e se não estiver imprima a mensagem valor não encontrado. */
  printf("\n\nQUESTAO NUMERO 11\n");
  int num, contador = 0;
  printf("digite um numero para conferir se ele esta na matriz ou nao: ");
  scanf("%i", &num);

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (matriz[i][j] == num)
      {
        printf("numero encontrado! posicao: %i, %i\n", i, j);
        contador++;
      }
    }
  }

  if (contador == 0)
  {
    printf("numero nao encontrado! :(");
  }
}

int main()
{
  int matriz[10][10];

  random(matriz); // 7

  menorMaior(matriz); // 8

  somaDiagonal(matriz); // 9

  usuario(matriz); // 10

  conferirMatriz(matriz); // 11

  return 0;
}