#include <stdio.h>
#include <stdlib.h>

int x, y, a, b; // variaveis globais
float limite81, limite82, limite91, limite92;
char linhateclado[51] = "";

int quest;

int main()
{
  printf("digite o numero da questao desejada: ");
  scanf("%i", &quest);
  fflush(stdin);

  switch (quest)
  {
  case 1:
    um1();
    break;
  case 2:
    dois1();
    break;
  case 3:
    tres1();
    break;
  case 4:
    quatro1();
    break;
  case 5:
    cinco1();
    break;
  case 6:
    seis1();
    break;
  case 7:
    sete1();
    break;
  case 8:
    oito2();
    break;
  case 9:
    nove2();
    break;
  case 10:
    dez1();
    break;

  default:
    printf("questao invalida!");
    break;
  }
}

//-----------------------------------------------------------------------------------------------

void um1()
{

  char a[51];
  printf("digite uma palavra: ");
  gets(a);
  for (int i = 0; a[i] != '\0'; i++)
  {
    if (a[i] >= 'A' && a[i] <= 'Z')
    {
      printf("\n%c", a[i]);
    }
  }
} /* entrada    saida
  Bruno          B
  visual studio  -
  MAGICA         M A G I C A */

/* 1. Crie um procedimento para:
- ler uma palavra do teclado;
- mostrar todas as letras maiúsculas que estão na palavra digitada.
DICA: Definir um teste para determinar se um caractere é letra maiúscula. */

//-----------------------------------------------------------------------------------------------

void dois1()
{
  char palavra[51], c;
  int menor = 0, maior = 0, igual = 0;
  printf("digite uma palavra: ");
  fflush(stdin);
  gets(palavra);
  printf("digite um caractere: ");
  fflush(stdin);
  scanf("%c", &c);

  if (c >= 'a' && c <= 'z')
  {
    c = c - 32;
  }

  for (int i = 0; palavra[i] != '\0'; i++)
  {
    if (palavra[i] >= 'a' && palavra[i] <= 'z')
    {
      palavra[i] = palavra[i] - 32;
    }
  }

  for (int j = 0; palavra[j] != '\0'; j++)
  {
    if (palavra[j] < c)
    {
      menor++;
      printf("\n%c e menor do que o caractere!", palavra[j]);
    }
    else
    {
      if (palavra[j] == c)
      {
        igual++;
      }
      else
      {
        maior++;
      }
    }
  }
  printf("\n%i caracteres sao iguais", igual);
  printf("\n%i caracteres sao maiores", maior);
  printf("\n%i caracteres sao menores", menor);
}
/* entrada       saida
carro, c         A e menor do que o caractere!, 1 caracteres sao iguais, 3 caracteres sao maiores, 1 caracteres sao menores
CARRO, C         A e menor do que o caractere!, 1 caracteres sao iguais, 3 caracteres sao maiores, 1 caracteres sao menores
CARRO, c         A e menor do que o caractere!, 1 caracteres sao iguais, 3 caracteres sao maiores, 1 caracteres sao menores
carro, C         A e menor do que o caractere!, 1 caracteres sao iguais, 3 caracteres sao maiores, 1 caracteres sao menores*/

/* 2. Crie um procedimento para:
- ler uma palavra do teclado;
- ler um caractere do teclado
- transforme toda a palavra em maiúscula;
- contar e mostrar as letras maiúsculas menores que o caractere, e quantas letras são maiores que o caractere, e
quantas são iguais ao caractere lido */

//-----------------------------------------------------------------------------------------------

void tres1()
{
  char string[51];
  int contador;
  printf("digite uma palavra: ");
  fflush(stdin);
  gets(string);

  printf("as letras presentes sao:");

  for (int i = 0; string[i] != '\0'; i++)
  {
    if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z')
    {
      printf(" %c", string[i]);
      contador++;
    }
  }
  printf("\nha %i letras!", contador);
}
/* entrada           saida
eu quero dormir      e u q u e r o d o r m i r , ha 13 letras!
Eu Quero Dormir      E u Q u e r o D o r m i r , ha 13 letras!  */

/* 3. Crie um procedimento para:
- ler uma cadeia de caracteres do teclado;
- contar e mostrar todos símbolos que forem letras, ou maiúsculas ou minúsculas. */

//-----------------------------------------------------------------------------------------------

void quatro1()
{
  char string[51], inverso[51] = "";
  int auxiliar = 0, i, contador, nums;

  printf("digite uma frase de ate 50 caracteres: ");
  gets(string);

  for (int j = 0; string[j] != '\0'; j++)
  {
    contador++;
  }

  for (i = 0; string[i] != '\0'; i++)
  {
    auxiliar = (contador - 1) - i;
    inverso[i] = string[auxiliar];
  }
  inverso[contador] = '\0';

  printf("numeros: ");
  for (int k = 0; inverso[k] != '\0'; k++)
  {
    if (inverso[k] >= '0' && inverso[k] <= '9')
    {
      nums++;
      printf(" %c", inverso[k]);
    }
  }

  printf("\nha %i digitos na string!", nums);

  return 0;
}

