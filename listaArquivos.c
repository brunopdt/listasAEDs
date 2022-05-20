#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int exA(), exB(), exC(), exD();
char quest;

int main()
{
  printf("digite a letra da questao desejada (a, b, c ou d): ");
  scanf("%c", &quest);
  fflush(stdin);

  if (quest >= 'A' && quest <= 'Z')
  {
    quest += 32;
  }

  switch (quest)
  {
  case 'a':
    exA();
    break;
  case 'b':
    exB();
    break;
  case 'c':
    exC();
    break;
  case 'd':
    exD();
    break;

  default:
    printf("questao invalida!");
    break;
  }
}

//-----------------------------------------------------------------------------------------------
int exA() // gravar em um arquivo os 64 primeiros valores da série: 1 1 2 3 5 8 13 21 34 . . .
{
  FILE *fibonacci;
  double a = 1, b = 1;

  if ((fibonacci = fopen("fibonacci.txt", "w")) == NULL)
  {
    printf("erro de abertura! \n");
  }
  else
  {
    for (int i = 0; i < 64; i++)
    {
      if (i % 2 == 0)
      {
        fprintf(fibonacci, "%.0lf\n", a);
        a += b;
      }
      else
      {
        fprintf(fibonacci, "%.0lf\n", b);
        b += a;
      }
    }
    fclose(fibonacci);
  }
  system("pause");
}

//-----------------------------------------------------------------------------------------------
int exB() // ler o arquivo letra a e armazenar os valores pares em um arquivo e os impares em outro arquivo
{
  FILE *fibonacci;
  FILE *arquivoImpar;
  FILE *arquivoPar;

  double aux, par[35], impar[35];

  if ((fibonacci = fopen("fibonacci.txt", "r")) == NULL)
  {
    printf("erro de abertura! \n");
  }
  else
  {
    if ((arquivoImpar = fopen("arquivoImpar.txt", "w")) == NULL)
    {
      printf("erro de abertura! \n");
    }
    else
    {
      if ((arquivoPar = fopen("arquivoPar.txt", "w")) == NULL)
      {
        printf("erro de abertura! \n");
      }
      else
      {
        fscanf(fibonacci, "%lf", &aux);

        while (!feof(fibonacci))
        {
          if (fmod(aux, 2) == 0)
          {
            fprintf(arquivoPar, "%.0lf\n", aux);
          }
          else
          {
            fprintf(arquivoImpar, "%.0lf\n", aux);
          }
          fscanf(fibonacci, "%lf", &aux);
        }
      }
    }
  }
  fclose(fibonacci);
  fclose(arquivoPar);
  fclose(arquivoImpar);

  system("pause");
}

//-----------------------------------------------------------------------------------------------
int exC() // ler o arquivo letra a e armazenar apenas os primos em um arquivo
{
  FILE *fibonacci;
  FILE *arquivoPrimo;

  double aux, par[35], impar[35];
  if ((fibonacci = fopen("fibonacci.txt", "r")) == NULL)
  {
    printf("erro de abertura! \n");
  }
  else
  {
    if ((arquivoPrimo = fopen("arquivoPrimo.txt", "w")) == NULL)
    {
      printf("erro de abertura! \n");
    }
    else
    {
      fscanf(fibonacci, "%lf", &aux);

      while (!feof(fibonacci))
      {
        int contador = 0;
        for (int i = 2; i < aux / 2; i++)
        {
          if (fmod(aux, i) == 0)
          {
            contador++;
            break;
          }
        }

        if (contador == 0)
        {
          fprintf(arquivoPrimo, "%.0lf\n", aux);
        }

        fscanf(fibonacci, "%lf", &aux);
      }
    }
  }

  fclose(fibonacci);
  fclose(arquivoPrimo);

  system("pause");
}

//-----------------------------------------------------------------------------------------------
int exD() /* leia um conjunto de valores (flag -1) e verifique para cada valor se ele se encontra ou não no arquivo
gravado na letra a. Caso não exista deverá mostrar o valor anterior e o posterior a esse valor. Exemplo:
caso seja lido o valor 8 – deverá ser mostrada a informação o valor 8 está no arquivo na posição 6, caso o
valor lido seja o 17 – deverá ser mostrada a informação o valor 17 não está no arquivo, valores mais
próximos: 13 e 21. */
{
  {
    FILE *fibonacci;
    double valor = 0, vetor[50], anterior, scan1, scan2;
    int cont = 1, i = 0, pos1, pos2;

    if ((fibonacci = fopen("fibonacci.txt", "r")) == NULL)
    {
      printf("erro de abertura! \n");
    }
    else
    {
      while (valor != -1)
      {
        printf("digite um valor(-1 para parar): ");
        scanf("%lf", &valor);

        vetor[i] = valor;
        vetor[i + 1] = '\0';
        i++;
      }

      for (i = 0; vetor[i] != '\0'; i++)
      {
        fibonacci = fopen("fibonacci.txt", "r");
        anterior = 0;
        pos1 = 1;
        pos2 = 2;

        while (!feof(fibonacci))
        {

          fscanf(fibonacci, "%lf", &scan1);
          fscanf(fibonacci, "%lf", &scan2);

          if (vetor[i] == scan1 && vetor[i == scan2])
          {
            printf("\n%.0f esta no arquivo de fibonacci! posicao: %i e %i\n", vetor[i], pos1, pos1 + 1);
            break;
          }

          if (vetor[i] == scan1)
          {
            printf("\n%.0f esta no arquivo de fibonacci! posicao: %i\n", vetor[i], pos1);
            break;
          }

          if (vetor[i] == scan2)
          {
            printf("\n%.0f esta no arquivo de fibonacci! posicao: %i\n", vetor[i], pos2);
            break;
          }

          if (vetor[i] > scan1 && vetor[i] < scan2)
          {
            printf("\n%.0f nao esta no arquivo de fibonacci! antecessor: %.0f e sucessor: %.0f\n", vetor[i], scan1, scan2);
            break;
          }

          if (vetor[i] > anterior && vetor[i] < scan1)
          {
            printf("\n%.0f nao esta no arquivo de fibonacci! antecessor: %.0f e sucessor: %.0f\n", vetor[i], anterior, scan1);
            break;
          }

          pos1 = pos2 + 1;
          pos2 += 2;
          anterior = scan2;
        }
        fclose(fibonacci);
      }
    }

    system("pause");
    return 0;
  } /* entrada
  TESTE1: 80, 55, -1
  TESTE2: 1, -1
  TESTE3: 55, 80, -1


  saida
  TESTE1:
  80 nao esta no arquivo de fibonacci! antecessor: 55 e sucessor: 89
  55 esta no arquivo de fibonacci! posicao: 10

  TESTE2:
  1 esta no arquivo de fibonacci! posicao: 1 e 2

  TESTE3:
  55 esta no arquivo de fibonacci! posicao: 10
  80 nao esta no arquivo de fibonacci! antecessor: 55 e sucessor: 89

  */
}