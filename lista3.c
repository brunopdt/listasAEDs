#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

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
  int main(); /* 1 - Faça um algoritmo que leia um conjunto de números (X) e imprima a quantidade de números pares
(QPares) e a quantidade de números impares (QImpares) lidos. Admita que o valor 9999 é utilizado como
sentinela (FLAG) para fim de leitura. Ex.: 1,2,3,4,5,9999 => Pares=2 Impares=3 */
  {
    int x, Qpares, Qimpares;

    Qpares = 0;
    Qimpares = 0;
    x = 0;

    printf("digite um numero: ");
    scanf("%i", &x);
    while (x != 9999)
    {
      if (x % 2 == 0)
      {
        Qpares += 1;
      }
      else
      {
        Qimpares += 1;
      }
      printf("digite um numero: ");
      scanf("%i", &x);
    }
    printf("Pares = %i", Qpares);
    printf("\nImpares = %i", Qimpares);
    return 0;
  } /* entrada             saida
      4, 4, 4, 9999        Pares = 3, Impares = 0
      3, 1, 9999           Pares = 0, Impares = 2
      1, 2, 4, 5, 9, 9999  Pares = 2, Impares = 3
      */
}
//-----------------------------------------------------------------------------------------------

int ex2()
{
  int main(); /* 2 - Faça um programa que leia um conjunto indeterminado de números inteiros positivos e imprima o maior, o
  menor e a média aritmética desse conjunto de dados. (Flag -1).
  Execute este programa para os seguintes valores
  1.1,2,3,-1
  2.3,2,1,-1
  3.1,3,2,-1 */
  {
    int x, maior, menor, media = 0, contador = 1;
    printf("digite um numero: ");
    scanf("%i", &x);

    if (x != -1)
    {
      maior = x;
      menor = x;
      media += x;
    }

    while (x != -1)
    {
      printf("digite um numero: ");
      scanf("%i", &x);

      if (x == -1)
      {
        break;
      }
      contador += 1;
      media += x;

      if (x > maior)
      {
        maior = x;
      }
      else
      {
        if (x < menor)
          menor = x;
      }
    }
    printf("menor = %i\nmaior= %i", menor, maior);
    printf("\nmedia = %f", media / contador * 1.0);
    return 0;
  }
  /* entrada    saida
1,2,3,-1      menor=1, maior = 3, media = 2.000000
3,2,1,-1      menor=1, maior = 3, media = 2.000000
1,3,2,-1      menor=1, maior = 3, media = 2.000000*/
}
//-----------------------------------------------------------------------------------------------

int ex3()
{
  int main(); /* 3 - Escrever um algoritmo em Portugol, para calcular e imprimir o fatorial de um número lido do teclado.
  Ex. Fatorial de 5! = 5x4x3x2x1=120 */
  {
    int x, fat, i;
    fat = 1;
    printf("digite um numero para imprimir seu fatorial: ");
    scanf("%i", &x);

    for (i = x; i > 0; i--)
    {
      fat = fat * i;
    }
    printf("Fatorial de %i! = %i", x, fat);
    return 0;
  } /*entrada     saida
    5             120
    1             1*/
}
//-----------------------------------------------------------------------------------------------

int ex4()
{
  int main(); /* 4 – Calcule o valor da seguinte série lido a quantidade de termos: */
  {
    float soma;
    int quant, serie;
    printf("digite a quantidade de termos da serie: ");
    scanf("%i", &quant);
    serie = 1;
    soma = 0;

    for (int i = 1; i <= quant; i++)
    {
      if (i % 2 == 0)
      {
        soma = soma - (1.0 / pow(serie, 3));
        serie += 2;
      }
      else
      {
        soma = soma + (1.0 / pow(serie, 3));
        serie += 2;
      }
    }
    printf("a soma dos termos e igual a: %f", soma);
    return 0;
  }

  /*entrada     saida
    2           0,962
    1           1*/
}
//-----------------------------------------------------------------------------------------------

