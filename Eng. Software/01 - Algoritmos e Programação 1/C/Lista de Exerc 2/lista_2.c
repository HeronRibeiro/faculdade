#include <stdio.h>

void exercicio1()
{

    int num, impar = 0, par = 0;

    do
    {

        printf("Digite um numero inteiro e positivo para a comparacao, ou digite [0] para sair: ");
        scanf("%d", &num);

        if (num > 0)
        {

            if (num % 2 == 0)
            {

                par++;
            }
            else
            {

                impar++;
            }
        }
        else if (num < 0)
        {

            printf("Numero informado e menor que [0].\n\n");
        }

    } while (num != 0);

    printf("Numeros pares: [%d].\n", par);
    printf("Numeros impares: [%d].\n", impar);
}

void exercicio2()
{

    int soma = 0, result = 0;

    while (soma != 11)
    {

        result += soma++;

        printf("[ %d ]", result);
    }
}

void exercicio3()
{

    int soma = 0, result = 0;

    do
    {

        result += soma++;
        printf("[ %d ]", result);

    } while (soma != 11);
}

void exercicio4()
{

    int codigo, media, acesso, chave;
    float distancia_centro;

    int distancia_Receb = 0, qnt_Med_NaoAsfaltado = 0;

    do
    {

        printf("Informe o codigo do Hotel: ");
        scanf("%d", &codigo);

        printf("Informe a distancia do centro da cidade: ");
        scanf("%f", &distancia_centro);

        printf("Informe o numero medio de visitantes no ultimo feriado: ");
        scanf("%d", &media);

        printf("Informe se o acesso e ASFALTADO [1] ou NAO ASFALTADO [0]: ");
        scanf("%d", &acesso);

        if (distancia_centro > 15)
        {

            distancia_Receb++;
        }

        if (acesso == 0)
        {

            qnt_Med_NaoAsfaltado += media;
        }

        if (acesso == 1 && media < 1000)
        {

            printf("Codigo do hotel: [ %d ]\n", codigo);
            printf("Distancia do centro: [ %.2f ]\n", distancia_centro);
        }

        printf("Deseja cadastrar outro hotel ? [1] para SIM e [0] para NAO\n");
        scanf("%d", &chave);

    } while (chave != 0);

    printf("Hoteis com localizacao superior a 15km: [ %d ]\n", distancia_Receb);
    printf("Media de visitantes no ultimo feriado a hoteis nao asfaltado: [ %d ]\n", qnt_Med_NaoAsfaltado);
}

void exercicio5()
{

    float nota1, nota2, result = 0, mediaSala = 0;
    char chave;
    int aluno = 0;

    do
    {

        aluno++;

        do
        {

            printf("Informe a nota 1: ");
            scanf("%f", &nota1);

            if (nota1 < 0 || nota1 > 10)
            {

                printf("Nota invalida, digite novamente. \n\n");
            }

        } while (nota1 < 0 || nota1 > 10);

        do
        {

            printf("Informe a nota 2: ");
            scanf("%f", &nota2);

            if (nota2 < 0 || nota2 > 10)
            {

                printf("Nota invalida, digite novamente. \n\n");
            }

        } while (nota2 < 0 || nota2 > 10);

        result = (nota1 + nota2) / 2;
        mediaSala += result;

        if (result >= 7)
        {

            printf("Aluno aprovado, media = %.2f.\n\n", result);
        }
        else
        {

            printf("Aluno EXAME, media = %.2f.\n\n", result);
        }

        printf("Deseja continuar a digitar notas ? [S ou N]\n");
        scanf(" %c", &chave);

    } while (chave == 's' || chave == 'S');

    printf("Media da turma: %.2f", mediaSala / aluno);
}

