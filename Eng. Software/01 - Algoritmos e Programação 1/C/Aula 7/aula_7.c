#include <stdio.h>

void exercicio1() {
    
    int i = 1, cont=0;
    while( i > 0) {

        printf("Informe o valor.\n");
        scanf("%d", &i);

        if(i > 0) {
        cont++;
        }

    }

    /* Uma outra forma de fazer, que no caso seria a mais correta.

    printf("Informe o valor.\n");
    scanf("%d", &i);

    while( i > 0) {

        printf("Informe o valor.\n");
        scanf("%d", &i);

        if(i > 0) {
        cont++;
        }

    }

    printf("Saiu do laco, %d numeros inteiros digitados.", cont);

    */

    printf("Saiu do laco, %d numeros inteiros digitados.", cont);

}

void exercicio2() {

    int i, recebidor;

    printf("informe um valor diferente de 9999.\n");
    scanf("%d", &i);

    if(i != 9999) {
        recebidor = i;
    }

    while( i != 9999) {
        
        if(i > recebidor) {
            recebidor = i;
        }

        printf("\nInforme um valor diferente de 9999.\n");
        scanf("%d", &i);

    }

    printf("Saiu do laco, maior numero = %d.", recebidor);

}

int main() {

    int separador, exercicio;

    do {

        printf("Informe o exercicio que deseja ver ou [0] para sair: ");
        scanf("%d", &separador);

        switch(separador) {

            case 1:
                exercicio1();
                printf("\n\n\n");
                break;

            case 2:
                exercicio2();
                printf("\n\n\n");
                break;

            

            default:
                break;   

        }

    } while(separador != 0);

    return 0;
}