int ex5()
{
  int main(); /* 5 - A série de fibonacci é formada pela seqüência:
  1, 1, 2, 3, 5, 8, 13, 21, 34, ...
  Escreva um algoritmo que peça um número N maior que 2. Gere e imprima a série até este n-ésimo
  termo. */
  {
    int n, a, b;
    printf("digite um numero maior que 2: ");
    scanf("%i", &n);

    a = 1;
    b = 1;

    for (int i = 0; i < n; i++)
    {
      if (i % 2 == 0)
      {
        printf("%i", a);
        a += b;
      }
      else
      {
        printf("%i", b);
        b += a;
      }
    }
    return 0;
  }
  /* entrada  saida
    5         11235
    3         112 */
}
//-----------------------------------------------------------------------------------------------

int ex6()
{
  int main(); /* 6 - Fazer um algoritmo para calcular o valor de s, dado por, sendo o valor de N deverá ser lido do teclado */
  {
    int sinal;
    float n, serie, aux;
    printf("digite um valor: ");
    scanf("%f", &n);

    aux = 1;
    serie = 0;
    sinal = 0;

    while (aux <= n)
    {
      serie = serie + ((1 * pow(-1, sinal))) / n;
      n -= 1;
      aux += 1;
      sinal += 1;
    }

    printf("%.2f", serie);
    return 0;
  }
  /* entrada  saida
    3         -0,17
    9         0,16*/
}
//-----------------------------------------------------------------------------------------------

