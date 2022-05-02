#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

    int selector = 1;
    float n1, n2, n3;
    
    do {
        printf("\nInforme o seletor [digite 0 para sair]: ");
        scanf("%d", &selector);

        switch (selector) {
            
            case 1:
                printf("\nInforme os tres lados do triangulo que deseja verificar:\n");
                scanf("%f %f %f", &n1, &n2, &n3);

                if( (n1+n2)>n3 && (n2+n3)>n1 && (n3+n1>n2) ) {

                    if ( (n1 == n2 && n2 == n3 && n3 == n1) ) {

                        printf("Todos os lados iguais: equilatero.\n");

                    } else if ( (n1==n2 || n2 == n3 || n3 == n1) ) {

                        printf("Um dos lados iguais: Isosceles.\n");

                    } else {

                        printf("Todos os lados diferentes: Escaleno\n");

                    }
 
                } else {

                    printf("Nao e um triangulo !");

                }

                break;

            case 2:
                int n1;

                printf("\nInforme a nota do aluno: [0 a 100]\n");
                scanf("%d", &n1);

                if( (0 <= n1) && (n1 <= 100) ){
                    
                    if(n1 == 0) {

                        printf("Nota %d, conceito: E.", n1);

                    } else if( (1 <= n1) && (n1 <= 35) ){

                        printf("Nota %d, conceito: D.", n1);

                    } else if( (36 <= n1) && (n1 <= 60) ){

                        printf("Nota %d, conceito: C.", n1);

                    } else if( (61 <= n1) && (n1 <= 85) ){
                        
                        printf("Nota %d, conceito: B.", n1);

                    } else if( (86 <= n1) && (n1 <= 100) ){

                        printf("Nota %d, conceito: A.", n1);
                    }

                } else {

                    printf("Nota %d nao corresponde ao programa.", n1);

                }


                break;

        }

    } while(selector != 0);

    printf("\nFim do programa.");

    return 0;
}