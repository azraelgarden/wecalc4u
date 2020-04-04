#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "grausToRad.h"
#include "menus.h"
#include "funcoes.h"
#include "validar.h"
#include "funcDouble.h"
#include "derivada.h"
#include "integral.h"



main()
{
    //DECLARANDO VARIAVEIS --------------------------------------------------------------------------------------
    int opt;
    int opt2;
    float k;
    float x;
    float a;
    float b;
    int valor;
    //HABILITANDO ATRIBUTOS DA LINGUA PORTUGUESA
    setlocale(LC_ALL, "Portuguese");

    do
    {
escolha:

        //MENU---------------------------------------------------------------------------------------------------

        menu1();
        scanf("%d", &opt);

        switch (opt)
        {

        case 1:
        case 2:
        case 3:

escolha2:
            menu2(opt);
            scanf("%d", &opt2);
            if(opt==1)
            {
                switch (opt2)
                {

                case 0:
                    system("cls");
                    goto escolha;

                case 1:
                    system("cls");
                    printf("\tf(x) = k\n\n");
                    printf("Digite o valor de k para a construção da função:\n");
                    scanf("%f", &k);
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    printf("f(x) = k");
                    printf("\n\nf(%f) = %f\n", x, funcao1(x,k));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 2:
                    system("cls");
                    printf("\tf(x) = x^k\n\n");
                    printf("Digite o valor de k para a construção da função:\n");
                    scanf("%f", &k);
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    printf("f(x) = x^k");
                    printf("\n\nf(%f) = %f\n", x, funcao2(x,k));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 3:
                    system("cls");
                    printf("\tf(x) = k^x\n\n");
                    printf("Digite o valor de k para a construção da função:\n");
                    scanf("%f", &k);
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    printf("f(x) = k^x");
                    printf("\n\nf(%f) = %f\n", x, funcao3(x,k));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 4:
                    system("cls");
                    printf("\tf(x) = e^x\n\n");
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    printf("f(x) = e^x");
                    valor = validarX(x);
                    if(valor == 1)
                    {
                        printf("\n\nf(%f) = %f\n", x, funcao4(x));
                    }
                    else
                    {
                        printf("\n\nf(%.0f) = %f\n", x, funcao4(x));
                    }
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 5:
errof5:
                    system("cls");
                    printf("\tf(x) = log k(x)\n\n");
                    printf("Digite o valor de k para a construção da função:\n");
                    scanf("%f", &k);
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    if(erroX(x) == 1)
                    {
                        printf("\nErro!\nO valor de 'x' não pode ser menor ou igual a zero!\n");
                        system("pause");
                        goto errof5;
                    }
                    if(erroK(k) == 1)
                    {
                        printf("\nErro!\nO valor de 'k' não pode ser menor ou igual a um!\n");
                        system("pause");
                        goto errof5;
                    }
                    printf("f(x) = log k(x)");
                    printf("\n\nf(%f) = %f\n", x, funcao5(x,k));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 6:
errof6:
                    system("cls");
                    printf("\tf(x) = ln (x)\n\n");
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    if(erroX(x) == 1)
                    {
                        printf("\nErro!\nO valor de 'x' não pode ser menor ou igual a zero!\n");
                        system("pause");
                        goto errof6;
                    }
                    printf("f(x) = ln (x)");
                    printf("\n\nf(%f) = %f\n", x, funcao6(x));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 7:
errof7:
                    system("cls");
                    printf("\tf(x) = 1/x\n\n");
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    if(erro0(x) == 1)
                    {
                        printf("\nErro!\nO valor de 'x' não pode ser igual a zero!\n");
                        system("pause");
                        goto errof7;
                    }
                    valor = validarX(x);
                    printf("f(x) = 1/x");
                    if(valor == 1)
                    {
                        printf("\n\nf(%f) = %f\n", x, funcao7(x));
                    }
                    else
                    {
                        printf("\n\nf(%.0f) = %f\n", x, funcao7(x));
                    }

                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 8:
                    system("cls");
                    printf("\tf(x) = sen(x)\n\n");
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    valor = validarX(x);
                    printf("f(x) = sen(x)");
                    if(valor == 1)
                    {
                        printf("\n\nf(%f) = %f\n", x, funcao8(x));
                    }
                    else
                    {
                        printf("\n\nf(%.0f) = %f\n", x, funcao8(x));
                    }
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 9:
                    system("cls");
                    printf("\tf(x) = cos(x)\n\n");
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    valor = validarX(x);
                    printf("f(x) = cos(x)");
                    if(valor == 1)
                    {
                        printf("\n\nf(%f) = %f\n", x, funcao9(x));
                    }
                    else
                    {
                        printf("\n\nf(%.0f) = %f\n", x, funcao9(x));
                    }
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 10:
errof10:
                    system("cls");
                    printf("\tf(x) = tg(x)\n\n");
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    if(erro90(x) == 1)
                    {
                        printf("\nErro!\nO valor de 'x' não pode ser igual (90 + k * 180)!\n");
                        system("pause");
                        goto errof10;
                    }
                    valor = validarX(x);
                    printf("f(x) = tg(x)");
                    if(valor == 1)
                    {
                        printf("\n\nf(%f) = %f\n", x, funcao10(x));
                    }
                    else
                    {
                        printf("\n\nf(%.0f) = %f\n", x, funcao10(x));
                    }
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                default:
                    printf("Valor inválido\n");
                    system("pause");
                    system("cls");
                    goto escolha2;
                    break;

                }
            }
            else if(opt==2)
            {
                switch(opt2)
                {
                case 0:
                    system("cls");
                    goto escolha;

                case 1:
                    system("cls");
                    printf("\tf(x) = k\n\n");
                    printf("Digite o valor de k para a construção da função:\n");
                    scanf("%f", &k);
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    printf("f(x) = k");
                    printf("\n\nf(%f) = %lf\n", x, derivada1(x,k));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;
                case 2:
                    system("cls");
                    printf("\tf(x) = x^k\n\n");
                    printf("Digite o valor de k para a construção da função:\n");
                    scanf("%f", &k);
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    printf("f(x) = x^k");
                    printf("\n\nf(%f) = %lf\n", x, derivada2(x,k));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 3:
                    system("cls");
                    printf("\tf(x) = k^x\n\n");
                    printf("Digite o valor de k para a construção da função:\n");
                    scanf("%f", &k);
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    printf("f(x) = k^x");
                    printf("\n\nf(%f) = %lf\n", x, derivada3(x,k));

                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 4:
                    system("cls");
                    printf("\tf(x) = e^x\n\n");
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    printf("f(x) = e^x");
                    printf("\n\nf(%f) = %lf\n", x, derivada4(x));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 5:
errod5:
                    system("cls");
                    printf("\tf(x) = log k(x)\n\n");
                    printf("Digite o valor de k para a construção da função:\n");
                    scanf("%f", &k);
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    if(erroX(x) == 1)
                    {
                        printf("\nErro!\nO valor de 'x' não pode ser menor ou igual a zero!\n");
                        system("pause");
                        goto errod5;
                    }
                    if(erroK(k) == 1)
                    {
                        printf("\nErro!\nO valor de 'k' não pode ser menor ou igual a um!\n");
                        system("pause");
                        goto errod5;
                    }
                    printf("f(x) = log k(x)");
                    printf("\n\nf(%f) = %lf\n", x, derivada5(x,k));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 6:
errod6:
                    system("cls");
                    printf("\tf(x) = ln (x)\n\n");
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    if(erroX(x) == 1)
                    {
                        printf("\nErro!\nO valor de 'x' não pode ser menor ou igual a zero!\n");
                        system("pause");
                        goto errod6;
                    }
                    printf("f(x) = ln (x)");
                    printf("\n\nf(%f) = %lf\n", x, derivada6(x));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 7:
errod7:
                    system("cls");
                    printf("\tf(x) = 1/x\n\n");
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    if(erro0(x) == 1)
                    {
                        printf("\nErro!\nO valor de 'x' não pode ser igual a zero!\n");
                        system("pause");
                        goto errod7;
                    }
                    printf("f(x) = 1/x");
                    printf("\n\nf(%f) = %lf\n", x, derivada7(x));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 8:
                    system("cls");
                    printf("\tf(x) = sen(x)\n\n");
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    printf("f(x) = sen(x)");
                    printf("\n\nf(%f) = %lf\n", x, derivada8(x));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 9:
                    system("cls");
                    printf("\tf(x) = cos(x)\n\n");
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    printf("f(x) = cos(x)");
                    printf("\n\nf(%f) = %lf\n", x, derivada9(x));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                case 10:
errod10:
                    system("cls");
                    printf("\tf(x) = tg(x)\n\n");
                    printf("Qual valor de x deseja aplicar?\n");
                    scanf("%f", &x);
                    system("cls");
                    if(erro90(x) == 1)
                    {
                        printf("\nErro!\nO valor de 'x' não pode ser igual (90 + k * 180)!\n");
                        system("pause");
                        goto errod10;
                    }
                    printf("f(x) = tg(x)");
                    printf("\n\nf(%f) = %lf\n", x, derivada10(x));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;

                default:
                    printf("Valor inválido\n");
                    system("pause");
                    system("cls");
                    goto escolha2;
                    break;
                }
            }
            else
            {
                switch(opt2)
                {
                case 0:
                    system("cls");
                    goto escolha;
                case 1:
erroI1:
                    system("cls");
                    printf("\tf(x) = k\n\n");
                    printf("Digite os 2 intervalos para a construção da função:\n");
                    printf("\ta = ");
                    scanf("%f",&a);
                    printf("\tb = ");
                    scanf("%f",&b);
                    printf("Digite o valor de 'k' da função:\n");
                    scanf("%f", &k);
                    system("cls");
                    printf("f(x) = k");
                    printf("\n\nI(%f, %f) = %f\n", a, b, integral1(a,b,k));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;
                case 2:
erroI2:
                    system("cls");
                    printf("f(x) = x^k\n\n");
                    printf("Digite os 2 intervalos para a construção da função:\n");
                    printf("\ta = ");
                    scanf("%f",&a);
                    printf("\tb = ");
                    scanf("%f",&b);
                    printf("Digite o valor de 'k' da função:\n");
                    scanf("%f", &k);
                    system("cls");
                    printf("f(x) = x^k");
                    printf("\n\nI(%f, %f) = %f\n", a, b, integral2(a,b,k));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;
                case 3:
erroI3:
                    system("cls");
                    printf("f(x) = k^x\n\n");
                    printf("Digite os 2 intervalos para a construção da função:\n");
                    printf("\ta = ");
                    scanf("%f",&a);
                    printf("\tb = ");
                    scanf("%f",&b);
                    printf("Digite o valor de 'k' da função:\n");
                    scanf("%f", &k);
                    system("cls");
                    printf("f(x) = k^x");
                    printf("\n\nI(%f, %f) = %f\n", a, b, integral3(a,b,k));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;
                case 4:
erroI4:
                    system("cls");
                    printf("\tf(x) = e^x\n\n");
                    printf("Digite os 2 intervalos para a construção da função:\n");
                    printf("\ta = ");
                    scanf("%f",&a);
                    printf("\tb = ");
                    scanf("%f",&b);
                    system("cls");
                    printf("\tf(x) = e^x");
                    printf("\n\nI(%f, %f) = %f\n", a, b, integral4(a,b));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;
                case 5:
erroI5:
                    system("cls");
                    printf("\tf(x) = log k(x)\n\n");
                    printf("Digite os 2 intervalos para a construção da função:\n");
                    printf("\ta = ");
                    scanf("%f",&a);
                    printf("\tb = ");
                    scanf("%f",&b);
                    printf("Digite o valor de 'k' da função:\n");
                    scanf("%f", &k);
                    if(erroX(a) == 1)
                    {
                        printf("\nErro!\nO valor de 'a' não pode ser menor ou igual a zero!\n");
                        system("pause");
                        goto erroI5;
                    }
                    if(erroX(b) == 1)
                    {
                        printf("\nErro!\nO valor de 'b' não pode ser menor ou igual a zero!\n");
                        system("pause");
                        goto erroI5;
                    }
                    if(erroK(k) == 1)
                    {
                        printf("\nErro!\nO valor de 'k' não pode ser menor ou igual a um!\n");
                        system("pause");
                        goto erroI5;
                    }
                    system("cls");
                    printf("\tf(x) = log k(x)");
                    printf("\n\nI(%f, %f) = %f\n", a, b, integral5(a,b,k));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;
                case 6:
erroI6:
                    system("cls");
                    printf("\tf(x) = ln (x)\n\n");
                    printf("Digite os 2 intervalos para a construção da função:\n");
                    printf("\ta = ");
                    scanf("%f",&a);
                    printf("\tb = ");
                    scanf("%f",&b);
                    if(erroX(a) == 1)
                    {
                        printf("\nErro!\nO valor de 'a' não pode ser menor ou igual a zero!\n");
                        system("pause");
                        goto erroI6;
                    }
                    if(erroX(b) == 1)
                    {
                        printf("\nErro!\nO valor de 'b' não pode ser menor ou igual a zero!\n");
                        system("pause");
                        goto erroI6;
                    }
                    system("cls");
                    printf("\tf(x) = ln (x)");
                    printf("\n\nI(%f, %f) = %f\n", a, b, integral6(a,b));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;
                case 7:
erroI7:
                    system("cls");
                    printf("\tf(x) = 1/x\n\n");
                    printf("Digite os 2 intervalos para a construção da função:\n");
                    printf("\ta = ");
                    scanf("%f",&a);
                    printf("\tb = ");
                    scanf("%f",&b);
                    if(erro0(a) == 1)
                    {
                        printf("\nErro!\nO valor de 'a' não pode ser igual a zero!\n");
                        system("pause");
                        goto erroI7;
                    }
                    if(erro0(b) == 1)
                    {
                        printf("\nErro!\nO valor de 'x' não pode ser igual a zero!\n");
                        system("pause");
                        goto erroI7;
                    }
                    if(erroIntervalo0(a,b) == 1)
                    {
                        printf("\nErro!\nO valor '0' não pode fazer parte do intervalo nessa função, pois é uma divisão!");
                        system("pause");
                        goto erroI7;
                    }
                    system("cls");
                    printf("\tf(x) = 1/x");
                    printf("\n\nI(%f, %f) = %f\n", a, b, integral7(a,b));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;
                case 8:

erroI8:
                    system("cls");
                    printf("\tf(x) = sen(x)\n\n");
                    printf("Digite os 2 intervalos para a construção da função:\n");
                    printf("\ta = ");
                    scanf("%f",&a);
                    printf("\tb = ");
                    scanf("%f",&b);
                    system("cls");
                    printf("\tf(x) = sen(x)");
                    printf("\n\nI(%f, %f) = %f\n", a, b, integral8(a,b));
                    system("pause");
                    system("cls");
                    goto escolha;
                    break;
                case 9:
erroI9:
                    system("cls");
                    printf("\tf(x) = cos(x)\n\n");
                    printf("Digite os 2 intervalos para a construção da função:\n");
                    printf("\ta = ");
                    scanf("%f",&a);
                    printf("\tb = ");
                    scanf("%f",&b);
                    system("cls");
                    printf("\tf(x) = cos(x)");
                    printf("\n\nI(%f, %f) = %f\n", a, b, integral9(a,b));
                    system("pause");
                    system("cls");
                    goto escolha;

                case 10:
erroI10:
                    system("cls");
                    printf("\tf(x) = tg(x)\n\n");
                    printf("Digite os 2 intervalos para a construção da função:\n");
                    printf("\ta = ");
                    scanf("%f",&a);
                    printf("\tb = ");
                    scanf("%f",&b);
                    if(erroIntervalo90(a,b) == 1)
                    {
                        printf("\nErro!\nO Intervalo entre 'a' e 'b' não pode ser igual (90 + k * 180)!\n");
                        system("pause");
                        goto erroI10;
                    }
                    system("cls");
                    printf("\tf(x) = tg(x)");
                    printf("\n\nI(%f, %f) = %f\n", a, b, integral10(a,b));
                    system("pause");
                    system("cls");
                    goto escolha;

                default:
                    printf("Valor inválido\n");
                    system("pause");
                    system("cls");
                    goto escolha2;
                    break;
                }
            }
            break;

        //INVÁLIDO ----------------------------------------------------------------------------------

        default:
            printf("Valor inválido\n");
            system("pause");
            system("cls");
            goto escolha;
            break;

        //SAIR --------------------------------------------------------------------------------------

        case 4:
            break;

        }

        system("cls");

    }
    while(opt != 4);
}
