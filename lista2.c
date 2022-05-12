#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
// 1. Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar.
{
#include <stdio.h>
#include <stdlib.h>

  int main();
  {
    int x;
    printf("\ndigite x:");
    scanf("%i", &x);

    if (x % 2 == 0)
    {
      printf("o numero e par");
    }
    else
    {
      printf("o numero e impar");
    }
    return 0;
  }
  /*  entrada   saida
     100       par
     21        impar */
}
//-----------------------------------------------------------------------------------------------
int ex2()
/*2. Fazer um algoritmo peça o nome e as 3 notas de um aluno e mostre, além do nome e do valor da media do aluno,  uma mensagem de "Aprovado", caso a media seja igual ou superior a 6, ou a mensagem "reprovado", caso contrario. */
{
#include <stdio.h>
#include <stdlib.h>

  int main();
  {
    float nota1, nota2, nota3, media;
    char nome[50];
    printf("\ndigite o nome do aluno: ");
    gets(nome);

    printf("digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A media do aluno %s e de %.2f", nome, media);

    if (media >= 6)
    {
      printf("\nAPROVADO");
    }
    else
    {
      printf("\nREPROVADO");
    }
    return 0;
  }
  /*  entrada                saida
      joaquim, 5, 5, 6       joaquim, 5.33, REPROVADO
      ana luisa, 10, 5, 10   ana luisa, 8.33, APROVADO */
}
//-----------------------------------------------------------------------------------------------
int ex3()
/* 3. Fazer um algoritmo que leia a temperatura da água e mostre se está no estado solido, líquido ou gasoso. */
{
#include <stdio.h>
#include <stdlib.h>

  int main();
  {
    float temp;
    printf("\ndigite a temperatura da agua: ");
    scanf("%f", &temp);

    if (temp <= 0)
    {
      printf("\nESTADO SOLIDO");
    }
    else
    {
      if (temp >= 100)
      {
        printf("\nESTADO GASOSO");
      }
      else
      {
        printf("ESTADO LIQUIDO");
      }
    }
    return 0;
  }
  /*  entrada   saida
      100       GASOSO
      50        LIQUIDO
      -20       SOLIDO*/
}
//-----------------------------------------------------------------------------------------------
int ex4()
/* 4. Leia um valor X e se ele for menor que 0 avalie Y = x2 + 4. Se ele for maior que 0 avalie x3 -3 e se ele for igual a 0 de
uma mensagem de erro. */
{
#include <stdio.h>
#include <stdlib.h>

  int main();
  {
    int x, exp1, exp2;
    printf("\ndigite x: ");
    scanf("%i", &x);

    exp1 = pow(x, 2) + 4;
    exp2 = pow(x, 3) - 3;

    if (x < 0)
    {
      printf("%i", exp1);
    }
    else
    {
      if (x > 0)
      {
        printf("%i", exp2);
      }
      else
      {
        printf("ERRO!");
      }
    }
    return 0;
  }
  /*  entrada   saida
      0         ERRO
      -2        8
      3         24 */
}
//-----------------------------------------------------------------------------------------------
int ex5()
/* 5. Construa um algoritmo que receba como entrada três valores (A,B e C). Após o processamento o menor valor
deverá estar em A e o maior valor em C, e o valor intermediário em B. Imprima A,B e C. */
{
#include <stdio.h>
#include <stdlib.h>
  // a>b>c || a>c>b || b>a>c || b>c>a|| c>a>b || c>b>a
  int main();
  {
    int a, b, c, aux;
    printf("\ndigite a: ");
    scanf("%i", &a);
    printf("digite b: ");
    scanf("%i", &b);
    printf("digite c: ");
    scanf("%i", &c);

    if (a > b && b > c && a > c)
    {
      aux = a;
      a = c;
      c = aux;
    }
    else
    {
      if (a > c && c > b && a > b)
      {
        aux = b;
        b = c;
        c = a;
        a = aux;
      }
      else
      {
        if (b > a && a > c && b > c)
        {
          aux = c;
          c = b;
          b = a;
          a = aux;
        }
        else
        {
          if (b > c && c > a && b > a)
          {
            aux = b;
            b = c;
            c = aux;
          }
          else
          {
            if (c > a && a > b && c > b)
            {
              aux = b;
              b = a;
              a = aux;
            }
          }
        }
      }
    }
    printf("a= %i\nb= %i\nc= %i", a, b, c);

    return 0;
  }
  /*  entrada         saida
      1,2,3           1,2,3
      1,3,2           1,2,3
      2,3,1           1,2,3
      2,1,3           1,2,3
      3,1,2           1,2,3
      3,2,1           1,2,3 */
}
//-----------------------------------------------------------------------------------------------
int ex6()
/* 6. Desenvolver um algoritmo que leia três números inteiros: X, Y, Z  e verifique se o número X é divisível por Y e por Z.
O algoritmo deverá mostrar as possíveis mensagens:
- o número é divisível por Y e Z.
- o número é divisível por Y mas não por Z.
- o número é divisível por Z mas não por Y.
- o número não é divisível nem Y nem por Z. */
{
#include <stdio.h>
#include <stdlib.h>

  int main();
  {
    int x, y, z;
    printf("\ndigite x: ");
    scanf("%i", &x);
    printf("digite y: ");
    scanf("%i", &y);
    printf("digite z: ");
    scanf("%i", &z);

    if (x % y == 0 && x % z == 0)
    {
      printf("o numero e divisivel por Y e Z");
    }
    else
    {
      if (x % y == 0 && x % z != 0)
      {
        printf("o numero e divisivel por Y mas nao por Z");
      }
      else
      {
        if (x % y != 0 && x % z == 0)
        {
          printf("o numero e divisivel por Z mas nao por Y");
        }
        else
        {
          printf("o numero nao e divisivel nem por Y nem por Z");
        }
      }
    }
    return 0;
  }
  /*  entrada   saida
      8, 4, 8   o numero e divisivel por Y e Z
      8, 4, 6   o numero e divisivel por Y mas nao por Z
      8, 6, 4   o numero e divisivel por Z mas nao por Y
      8, 3, 6   o numero nao e divisivel nem por Y nem por Z*/
}
//-----------------------------------------------------------------------------------------------
int ex7()
/* 7. O numero 3025 possui a seguinte característica:
30 + 25 = 55
552 = 3025
Fazer um algoritmo que dado um numero de 4 dígitos (verifique se o número pertence a faixa) calcule e escreva se ele
possui ou não esta característica. */
{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main();
  {
    int x, a, c, d;
    float b;
    printf("\ndigite um numero de 4 digitos: ");
    scanf("%i", &x);

    if (x < 999 || x > 10000)
    {
      printf("erro!");
      return 0;
    }

    a = x / 100;
    b = x - a * 100.0;
    b += a;
    c = pow(b, 2);
    if (c == x)
    {
      printf("o valor possui a caracteristica!");
    }
    else
    {
      printf("o valor nao possui a caracteristica!");
    }
    return 0;
  }
  /* entrada   saida
      3025     o valor possui a caracteristica!
      9999     o valor nao possui a caracteristica! */
}
//-----------------------------------------------------------------------------------------------
int ex8()
/* 8. - ler um código do teclado e  mostrar o nome correspondente, de acordo com a lista :
221 Bernardo
211 Eustáquio
311 Luiz
312 Mário
332 Artur */
{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main();
  {
    int cod;
    printf("\ndigite o codigo do aluno: ");
    scanf("%i", &cod);

    switch (cod)
    {
    case 221:
      printf("Bernardo");
      break;
    case 211:
      printf("Eustaquio");
      break;
    case 311:
      printf("Luiz");
      break;
    case 312:
      printf("Mario");
      break;
    case 332:
      printf("Artur");
      break;
    default:
      printf("erro!");
      break;
    }

    return 0;
  }
  /* entrada   saida
      221    Bernardo
      211    Eustaquio
      311    Luiz
      312    Mario
      332    Artur
      123    erro!*/
}
//-----------------------------------------------------------------------------------------------
int ex9()
/* 9. Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor.
Exemplo:929, 44, 97379. Fazer um algoritmo que dado um numero de 5 dígitos; calcule e escreva se este e ou não palíndromo. */
{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main();
  {
    int x, a, b, c, d, e, pal;
    printf("\ndigite um numero de 5 digitos: ");
    scanf("%i", &x);

    if (x < 9999 || x > 100000)
    {
      printf("erro!");
      return 0;
    }

    a = x / 10000;
    b = x / 1000 - a * 10;
    c = x / 100 - a * 100 - b * 10;
    d = x / 10 - a * 1000 - b * 100 - c * 10;
    e = x - a * 10000 - b * 1000 - c * 100 - d * 10;
    pal = e * 10000 + d * 1000 + c * 100 + b * 10 + a;

    if (pal == x)
    {
      printf("e um palindromo!");
    }
    else
    {
      printf("nao e um palindromo!");
    }

    return 0;
  }
  /* entrada   saida
      12021    e um palindromo!
      12345    nao e um palindromo! */
}
//-----------------------------------------------------------------------------------------------
int ex10()
/* 10. Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. O custo da água varia dependendo do tipo do
consumidor - residencial, comercial ou industrial. A regra para calcular a conta e:
• Residencial: R$ 75,00 de taxa mais R$ 3,50 por m3 gastos;
• Comercial: R$ 500,00 para os primeiros 80 m3 gastos mais R$ 5,50 por m3 gastos acima dos 80 m3;
• Industrial: R$ 800,00 para os primeiros 100 m3 gastos mas R$ 8,00 por m3 gastos acima dos 100 m3;
O algoritmo devera ler a conta do cliente,  seu tipo (residencial, comercial e industrial) e o seu consumo de água em metros cubos.
Como resultado imprimir o valor a ser pago pelo mesmo. */
{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main();
  {
    int tipo;
    float valor, m3;
    printf("\ndigite o tipo da conta \n1-residencial \n2-comercial \n3- industrial \ninsira: ");
    scanf("%i", &tipo);
    printf("digite quantos m3 foram lidos na conta de agua: ");
    scanf("%f", &m3);

    switch (tipo)
    {
    case 1:
      valor = 75 + 3.5 * m3;
      break;
    case 2:
      valor = 500;
      if (m3 > 80)
      {
        valor += 5.5 * (m3 - 80);
      }
      break;
    case 3:
      valor = 800;
      if (m3 > 100)
      {
        valor += 8 * (m3 - 100);
      }
      break;
    default:
      printf("erro!");
      break;
    }
    printf("o valor a ser pago e %.2f", valor);

    return 0;
  }
  /* entrada   saida
      1, 10    110
      2, 75    500
      2, 90    550
      3, 80    800
      3, 101   808*/
}