#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exercicio1() { 
    
    int numerador;
    
    printf("Informe o numero que deseja verificar os pares: ");
    scanf("%d", &numerador);

    for(int i=1; i<=numerador; i++) {
        
        if(i % 2 == 0) {
            printf("%d e par.\n", i);
        } else;

    }

}

void exercicio2() {

    int numerador, contador = 0;

    printf("Informe o numero que deseja fazer a somatoria: ");
    scanf("%d", &numerador);

    for(int i = 1; i <= numerador; i++) {
        contador += i;
    }
    printf("A somatoria e: %d", contador);
}

void exercicio3() {

    int contador = 0;
    float nota1, nota2, result = 0, mediaSala = 0;

    for(int i = 1; i <= 5; i++) {
        
        printf("Aluno %d, informe suas notas 1 e 2:\n", i);
        scanf(" %f %f", &nota1, &nota2);

        result = (nota1 + nota2) / 2;
        mediaSala += result;

        if(result >= 6) {
            
            contador += 1;
            
            printf("Aluno aprovado, media = %.2f.\n\n", result);

        } else {

            printf("Aluno REPROVADO, media = %.2f.\n\n", result);

        }

    }

    printf("\nNumero de alunos aprovados: %d\n", contador);
    printf("Media da turma: %.2f", mediaSala/5);

}

void exercicio4() {
    
    for(int i = 1; i <= 1000; i++) {
        if( i % 2 == 0) {
            printf("Numero par: %d.\n", i);
        }
    }
}

void exercicio5() {

    for(int i = 1000; i > 0; i--) {
        printf("%d.\n", i);
    }
}

void exercicio6() {

    int numb, cont = 0;

    for(int i = 0; i < 10; i++) {

        printf("Informe o numero %i: ", i);
        scanf("%d", &numb);

        if(numb >= 10 && numb <= 150) {
            cont++;
        }
    }

    printf("%d numeros estao entre 10 e 150.", cont);
}

void exercicio7() {

    float custo, venda, medCusto = 0, medVenda = 0;

    for(int i = 1; i <= 4; i++) {

        printf("Informe o valor de custo: R$");
        scanf("%f", &custo);
        printf("Informe o valor de venda: R$");
        scanf("%f", &venda);

        medCusto += custo;
        medVenda += venda;

        if(custo > venda) {

            printf("Prejuiso no produto %d de: R$%.2f\n\n", i, (custo - venda));

        } else if(venda > custo) {

            printf("Lucro no produto %d de: R$%.2f\n\n", i, (venda - custo));

        } else {

            printf("Empatou dinheiro no produto %i.\n\n", i);

        }

    }

    printf("Media de custo: R$%.2f.\n", (medCusto / 4));
    printf("Media de venda: R$%.2f.\n", (medVenda / 4));
}

int main() {
    setlocale(LC_ALL, "");

    int separador;
    

    do{

    printf("\nInforme o nome do exercicio que deseja ver: [digite 0 para sair]\n");
    scanf("%d", &separador);
    
    system("cls");

        switch(separador) { 

            case 1:
                exercicio1();
                printf("\n\n");
                break;
            
            case 2:
                exercicio2();
                printf("\n\n");
                break;

            case 3:
                exercicio3();
                printf("\n\n");
                break;

            case 4:
                exercicio4();
                printf("\n\n");
                break;

            case 5:
                exercicio5();
                printf("\n\n");
                break;

            case 6:
                exercicio6();
                printf("\n\n");
                break;

            case 7:
                exercicio7();
                printf("\n\n");
                break;

            default:
                break;

        }

    } while(separador != 0);

    system("exit");

    return 0;
}