void exercicio6()
{

    int andares, num_Pessoas = 0, entra, sai;
    char resp;

    printf("Quantos andares tem o predio ? \n");
    scanf("%d", &andares);

    for (int i = 1; i <= andares; i++)
    {

        if (i == 1)
        {

            printf("Andar [%d].\nVai subir quantas pessoas ?\n", i);
            scanf("%d", &entra);

            num_Pessoas += entra;

            continue;
        }

        do
        {

            printf("Andar [%d].\nVai descer alguem ? [s ou n]\n", i);

            scanf(" %c", &resp);

            if (resp == 's')
            {

                printf("Quantas pessoas vao descer ?\n");
                scanf("%d", &sai);

                num_Pessoas -= sai;
            }

            if (resp != 's' && resp != 'n')
            {

                printf("Resposta informada esta incorreta, digite uma resposta valida.\n");
            }

        } while (resp != 's' && resp != 'n');

        do
        {

            printf("Ok, vai entrar alguem ? [s ou n]\n");
            scanf(" %c", &resp);

            if (resp == 's')
            {

                printf("Quantas pessoas vao entrar ?\n");
                scanf("%d", &entra);

                num_Pessoas += entra;
            }

            if (resp != 's' && resp != 'n')
            {

                printf("Resposta informada esta incorreta, digite uma resposta valida.\n");
            }

        } while (resp != 's' && resp != 'n');

        if (num_Pessoas > 15)
        {

            printf("Numero de pessoas EXCEDE o limite de 15, devem descer [%d] pessoas.\n", num_Pessoas - 15);
            num_Pessoas -= 15;
        }

        if (i == andares)
        {

            printf("Ultimo andar, vao descer [%d] pessoas.\n", num_Pessoas);
        }
    }
}

void exercicio7() {

    float valor = 5.00, lucro;
    int vendas = 120;

    for(int i = 1; i <= 8; i++) {

        printf("Preco R$%.2f.\n", valor);

        printf("Ingressos vendidos: [ %d ].\n", vendas);

        lucro = vendas * valor;
        printf("Lucro R$%.2f.\n", lucro);

        valor -= 0.50;
        vendas += 26;

    }

}

void exercicio8() {

    int Alice, Beto, Clara, empate;
    char vencedor;

    do{

        printf("ZERINHO OU UM !\n");

        do {

            printf("Alice: ");
            scanf("%d", &Alice);

            if(Alice != 1 && Alice != 0) {

                printf("Informe um valor valido.");

            }

        } while(Alice != 1 && Alice != 0);
        
        do {

            printf("Beto: ");
            scanf("%d", &Beto);

            if(Beto != 1 && Beto != 0) {

                printf("Informe um valor valido.");

            }

        } while(Beto != 1 && Beto != 0);

        do {

            printf("Clara: ");
            scanf("%d", &Clara);

            if(Clara != 1 && Clara != 0) {

                printf("Informe um valor valido.");

            }

        } while(Clara != 1 && Clara != 0);

        if( Alice == Beto == Clara ) {

            printf("Empate, vamos denovo.\n\n");

            empate = 0;

            continue;

        } else
        if( Alice != Beto && Beto == Clara ) {

            printf("\nAlice ganhou !");
            break;

        } else
        if( Alice == Beto && Alice != Clara ) {

            printf("\nClara ganhou !");
            break;
    
        } else
        if( Alice == Clara && Alice != Beto ) {

            printf("\nBeto ganhou !");
            break;

        }


    } while(empate == 0);

}

int main()
{

    int separador;

    do
    {

        printf("Informe o exercicio que deseja ver ou [0] para sair: ");
        scanf("%d", &separador);

        printf("\n\n");

        switch (separador)
        {

        case 1:
            exercicio1();
            printf("\n\n\n");
            break;

        case 2:
            exercicio2();
            printf("\n\n\n");
            break;

        case 3:
            exercicio3();
            printf("\n\n\n");
            break;

        case 4:
            exercicio4();
            printf("\n\n\n");
            break;

        case 5:
            exercicio5();
            printf("\n\n\n");
            break;

        case 6:
            exercicio6();
            printf("\n\n\n");
            break;
        
        case 7:
            exercicio7();
            printf("\n\n\n");
            break;
        
        case 8:
            exercicio8();
            printf("\n\n\n");
            break;

        default:
            break;
        }

    } while (separador != 0);

    return 0;
}