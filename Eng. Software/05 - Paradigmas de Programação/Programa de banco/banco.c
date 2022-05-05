#include <stdio.h>
#include <stdlib.h>

char numeroAgencia_1[10];
char numeroConta_1[20];
float saldo_1;

char numeroAgencia_2[10];
char numeroConta_2[20];
float saldo_2;

void deposito()
{

    char numeroAgencia_Deposito[10];
    char numeroConta_Deposito[20];
    float valor_Deposito;

    printf("Informe o numero da agencia: ");
    scanf("%s", numeroAgencia_Deposito);

    printf("Informe o numero da conta: ");
    scanf("%s", numeroConta_Deposito);

    printf("Informe o valor R$: ");
    scanf("%f", &valor_Deposito);

    if ((strcmp(numeroAgencia_Deposito, numeroAgencia_1) == 0) && (strcmp(numeroConta_Deposito, numeroConta_1) == 0))
    {
        saldo_1 += valor_Deposito;
    }
    else if ((strcmp(numeroAgencia_Deposito, numeroAgencia_2) == 0) && (strcmp(numeroConta_Deposito, numeroConta_2) == 0))
    {
        saldo_2 += valor_Deposito;
    }
    else
    {
        printf("Conta inexistente!");
    }
}

void transferencia()
{

    char numeroAgencia_Transferencia[10];
    char numeroConta_Transferencia[20];
    float valor_Transferencia;

    printf("Informe o numero da sua agencia: ");
    scanf("%s", numeroAgencia_Transferencia);

    printf("Informe o numero da sua conta: ");
    scanf("%s", numeroConta_Transferencia);

    printf("Informe o valor R$ da transferencia: ");
    scanf("%f", &valor_Transferencia);

    if (valor_Transferencia <= 0)
    {

        do
        {

            printf("Digite um valor maior que 0: ");
            scanf("%f", &valor_Transferencia);

        } while (valor_Transferencia <= 0);
    }
    else if ((strcmp(numeroAgencia_Transferencia, numeroAgencia_1) == 0) && (strcmp(numeroConta_Transferencia, numeroConta_1) == 0))
    {

        if (valor_Transferencia > saldo_1)
        {

            printf("Valor da transferencia superio ao saldo em conta !");
            
        }
        else if (valor_Transferencia <= saldo_1)
        {

            saldo_1 -= valor_Transferencia;
            saldo_2 += valor_Transferencia;

        }
    }
    else if ((strcmp(numeroAgencia_Transferencia, numeroAgencia_2) == 0) && (strcmp(numeroConta_Transferencia, numeroConta_2) == 0))
    {

        if (valor_Transferencia > saldo_2)
        {

            printf("Valor da transferencia superio ao saldo em conta !");

        }
        else if (valor_Transferencia <= saldo_2)
        {

            saldo_2 -= valor_Transferencia;
            saldo_1 += valor_Transferencia;

        }
    }
    else
    {
        printf("Conta inexistente!");
    }
}

void saque()
{

    char numeroAgencia_Saque[10];
    char numeroConta_Saque[20];
    float valor_Saque;

    printf("Informe o numero da sua agencia: ");
    scanf("%s", numeroAgencia_Saque);

    printf("Informe o numero da sua conta: ");
    scanf("%s", numeroConta_Saque);

    printf("Informe o valor R$ do saque: ");
    scanf("%f", &valor_Saque);

    if (valor_Saque <= 0)
    {

        do
        {

            printf("Digite um valor maior que 0.");
            scanf("%f", &valor_Saque);

        } while (valor_Saque <= 0);
    }
    else if ((strcmp(numeroAgencia_Saque, numeroAgencia_1) == 0) && (strcmp(numeroConta_Saque, numeroConta_1) == 0))
    {

        if (valor_Saque > saldo_1)
        {

            printf("Valor informado no saque maior que o saldo disponivel.");

        }
        else if (valor_Saque <= saldo_1)
        {

            saldo_1 -= valor_Saque;

        }
    }
    else if ((strcmp(numeroAgencia_Saque, numeroAgencia_2) == 0) && (strcmp(numeroConta_Saque, numeroConta_2) == 0))
    {

        if (valor_Saque > saldo_2)
        {

            printf("Valor informado no saque maior que o saldo disponivel.");

        }
        else if (valor_Saque <= saldo_2)
        {

            saldo_2 -= valor_Saque;

        }
    }
    else
    {
        printf("Conta inexistente!");

    }
}
int main()
{

    char test;

    printf("Informe o numero da agencia da conta 1: ");
    scanf("%s", numeroAgencia_1);

    printf("Informe o numero da conta 1: ");
    scanf("%s", numeroConta_1);

    printf("Informe o saldo R$ da conta 1: ");
    scanf("%f", &saldo_1);

    printf("\n");

    printf("Informe o numero da agencia da conta 2: ");
    scanf("%s", numeroAgencia_2);

    printf("Informe o numero da conta 2: ");
    scanf("%s", numeroConta_2);

    printf("Informe o saldo R$ da conta 2: ");
    scanf("%f", &saldo_2);

    printf("\n");

    do
    {

        int selector;
        printf("Informe a operacao que deseja fazer: \n");

        printf("[1] - Deposito\n");
        printf("[2] - Transferencia\n");
        printf("[3] - Saque\n");

        scanf("%d", &selector);

        printf("\n");

        switch (selector)
        {

        case 1:
            deposito();
            break;

        case 2:
            transferencia();
            break;

        case 3:
            saque();
            break;

        default:
            break;
        }

        printf("\n");

        printf("Saque da conta 1: R$%.2f\n", saldo_1);
        printf("Saque da conta 2: R$%.2f", saldo_2);

        printf("\n\nDeseja fazer outra operacao ? ");
        scanf(" %c", &test);

    } while (test == 's');

    return 0;
}