/* 4. Crie um procedimento para:
- ler uma cadeia de caracteres do teclado;
- contar e mostrar todos os dígitos, percorrendo desde o fim até o início da cadeia de caracteres. */

/* entrada                    saida
hoje vi 5 carros e 2 motos    numeros: 2, 5   2 digitos na string
tropecei 42 vezes quando sai  numeros: 2, 4   2 digitos na string*/

//-----------------------------------------------------------------------------------------------

void cinco1()
{
  char string[51];
  int contador = 0;

  printf("digite uma frase de ate 50 caracteres: ");
  gets(string);

  for (int i = 0; string[i] != '\0'; i++)
  {
    if (string[i] >= '0' && string[i] <= '9' || string[i] >= 'a' && string[i] <= 'z')
    {
    }
    else
    {
      printf(" %c", string[i]);
      contador++;
    }
  }
  printf("\n%i caracteres se adequam as condicoes!", contador);
}
/* entrada    saida
BA12          B A, 2 caracteres
ba12          0 caracteres*/
/* 5. Crie um procedimento para:
- ler uma cadeia de caracteres do teclado;
- contar e mostrar tudo o que não for dígito e também não for letra minúscula. */

//-----------------------------------------------------------------------------------------------

void seis1()
{
  int testes = 0, contador = 0, limMaior, limMenor, vetor[51], pos = 0;
  printf("digite o primeiro limite: ");
  scanf("%i", &x);
  printf("digite o segundo limite: ");
  scanf("%i", &y);

  if (x > y)
  {
    limMaior = x;
    limMenor = y;
  }
  else if (x < y)
  {
    limMaior = y;
    limMenor = x;
  }

  while (testes != -1)
  {
    printf("digite um valor de teste: ");
    scanf("%i", &testes);

    if (testes % 2 == 0 && testes % 3 == 0 && testes >= limMenor && testes <= limMaior)
    {
      vetor[pos] = testes;
      pos++;
      contador++;
    }
  }
  printf("\n%i numeros se adequeam a condicao!\n", contador);
  for (int i = 0; i < contador; i++)
  {
    printf("%i ", vetor[i]);
  }
}
/* entrada                        saida
1, 100, 6, 12, 24, 10, 300, -1    3 numeros se adequam! 6 12 24*/

/*6. Crie um procedimento para:
- ler dois valores inteiros positivos, limites para definirem um intervalo; ( esses valores deverão ser globais
- ler uma quantidade de valores inteiros a serem testados –FLAG -1; um por vez;
- contar e mostrar dentre esses valores lidos os que forem múltiplos de 2 e de 3, ao mesmo tempo, e pertençam ao
intervalo. */

//-----------------------------------------------------------------------------------------------

void sete1()
{
  int testes = 0, contador = 0, limMaior, limMenor, vetor[51], pos = 0;
  printf("digite o primeiro limite: ");
  scanf("%i", &a);
  printf("digite o segundo limite: ");
  scanf("%i", &b);

  if (a > b)
  {
    limMaior = a;
    limMenor = b;
  }
  else if (a < b)
  {
    limMaior = b;
    limMenor = a;
  }

  while (testes != -1)
  {
    printf("digite um valor de teste: ");
    scanf("%i", &testes);

    if (testes % 3 == 0 && testes % 5 != 0 && testes >= limMenor && testes <= limMaior)
    {
      vetor[pos] = testes;
      pos++;
      contador++;
    }
  }
  printf("\n%i numeros se adequeam a condicao!\n", contador);
  for (int i = 0; i < contador; i++)
  {
    printf("%i ", vetor[i]);
  }
}
/* entrada                     saida
1, 100, 12, 15, 21, 300, -1    2 numeros se adequam! 12 21*/

/*7. Crie um procedimento para:
- ler dois valores inteiros positivos, limites para definirem um intervalo ( esses valores deverão ser globais)
- ler uma quantidade de valores inteiros a serem testados;- Flag -1, um por vez;
- contar e mostrar dentre esses valores lidos os que forem múltiplos de 3, que não forem também múltiplos de 5, e
pertençam ao intervalo.*/

//-----------------------------------------------------------------------------------------------

void oito1()
{
  printf("digite o menor valor: ");
  scanf("%f", &limite81);
  printf("digite o maior valor: ");
  scanf("%f", &limite82);

  while (limite81 > limite82)
  {
    printf("ERRO!!! TENTE NOVAMENTE");
    printf("digite o menor valor: ");
    scanf("%f", &limite81);
    printf("digite o maior valor: ");
    scanf("%f", &limite82);
  }
}

void oito2()
{
  int quant, numint, contador, pos = 0;
  float num, vetor[51];
  oito1();
  printf("qual a quantidade de valores reais a serem testados? ");
  scanf("%i", &quant);

  for (int i = 0; i <= quant - 1; i++)
  {
    printf("digite um numero para testar: ");
    scanf("%f", &num);

    numint = num;

    if (num >= limite81 && num <= limite82 && numint % 2 != 0)
    {
      vetor[pos] = num;
      contador++;
      pos++;
    }
  }

  printf("\n%i numeros se adequeam a condicao!\n", contador);
  for (int j = 0; j < contador; j++)
  {
    printf("%.2f ", vetor[j]);
  }
} /* entrada                      saida
1, 100, 3, 11.5, 11.6, 12, 12.5   2 numeros se adequam! 11.5 11.6*/

