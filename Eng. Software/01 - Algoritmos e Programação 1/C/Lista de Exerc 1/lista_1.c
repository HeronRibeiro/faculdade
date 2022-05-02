#include <stdio.h>
#include <stdlib.h>

void exercicio1()
{

    int number, result = 0;

    printf("Informe o numero que deseja ver a tabuada: ");
    scanf("%d", &number);

    for (int i = 0; i <= 10; i++)
    {
        result = number * i;

        printf("%d * %d = %d.\n", number, i, result);
    }
}

void exercicio2()
{

    int num1, num2, result;

    for (num1 = 1; num1 <= 10; num1++)
    {

        for (num2 = 1; num2 <= 10; num2++)
        {

            result = num1 * num2;
            printf("%d * %d = %d.\n", num1, num2, result);
        }

        printf("\n");
    }
}

void exercicio3()
{

    int num1, impar = 0, par = 0;

    printf("Informe 15 numeros:\n");

    for (int i = 1; i <= 15; i++)
    {

        printf("numero %d: ", i);
        scanf("%d", &num1);

        if (num1 % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    printf("%d numeros impar, %d numeros par.", impar, par);
}

void exercicio4()
{

    int num1, cont = 0;

    printf("Digite 80 numeros: \n");

    for (int i = 1; i <= 80; i++)
    {

        printf("Numero %d: ", i);
        scanf("%d", &num1);

        if (num1 <= 150 && num1 >= 10)
        {
            cont++;
        }
    }

    printf("Numeros entre 10 e 150: %d.", cont);
}

void exercicio5()
{

    int num1, num2, result = 0;
    printf("Informe dois numeros: \n");
    scanf("%d %d", &num1, &num2);

    for (num1; num1 <= num2; num1++)
    {
        result += num1;
    }

    printf("Result: %d", result);
}

void exercicio6()
{

    float custo, venda;

    for (int i = 1; i <= 40; i++)
    {

        printf("Informe o valor de custo: R$");
        scanf("%f", &custo);
        printf("Informe o valor de venda: R$");
        scanf("%f", &venda);

        if (custo > venda)
        {

            printf("Prejuizo no produto %d de: R$%.2f\n\n", i, (custo - venda));
        }
        else if (venda > custo)
        {

            printf("Lucro no produto %d de: R$%.2f\n\n", i, (venda - custo));
        }
        else
        {

            printf("Empatou dinheiro no produto %i.\n\n", i);
        }
    }
}

void exercicio7()
{

    char sex;
    float altura, menorAltura = 10, maiorAltura = 1, medAltura = 0;
    int contFemMenor = 0, contMascMenor = 0, contFemMaior = 0, contMascMaior = 0;

    printf("Informe o sexo[M ou F] e altura de cada aluno.\n");

    for (int i = 1; i <= 3; i++)
    {

        printf("Aluno %d:\n", i);

        printf("Altura: ");
        scanf("%f", &altura);

        printf("Sexo [M ou F]: ");
        scanf(" %c", &sex);

        if (altura < menorAltura)
        {

            menorAltura = altura;

            if (sex == 'M' || sex == 'm')
            {
                contMascMenor++;

                medAltura += altura;
            }

            if (sex == 'F' || sex == 'f')
            {
                contFemMenor++;
            }
        }
        else
        {

            maiorAltura = altura;

            if (sex == 'M' || sex == 'm')
            {
                contMascMaior++;

                medAltura += altura;
            }

            if (sex == 'F' || sex == 'f')
            {
                contFemMaior++;
            }
        }
    }

    printf("Menor altura do grupo: %.2f.\n", menorAltura);
    printf("Media da altura masculina: %.2f.\n", medAltura / (contMascMaior + contMascMenor));

    if(contMascMaior > contFemMaior) {
        printf("O mais alto da turma e Homem.");
    } else printf("A mais alta da turma e Mulher.");
}

int main()
{

    int separador;
    do
    {

        printf("\nInforme o exercicio: ");
        scanf("%d", &separador);

        system("cls");

        switch (separador)
        {

        case 1:
            exercicio1();
            break;

        case 2:
            exercicio2();
            break;

        case 3:
            exercicio3();
            break;

        case 4:
            exercicio4();
            break;

        case 5:
            exercicio5();
            break;

        case 6:
            exercicio6();
            break;

        case 7:
            exercicio7();
            break;

        default:
            break;
        }

    } while (separador != 0);

    return 0;
}