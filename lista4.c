#include <stdio.h>
#include <string.h>

int ex1(), ex2(), ex3(), ex4(), ex5(), ex6(), ex7(), ex8(), ex9(), ex10(), quest;

int main()
{
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
  case 7:
    ex7();
    break;
  case 8:
    ex8();
    break;
  case 9:
    ex9();
    break;
  case 10:
    ex10();
    break;

  default:
    printf("questao invalida!");
    break;
  }
}

//-----------------------------------------------------------------------------------------------
int ex1()
{
#include <stdio.h>
#include <string.h>

  int main(); /* 1 -Leia um conjunto indeterminado de palavras e ao final (estipule você um flag) informe qual foi a maior palavra e a
  menor palavra digitada, em tamanho e lexicograficamente. */
  {
    char palavra[99], maiorp[30], menorp[30], maiorlexi[30], menorlexi[30], compmaior[30], compmenor[30];
    int parar, tamanhomenor, tamanhomaior;

    printf("DIGITE ''PARAR'' PARA PARAR \ndigite uma palavra: ");
    scanf("%s", &palavra);

    tamanhomaior = (strlen(palavra));
    tamanhomenor = (strlen(palavra));
    strcpy(maiorp, palavra);
    strcpy(menorp, palavra);
    strcpy(maiorlexi, palavra);
    strcpy(menorlexi, palavra);
    strcpy(compmaior, palavra);
    strcpy(compmenor, palavra);

    while (strcmp(palavra, "PARAR"))
    {

      if (strlen(palavra) >= tamanhomaior)
      {
        strcpy(maiorp, palavra);
        tamanhomaior = strlen(palavra);
      }
      else
      {
        if (strlen(palavra) <= tamanhomenor)
        {
          strcpy(menorp, palavra);
          tamanhomenor = strlen(palavra);
        }
      }

      if (strcasecmp(palavra, compmaior) >= 0)
      {
        strcpy(compmaior, palavra);
        strcpy(maiorlexi, palavra);
      }
      else
      {
        strcpy(compmenor, palavra);
        strcpy(menorlexi, palavra);
      }

      printf("DIGITE ''PARAR'' PARA PARAR \ndigite uma palavra: ");
      fflush(stdin);
      scanf("%s", &palavra);
    }
    printf("\na maior palavra em caracteres e: %s", maiorp);
    printf("\na menor palavra em caracteres e: %s", menorp);
    printf("\na maior palavra lexicograficamente e: %s", maiorlexi);
    printf("\na menor palavra lexicograficamente e: %s", menorlexi);

    return 0;
  } /* entrada/ saida
  zebra, abacate, ali:
  a maior palavra em caracteres e: abacate
  a menor palavra em caracteres e: ali
  a maior palavra lexicograficamente e: zebra
  a menor palavra lexicograficamente e: ali   */
}
//-----------------------------------------------------------------------------------------------
int ex2()
{
  int main(); /* 2 –Ler um string de no maximo 50 caracteres e contar quantas letras A
 essa palavra possui.*/
  {
    char fraseusuario[51];
    int i, contador;
    printf("digite uma frase de ate 50 caracteres: ");
    gets(fraseusuario);
    i = 0;
    contador = 0;

    for (i = 0; fraseusuario[i] != '\0'; i++)
    {
      if (fraseusuario[i] == 'a' || fraseusuario[i] == 'A')
      {
        contador++;
      }
    }
    printf("A string possui %i letras 'a'", contador);
    return 0;
  } /*entrada    saida
     carro       a string possui 1 letras 'a'
     ABACATE     a string possui 3 letras 'a'*/
}
//-----------------------------------------------------------------------------------------------
int ex3()
{
  int main(); /* 3 –Ler uma string de no maximo 50 caracteres e indicar quais as posições da letra A nessa palavra.*/
  {
    char stringusuario[51];
    int posicao;

    printf("digite uma frase ate 50 caracteres: ");
    gets(stringusuario);
    posicao = 0;

    while (stringusuario[posicao] != '\0')
    {
      if (stringusuario[posicao] == 'a')
      {
        printf("\n'a' na posicao = %d", posicao);
      }
      posicao++;
    }
    return 0;
  } /* entrada                      saida
  algoritmo e estrutura de dados    0, 20, 26
  ana                               0, 2*/
}
//-----------------------------------------------------------------------------------------------
int ex4()
{
  int main(); /* 4 –Ler uma string de no maximo 50 caracteres e em seguida um caractere, mostrar quais as posições esse caractere
aparece na string lida e quantas vezes ele apareceu. */
  {
    char stringusuario[51], caractere;
    int posicao = 0, contador = 0;

    printf("digite uma frase de ate 50 caracteres: ");
    fflush(stdin);
    gets(stringusuario);

    printf("digite um caractere: ");
    scanf("%c", &caractere);

    while (stringusuario[posicao] != '\0')
    {
      if (stringusuario[posicao] == caractere)
      {
        contador++;
        printf("\ncaractere '%c' ocorre na posicao = %d", caractere, posicao);
      }
      posicao++;
    }

    printf("\nna string digitada aparecem o caractere '%c' %d vezes", caractere, contador);

    return (0);
  } /* entrada                saida
  hoje tera festa, a          posicao 8, 14, numero de caracteres: 2
  eu to estudando muito, e    posicao 0, 6, numero de caracteres 2*/
}
//-----------------------------------------------------------------------------------------------
int ex5()
{
  int main(); /* 5 -Ler uma string de no maximo 50 caracteres e em seguida um caractere
   (entre A e z -consista se o caracter esta nesse intervalo), mostrar quais as
   posicaoições esse caractere (maiúscula ou minúscula) na string lida e quantas
   vezes ele apareceu.*/
  {
    char stringusuario[51], caractere;
    int posicao = 0, contador = 0;

    printf("digite uma frase de ate 50 caracteres: ");
    fflush(stdin);
    gets(stringusuario);

    printf("digite um caractere entra A e z: ");
    scanf("%c", &caractere);

    while (stringusuario[posicao] != '\0')
    {
      if (caractere > 91)
      {
        if (stringusuario[posicao] == caractere || stringusuario[posicao] == (caractere - 32))
        {
          contador++;
          printf("\ncaractere '%c' ocorre na posicao = %d", caractere, posicao + 1);
        }
      }
      else
      {
        if (stringusuario[posicao] == caractere || stringusuario[posicao] == (caractere + 32))
        {
          contador++;
          printf("\ncaractere '%c' ocorre na posicao = %d", caractere, posicao + 1);
        }
      }
      posicao++;
    }
    printf("\nna string digitada aparecem o caractere '%c' %d vezes", caractere, contador);

    return (0);
  } /* entrada                  saida
  gosto muito de programar, o   posicao 2,5,11,18, caractere aparece 4 vezes
  GOSTO MUITO DE PROGRAMAR, O   posicao 2,5,11,18, caractere aparece 4 vezes
  GOSTO MUITO DE PROGRAMAR, o   posicao 2,5,11,18, caractere aparece 4 vezes*/
}
//-----------------------------------------------------------------------------------------------
int ex6()
{
  int main(); /* 6 - Ler uma string de no maximo 50 caracteres e mostrar quantas letras possui e quantos caracteres são números e
quantos não são nem números nem letras.*/
  {
    char stringusuario[51];
    int posicao = 0, caracteres = 0, numeros = 0, resto = 0;

    printf("digite uma frase de ate 50 caracteres: ");
    fflush(stdin);
    gets(stringusuario);

    while (stringusuario[posicao] != '\0')
    {
      posicao++;
      if (stringusuario[posicao] > 64 && stringusuario[posicao] < 91 || stringusuario[posicao] > 96 && stringusuario[posicao] < 123)
      {
        caracteres++;
      }
      else if (stringusuario[posicao] > 47 && stringusuario[posicao] < 58)
      {
        numeros++;
      }
      else
      {
        resto++;
      }
    }
    printf("a string possui %i letras, %i numeros, e %d caracteres que nao sao nem numeros nem letras!", caracteres + 1, numeros, resto - 1);
    return 0;
  } /* entrada                    saida
  eu comi 72 sanduiches hoje!     20 letras, 2 numeros, 5 caracteres que nao sao nem numeros nem letras
  assisto filmes diariamente.     24 letras, 0 numeros, 3 caracteres que nao sao nem numeros nem letras*/
}
//-----------------------------------------------------------------------------------------------
int ex7()
{
  int main(); /* 7 - Ler uma string de no máximo 50 caracteres e criar uma nova string com seu inverso, isso é a ultima letra da primeira
string será a primeira na nova string e assim sucessivamente.*/
  {
    char string[51], inverso[51] = "";
    int auxiliar, i;

    printf("digite uma frase de ate 50 caracteres: ");
    gets(string);

    for (i = 0; string[i] != '\0'; i++)
    {
      auxiliar = strlen(string) - i - 1;
      inverso[i] = string[auxiliar];
    }
    inverso[strlen(string)] = '\0';

    printf("\n%s ao inverso fica: %s: ", string, inverso);
    return 0;
  } /* entrada saida
    onibus     subino
    jacare     eracaj*/
}
//-----------------------------------------------------------------------------------------------
int ex8()
{
  int main(); /* 8 - Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Utilize uma string
auxiliar.*/
  {
    char stringusuario[51], auxiliar[51];
    int i, auxiliar2;

    printf("digite uma string de ate 50 caracteres: ");
    gets(stringusuario);
    auxiliar2 = 0;

    for (i = 0; stringusuario[i] != '\0'; i++)
    {
      if (stringusuario[i] != ' ')
      {
        auxiliar[i - auxiliar2] = stringusuario[i];
      }
      else
      {
        auxiliar2++;
      }
    }
    auxiliar[strlen(stringusuario) - auxiliar2] = '\0';

    printf("a string original: %s \na string sem espacos: %s", stringusuario, auxiliar);

    return 0;
  } /* entrada      saida
  eu quero dormir   euquerodormir*/
}
//-----------------------------------------------------------------------------------------------
int ex9()
{
  int main(); /* 9 - Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Sem utilize string
auxiliar.*/
  {
    char stringusuario[51];
    int aux, i;

    printf("digite uma string de ate 50 caracteres: ");
    gets(stringusuario);
    aux = 0;

    for (i = 0; stringusuario[i] != '\0'; i++)
    {
      if (stringusuario[i] != ' ')
      {
        stringusuario[aux] = stringusuario[i];
        aux++;
      }
    }
    stringusuario[aux] = '\0';
    printf("a string sem espacos fica: %s", stringusuario);
    return 0;
  } /* entrada                                            saida
  jorge andou muito hoje                                  jorgeandoumuitohoje
  eu      andei                                           euandei
  estou    colocando    varios      espacos               estoucolocandovariosespacos*/
}
//-----------------------------------------------------------------------------------------------
int ex10()
{
  int main(); /* 10 - Ler uma string de no máximo 50 caracteres em seguida leia outra string de no máximo 3 caracteres, informe quantas
vezes a segunda string aparece na primeira string, e diga as posições iniciais em que ela aparece.*/
  {
    char stringusuario[51], stringusuario2[4], auxiliar[4] = "";
    int auxiliar2 = 0;
    printf("digite uma frase de ate 50 caracteres: ");
    gets(stringusuario);
    printf("digite outra frase, de ate 3 caracteres: ");
    gets(stringusuario2);
    for (int i = 0; stringusuario[i] != '\0'; i++)
    {
      for (int j = i; j - i != strlen(stringusuario2); j++)
      {
        if (stringusuario[j] != '/0')
        {
          auxiliar[j - i] = stringusuario[j];
        }
        else
        {
          break;
        }
      }
      if (strcmp(stringusuario2, auxiliar) == 0)
      {
        printf("\na segunda string aparece na primeira string na posicao %i!", i);
        auxiliar2++;
      }
    }
    printf("\na segunda string aparece dentro da primeira string %i vez(es)!", auxiliar2);
    return 0;
  } /* entrada  saida
  luva, uva     posicao 1, 1 vez
  banana, na    posicao 2 e 4, 2 vezes */
}
