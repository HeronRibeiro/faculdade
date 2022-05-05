#include <stdio.h>


void exercicio1() {

    float base, altura, area;

    do {

        if(base <= 0) {
            printf("Base informada esta incorreta! \n\n");
        }

        printf("\nInforme a base do triangulo: ");
        scanf("%f", &base);

    }while(base <= 0);
    
    do {

        if(altura <= 0) {
            printf("Altura informada esta incorreta! \n\n");
        }

        printf("\nInforme a Altura do triangulo: ");
        scanf("%f", &altura);

    }while(altura <= 0);

    area = (base * altura)/2;

    printf("\nA area do triangulo e: [%.2f].", area);



}

int main() {

    int separador;

    do {

        printf("Informe o exercicio que deseja ver ou [0] para sair: ");
        scanf("%d", &separador);

        switch(separador) {

            case 1:
                exercicio1();
                printf("\n\n\n");
                break;

            case 2:
                // exercicio2();
                // printf("\n\n\n");
                break;

            

            default:
                break;   

        }

    } while(separador != 0);

    return 0;
}