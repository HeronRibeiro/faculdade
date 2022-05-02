#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int separador;
    float num1, num2;
    char op;

    do
    {
        printf("\nInforme o exercicio que deseja ver [0 para sair]: ");
        scanf("%d", &separador);

        switch (separador)
        {

        case 1: system("cls");

            printf("Informe a operacao [num1 + num2]:\n");
            scanf("%f %c %f", &num1, &op, &num2);

            switch(op) {
                case '+':
                    printf("%.1f %c %.1f = %.2f", num1, op, num2, (num1 + num2));
                    break;

                case '-':
                    printf("%.1f %c %.1f = %.2f", num1, op, num2, (num1 - num2));
                    break;

                case '*':
                    printf("%.1f %c %.1f = %.2f", num1, op, num2, (num1 * num2));
                    break;

                case '/':
                    printf("%.1f %c %.1f = %.2f", num1, op, num2, (num1 / num2));
                    break;

                default:
                    printf("Operador nao identificado.\n");
                    break;
            }

            break;

        case 2: system("cls");

            int leitor;

            printf("Codigo ----- Categoria\n\n");
            printf(" 1001  ----- Infantil\n");
            printf(" 1002  ----- Juvenil\n");
            printf(" 1003  ----- Adolescente\n");
            printf(" 1004  ----- Senior\n");
            printf(" 1005  ----- Profissional\n");
            printf(" 1006  ----- Master\n");

            printf("\nInforme o codigo que deseja verificar: ");
            scanf("%d", &leitor);

            switch(leitor) {

                case 1001:
                    printf("Categoria Infantil.");
                    break;
                
                case 1002:
                    printf("Categoria Juvenil.");
                    break;

                case 1003:
                    printf("Categoria Adolescente.");
                    break;

                case 1004:
                    printf("Categoria Senior.");
                    break;

                case 1005:
                    printf("Categoria Profissional.");
                    break;

                case 1006:
                    printf("Categoria Mater.");
                    break;

                default:
                    printf("Numerador nao identificado !");
                    break;

            }

            break;

        default:
            break;
        }

    } while (separador != 0); 

    return 0;
}