int ex7()
{
  int main(); /* 7 - Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita
  tem o mesmo valor. Exemplo:929, 44, 97379. Fazer um algoritmo que imprima todos os números
  palíndromos de 10000 a 99999. */
  {
    int x, a, b, c, d, e, pal;
    x = 10000;

    while (x >= 10000 && x <= 99999)
    {

      a = x / 10000;
      b = x / 1000 - a * 10;
      c = x / 100 - a * 100 - b * 10;
      d = x / 10 - a * 1000 - b * 100 - c * 10;
      e = x - a * 10000 - b * 1000 - c * 100 - d * 10;
      pal = e * 10000 + d * 1000 + c * 100 + b * 10 + a;
      if (pal == x)
      {
        printf("\n%i", pal);
      }
      x++;
    }

    return 0;
  }
  /* 10001
  10101
  10201
  10301
  10401
  10501
  10601
  10701
  10801
  10901
  11011
  11111
  11211
  11311
  11411
  11511
  11611
  11711
  11811
  11911
  12021
  12121
  12221
  12321
  12421
  12521
  12621
  12721
  12821
  12921
  13031
  13131
  13231
  13331
  13431
  13531
  13631
  13731
  13831
  13931
  14041
  14141
  14241
  14341
  14441
  14541
  14641
  14741
  14841
  14941
  15051
  15151
  15251
  15351
  15451
  15551
  15651
  15751
  15851
  15951
  16061
  16161
  16261
  16361
  16461
  16561
  16661
  16761
  16861
  16961
  17071
  17171
  17271
  17371
  17471
  17571
  17671
  17771
  17871
  17971
  18081
  18181
  18281
  18381
  18481
  18581
  18681
  18781
  18881
  18981
  19091
  19191
  19291
  19391
  19491
  19591
  19691
  19791
  19891
  19991
  20002
  20102
  20202
  20302
  20402
  20502
  20602
  20702
  20802
  20902
  21012
  21112
  21212
  21312
  21412
  21512
  21612
  21712
  21812
  21912
  22022
  22122
  22222
  22322
  22422
  22522
  22622
  22722
  22822
  22922
  23032
  23132
  23232
  23332
  23432
  23532
  23632
  23732
  23832
  23932
  24042
  24142
  24242
  24342
  24442
  24542
  24642
  24742
  24842
  24942
  25052
  25152
  25252
  25352
  25452
  25552
  25652
  25752
  25852
  25952
  26062
  26162
  26262
  26362
  26462
  26562
  26662
  26762
  26862
  26962
  27072
  27172
  27272
  27372
  27472
  27572
  27672
  27772
  27872
  27972
  28082
  28182
  28282
  28382
  28482
  28582
  28682
  28782
  28882
  28982
  29092
  29192
  29292
  29392
  29492
  29592
  29692
  29792
  29892
  29992
  30003
  30103
  30203
  30303
  30403
  30503
  30603
  30703
  30803
  30903
  31013
  31113
  31213
  31313
  31413
  31513
  31613
  31713
  31813
  31913
  32023
  32123
  32223
  32323
  32423
  32523
  32623
  32723
  32823
  32923
  33033
  33133
  33233
  33333
  33433
  33533
  33633
  33733
  33833
  33933
  34043
  34143
  34243
  34343
  34443
  34543
  34643
  34743
  34843
  34943
  35053
  35153
  35253
  35353
  35453
  35553
  35653
  35753
  35853
  35953
  36063
  36163
  36263
  36363
  36463
  36563
  36663
  36763
  36863
  36963
  37073
  37173
  37273
  37373
  37473
  37573
  37673
  37773
  37873
  37973
  38083
  38183
  38283
  38383
  38483
  38583
  38683
  38783
  38883
  38983
  39093
  39193
  39293
  39393
  39493
  39593
  39693
  39793
  39893
  39993
  40004
  40104
  40204
  40304
  40404
  40504
  40604
  40704
  40804
  40904
  41014
  41114
  41214
  41314
  41414
  41514
  41614
  41714
  41814
  41914
  42024
  42124
  42224
  42324
  42424
  42524
  42624
  42724
  42824
  42924
  43034
  43134
  43234
  43334
  43434
  43534
  43634
  43734
  43834
  43934
  44044
  44144
  44244
  44344
  44444
  44544
  44644
  44744
  44844
  44944
  45054
  45154
  45254
  45354
  45454
  45554
  45654
  45754
  45854
  45954
  46064
  46164
  46264
  46364
  46464
  46564
  46664
  46764
  46864
  46964
  47074
  47174
  47274
  47374
  47474
  47574
  47674
  47774
  47874
  47974
  48084
  48184
  48284
  48384
  48484
  48584
  48684
  48784
  48884
  48984
  49094
  49194
  49294
  49394
  49494
  49594
  49694
  49794
  49894
  49994
  50005
  50105
  50205
  50305
  50405
  50505
  50605
  50705
  50805
  50905
  51015
  51115
  51215
  51315
  51415
  51515
  51615
  51715
  51815
  51915
  52025
  52125
  52225
  52325
  52425
  52525
  52625
  52725
  52825
  52925
  53035
  53135
  53235
  53335
  53435
  53535
  53635
  53735
  53835
  53935
  54045
  54145
  54245
  54345
  54445
  54545
  54645
  54745
  54845
  54945
  55055
  55155
  55255
  55355
  55455
  55555
  55655
  55755
  55855
  55955
  56065
  56165
  56265
  56365
  56465
  56565
  56665
  56765
  56865
  56965
  57075
  57175
  57275
  57375
  57475
  57575
  57675
  57775
  57875
  57975
  58085
  58185
  58285
  58385
  58485
  58585
  58685
  58785
  58885
  58985
  59095
  59195
  59295
  59395
  59495
  59595
  59695
  59795
  59895
  59995
  60006
  60106
  60206
  60306
  60406
  60506
  60606
  60706
  60806
  60906
  61016
  61116
  61216
  61316
  61416
  61516
  61616
  61716
  61816
  61916
  62026
  62126
  62226
  62326
  62426
  62526
  62626
  62726
  62826
  62926
  63036
  63136
  63236
  63336
  63436
  63536
  63636
  63736
  63836
  63936
  64046
  64146
  64246
  64346
  64446
  64546
  64646
  64746
  64846
  64946
  65056
  65156
  65256
  65356
  65456
  65556
  65656
  65756
  65856
  65956
  66066
  66166
  66266
  66366
  66466
  66566
  66666
  66766
  66866
  66966
  67076
  67176
  67276
  67376
  67476
  67576
  67676
  67776
  67876
  67976
  68086
  68186
  68286
  68386
  68486
  68586
  68686
  68786
  68886
  68986
  69096
  69196
  69296
  69396
  69496
  69596
  69696
  69796
  69896
  69996
  70007
  70107
  70207
  70307
  70407
  70507
  70607
  70707
  70807
  70907
  71017
  71117
  71217
  71317
  71417
  71517
  71617
  71717
  71817
  71917
  72027
  72127
  72227
  72327
  72427
  72527
  72627
  72727
  72827
  72927
  73037
  73137
  73237
  73337
  73437
  73537
  73637
  73737
  73837
  73937
  74047
  74147
  74247
  74347
  74447
  74547
  74647
  74747
  74847
  74947
  75057
  75157
  75257
  75357
  75457
  75557
  75657
  75757
  75857
  75957
  76067
  76167
  76267
  76367
  76467
  76567
  76667
  76767
  76867
  76967
  77077
  77177
  77277
  77377
  77477
  77577
  77677
  77777
  77877
  77977
  78087
  78187
  78287
  78387
  78487
  78587
  78687
  78787
  78887
  78987
  79097
  79197
  79297
  79397
  79497
  79597
  79697
  79797
  79897
  79997
  80008
  80108
  80208
  80308
  80408
  80508
  80608
  80708
  80808
  80908
  81018
  81118
  81218
  81318
  81418
  81518
  81618
  81718
  81818
  81918
  82028
  82128
  82228
  82328
  82428
  82528
  82628
  82728
  82828
  82928
  83038
  83138
  83238
  83338
  83438
  83538
  83638
  83738
  83838
  83938
  84048
  84148
  84248
  84348
  84448
  84548
  84648
  84748
  84848
  84948
  85058
  85158
  85258
  85358
  85458
  85558
  85658
  85758
  85858
  85958
  86068
  86168
  86268
  86368
  86468
  86568
  86668
  86768
  86868
  86968
  87078
  87178
  87278
  87378
  87478
  87578
  87678
  87778
  87878
  87978
  88088
  88188
  88288
  88388
  88488
  88588
  88688
  88788
  88888
  88988
  89098
  89198
  89298
  89398
  89498
  89598
  89698
  89798
  89898
  89998
  90009
  90109
  90209
  90309
  90409
  90509
  90609
  90709
  90809
  90909
  91019
  91119
  91219
  91319
  91419
  91519
  91619
  91719
  91819
  91919
  92029
  92129
  92229
  92329
  92429
  92529
  92629
  92729
  92829
  92929
  93039
  93139
  93239
  93339
  93439
  93539
  93639
  93739
  93839
  93939
  94049
  94149
  94249
  94349
  94449
  94549
  94649
  94749
  94849
  94949
  95059
  95159
  95259
  95359
  95459
  95559
  95659
  95759
  95859
  95959
  96069
  96169
  96269
  96369
  96469
  96569
  96669
  96769
  96869
  96969
  97079
  97179
  97279
  97379
  97479
  97579
  97679
  97779
  97879
  97979
  98089
  98189
  98289
  98389
  98489
  98589
  98689
  98789
  98889
  98989
  99099
  99199
  99299
  99399
  99499
  99599
  99699
  99799
  99899
  99999 */
}
//-----------------------------------------------------------------------------------------------