/*8. Crie um procedimento para:
- ler dois valores reais, o primeiro menor que o segundo, caso não seja emita uma mensagem de erro e peça novamente, para
definirem um intervalo; ( esses valores deverão ser globais)
- Crie outro procedimento para:
- ler a quantidade de valores reais a serem testados, e ler outros tantos valores quantos os indicados por essa quantidade;
- contar e mostrar todos os valores lidos, pertencentes ao do intervalo, cujas partes inteiras forem números ímpares.
DICA: Usar conformação de tipo (type casting) para isolar a parte inteira (int), antes de testar se é impar*/

//-----------------------------------------------------------------------------------------------
float limite91, limite92;

void nove1()
{
  float limMaior, limMenor;
  printf("digite um numero entre 0 e 1: ");
  scanf("%f", &limite91);
  printf("digite um numero entre 0 e 1: ");
  scanf("%f", &limite92);

  while (limite91 < 0 || limite91 > 1 || limite92 < 0 || limite92 > 1)
  {
    printf("ERRO!!! TENTE NOVAMENTE");
    printf("digite um numero entre 0 e 1: ");
    scanf("%f", &limite91);
    printf("digite um numero entre 0 e 1: ");
    scanf("%f", &limite92);
    if (limite91 > limite92)
    {
      limMaior = limite91;
      limMenor = limite92;
    }
    else if (limite91 < limite92)
    {
      limMaior = limite92;
      limMenor = limite91;
    }

    limite91 = limMenor;
    limite92 = limMaior;
  }

  if (limite91 > limite92)
  {
    limMaior = limite91;
    limMenor = limite92;
  }
  else if (limite91 < limite92)
  {
    limMaior = limite92;
    limMenor = limite91;
  }

  limite91 = limMenor;
  limite92 = limMaior;

  printf("\n%f", limite91);
  printf("\n%f\n", limite92);
}

void nove2()
{
  int quant, numint, contador = 0, pos = 0;
  float num, vetor[51];
  printf("qual a quantidade de valores reais a serem testados? ");
  scanf("%i", &quant);

  for (int i = 0; i <= quant - 1; i++)
  {
    printf("digite um numero para testar: ");
    scanf("%f", &num);

    numint = num;
    num = (numint - num) * (-1);

    printf("numint: %i \nnum: %f\n", numint, num);

    if (num >= limite91 && num <= limite92)
    {
      vetor[pos] = num + numint;
      contador++;
      pos++;
    }
  }

  printf("\n%i numeros se adequeam a condicao!\n", contador);
  for (int j = 0; j < contador; j++)
  {
    printf("%.2f ", vetor[j]);
  }
} /* entrada                 saida
0.2, 0.8, 3, 1.5, 1.7, 2.9   2 numeros se adequam! 1.50 1.70 */

/*9. Crie um procedimento para:
- ler dois valores reais, maiores que 0 e menores que 1, caso não seja emita uma mensagem de erro e peça novamente, para
definirem um intervalo de precisão; ; ( esses valores deverão ser globais)
Crie um procedimento para:
- ler uma quantidade de valores reais a serem testados, e ler outros tantos valores quantos os indicados por essa quantidade; -
contar e mostrar todos os valores lidos que tenham suas partes fracionárias ao intervalo de precisão. DICA: Usar conformação de
tipo (type casting) para isolar a parte inteira (int), e obter a parte fracionária mediante a subtração da parte inteira, antes de testar. */

//-----------------------------------------------------------------------------------------------

void dez1()
{
  char auxiliar[51];
  int cont = 0;
  printf("digite uma linha inteira do teclado: ");
  fflush(stdin);
  gets(linhateclado);

  printf("%s\n", linhateclado);

  for (int i = 0, pos = 0; linhateclado[i] != '\0'; i++, pos++)
  {
    while (linhateclado[pos] >= 97 && linhateclado[pos] <= 122 || linhateclado[pos] >= 65 && linhateclado[pos] <= 90 || linhateclado[pos] >= 48 && linhateclado[pos] <= 57)
    {
      pos++;
    }

    auxiliar[i] = linhateclado[pos];
    cont++;
  }

  printf("\n");

  for (int i = 0; i <= cont; i++)
  {
    printf("%c ", auxiliar[i]);
  }
}

/*10. Crie um procedimento para:
ler uma linha do teclado; defina essa linha como global ;
- separar em outra cadeia de caracteres e mostrar todos os símbolos não alfanuméricos (letras ou dígitos) na cadeia de caracteres.*/

/* entrada      saida
'1234567890-='    ' - =
qwertyuiop´[      ´ [
asdfghjklç~]      ç ~ ]
\zxcvbnm,.;/      \ , . ; /  */
