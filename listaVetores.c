#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

float *leVetor(int);
void imprimeVetor(float *, int, char *); // variaveis globais da questao 6

//-----------------------------------------------------------------------------------------------

void ex1() /*1 - Elaborar um programa que leia um vetor A com 15 elementos inteiros. Construir um vetor B do mesmo tipo, em
 que cada elemento de B deva ser o resultado do somatório (de 1 ate o valor  correspondente de cada elemento da
 matriz A). Apresentar A e B. */
{
  int A[15], B[15];

  for (int i = 0; i < 15; i++)
  {
    printf("digite um valor inteiro: ");
    scanf("%i", &A[i]);
  }

  printf("\nVETOR A");
  for (int i = 0; i < 15; i++) // imprimir o A
  {
    printf("\n%i", A[i]);
  }

  for (int i = 0; i < 15; i++)
  {
    B[i] = 0;
    for (int j = 0; j <= A[i]; j++)
    {
      B[i] += j;
    }
  }

  printf("\n\nVETOR B");
  for (int i = 0; i < 15; i++) // imprimir o B
  {
    printf("\n%i", B[i]);
  }
}

//-----------------------------------------------------------------------------------------------

void ex2() /* 2 - Construir um programa que leia dois vetores A e B com 10 elementos quaisquer inteiros. Construir um vetor C,
sendo este o resultado da união dos elementos de A e B – sem repetição. Apresentar C. */
{
  int A[10], B[10], C[20];
  for (int i = 0; i < 20; i++)
  {
    C[i] = 0;
  }
  for (int i = 0; i < 10; i++)
  {
    printf("digite um valor PARA O VETOR A: ");
    scanf("%i", &A[i]);
    int bool = 0;
    for (int j = 0; j < 10; j++)
    {
      if (A[i] == A[j] && j != i)
        bool = 1;
    }

    for (int l = 0; l < 20; l++)
    {
      if (C[l] == 0 && bool == 0)
      {
        C[l] = A[i];
        break;
      }
    }
  }

  printf("\n");

  for (int i = 0; i < 10; i++)
  {
    printf("digite um valor PARA O VETOR B: ");
    scanf("%i", &B[i]);
  }

  for (int i = 10; i < 20; i++)
  {
    C[i] = 0;
  }

  for (int i = 0; i < 10; i++)
  {
    int aux = 0;
    for (int k = 0; k < 10; k++)
    {
      if (B[i] == A[k])
      {
        aux = 1;
        break;
      }
    }
    if (aux == 0)
    {
      for (int l = 0; l < 20; l++)
      {
        if (C[l] == 0)
        {
          C[l] = B[i];
          break;
        }
      }
    }
  }
  printf("\n\nterceiro vetor: ");
  for (int i = 0; C[i] != 0 && i < 20; i++)
  {
    printf("%i ", C[i]);
  }
}

//-----------------------------------------------------------------------------------------------

void ex3() /* 3 - Elaborar um programa que preencha com 20 valores aleatórios  do tipo real em um vetor A, em seguida crie um
procedimento que inverta os elementos armazenados. Ou seja, o primeiro elemento de A passará a ser o ultimo, o
segundo elemento passará a ser o penúltimo e assim por diante. Apresentar A. */
{
  int auxiliar;
  float A[20];
  srand(time(NULL));

  for (int i = 0; i < 20; i++)
  {
    A[i] = rand() / 100.0;
  }

  printf("\nVETOR NORMAL:");
  for (int i = 0; i < 20; i++)
  {
    printf("\n%i = %i ", i, A[i]);
  }

  for (int i = 0; i < 20 / 2; i++)
  {
    auxiliar = A[i];
    A[i] = A[20 - i - 1];
    A[20 - i - 1] = auxiliar;
  }

  printf("\n\nVETOR INVERTIDO:");
  for (int i = 0; i < 20; i++)
  {
    printf("\n%i = %.2f ", i, A[i]);
  }
}

//-----------------------------------------------------------------------------------------------

void ex4() /* 4 - Elaborar um programa que preencha com 100 elementos do tipo inteiro em um vetor A valores aleatórios entre 1 e
10. Crie um vetor frequencia 10 posições e armazene a qte de vezes que os elementos de A apareceram no vetor
frequência */
{
  int a[100], freq[10], aleatorio;
  srand(time(NULL));
  printf("aleatorios: ");
  for (int i = 0; i < 100; i++)
  {
    aleatorio = rand() % 10;
    a[i] = aleatorio + 1;
    printf("%i ", a[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    freq[i] = 0;
  }

  for (int i = 0; i < 100; i++)
  {
    freq[a[i] - 1]++;
  }

  printf("\n");
  for (int i = 0; i < 10; i++)
  {
    printf("\nfrequencia %i: %i", i + 1, freq[i]);
  }
}

//-----------------------------------------------------------------------------------------------

void ex5() /* 5 - Elaborar um programa que preencha com valores aleatórios 10 elementos do tipo inteiro em um vetor A. Ordene e
 imprima o vetor A. */
{
  int a[10], aux = -1, b[10], aux2;
  srand(time(NULL));

  for (int i = 0; i < 10; i++)
  {
    a[i] = rand();
    b[i] = a[i];
    printf("%i\n", b[i]);
  }

  for (int i = 0; i < 10; i++)
  {

    for (int j = 0; j < 10; j++)
    {
      if (b[j] != -1 && (b[j] <= aux || aux == -1))
      {
        aux = b[j];
        aux2 = j;
      }
    }

    b[aux2] = -1;

    a[i] = aux;
    aux = -1;
  }
  for (int i = 0; i < 10; i++)
  {
    printf("\n%i", a[i]);
  }
}

//-----------------------------------------------------------------------------------------------

float *leVetor(int tam)
{
  float *v;
  v = malloc(sizeof(float) * tam);
  for (int i = 0; i < tam; i++)
  {
    printf("digite um termo real para o vetor: ");
    scanf("%f", &v[i]);
  }
  return v;
}

void imprimeVetor(float *v, int tam, char *nomeVetor)
{
  int i;
  for (int i = 0; i < tam; i++)
  {
    printf("vetor %s no indice %i =%.2f\n", nomeVetor, i, v[i]);
  }
}

void ex6()
{
  float *A;
  int tamVetor;
  printf("qual o tamanho do vetor? ");
  scanf("%i", &tamVetor);
  A = leVetor(tamVetor);
  printf("impressao apos a leitura do tamanho:\n");
  imprimeVetor(A, tamVetor, "A");
  free(A);
  A = NULL;

  return 0;
}

//-----------------------------------------------------------------------------------------------

int main()
{
  int quest;
  printf("digite o numero da questao desejada: ");
  scanf("%i", &quest);
  fflush(stdin);

  switch (quest)
  {
  case 1:
    ex1();
    break;
  case 2:
    ex2();
    break;
  case 3:
    ex3();
    break;
  case 4:
    ex4();
    break;
  case 5:
    ex5();
    break;
  case 6:
    ex6();
    break;

  default:
    printf("questao invalida!");
    break;
  }
}