int ex8()
{
  int main(); /* 8 - O numero 3025 possui a seguinte característica:
  30 + 25 = 55
  55^2 = 3025
  Quantos e quais são os números de 4 dígitos possuem essa característica? */
  {
    int x, a, c, d, contador;
    float b;
    x = 1000;
    contador = 0;

    while (x >= 1000 && x <= 9999)
    {
      a = x / 100;
      b = x - a * 100.0;
      b += a;
      c = pow(b, 2);

      if (c == x)
      {
        contador++;
        printf("\n%i", c);
      }

      x++;
    }
    printf("\n%i numeros de 4 digitos possuem essa caracteristica!", contador);
    return 0;
  }
  /* 2025, 3025, 9801, 3 numeros de 4 digitos possuem essa caracteristica!*/
}
//-----------------------------------------------------------------------------------------------

int ex9()
{
  int main(); /* 9. Faça um programa para um jogo de cara ou coroa. Neste caso, o jogador escolhe cara ou coroa (0 – cara e 1 – para coroa) mostre ao final de 10 tentativas, quantas foram certas e quantas erradas. (utilize o comando - para que o computador escolha o resultado). */
  {
    int x, i, contador;
    i = 1;
    contador = 0;
    srand(time(NULL));

    while (i <= 10)
    {
      printf("CARA OU COROA \nDigite 1 para cara e 0 para coroa: ");
      scanf("%i", &x);
      if (rand() % 2 == 0)
      {
        printf("resultado: cara!");
      }
      else
      {
        printf("resultado coroa!");
      }

      if (rand() % 2 == x % 2)
      {
        contador++;
        printf("\nvoce acertou!\n");
      }
      else
      {
        printf("\nvoce errou!\n");
      }
      i++;
    }

    printf("voce acertou %i jogos de cara ou coroa!", contador);

    getch();
    return 0;
  }
  /* entrada                          saida
    1, 0, 1, 1, 1, 1, 0, 1, 0, 1   voce acertou 5 jogos de cara ou coroa!
    1, 0, 1, 1, 1, 1, 0, 1, 0, 1   voce acertou 6 jogos de cara ou coroa! */
}
//-----------------------------------------------------------------------------------------------

int ex10()
{
  int main(); /* 10. Faça um programa para adivinhar um número escolhido pelo usuário, entre 1 e 1023. Indique ao
  final quantas tentativas foram necessárias. O programa deverá localizar o número escolhido pelo
  usuário em no máximo 10 tentativas!
  Utilize a seguinte proposta. Pegue o valor intermediário e pergunte ao usuário se o número é
  igual(=), maior(>) ou menor(<) que o que foi escolhido. Se for (=) implica que acertou! Se for maior escolha agora o número intermediário entre o que foi perguntado e o último, caso contrário escolha o intermediário entre o primeiro e o que foi perguntado, seguindo assim até acertar!
  Verifique que você conseguirá acertar qualquer número em no máximo 10 tentativas!!!*/
  {
    int num, tentativas, med, min, max, user;

    printf("\ndigite um numero entre 1 e 1023: ");
    scanf("%i", &num);
    while (num < 1 || num > 1023)
    {
      printf("numero invalido!");
      printf("\ndigite um numero entre 1 e 1023: ");
      scanf("%i", &num);
    }

    min = 1;
    max = 1023;
    do
    {
      med = min + (max - min) / 2;
      tentativas++;
      printf("tentativa numero: %i!\nseu numero e maior, menor ou igual que %i?\ndigite 0 para menor, 1 para igual e 2 para maior:  ", tentativas, med);
      scanf("%i", &user);

      switch (user)
      {
      case 0:
        max = med - 1;
        break;
      case 1:
        printf("numero correto");
        break;
      case 2:
        min = med + 1;
        break;
      default:
        printf("resposta invalida");
        break;
      }
    } while (user != 1);
    return 0;
  }
  /* entrada    saida
    0           numero invalido!
    1030        numero invalido!
    10          (na tentativa 9) numero correto */
}
