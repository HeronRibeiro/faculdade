#include <stdio.h>

void exercicio1() {

    int aluno;
    char resp = 's';

    int menor10 = 0;
    int entre10e15 = 0;
    int maior15 = 0;

    while (resp == 's')
    {

        printf("Quantas vezes voce utilizou a biblioteca no ultimo mes ?\n");
        scanf("%d", &aluno);

        if (aluno < 10)
        {
            menor10++;
        }
        else if (aluno <= 15) /* Ele ja compara o aluno < 10 no if anterior */
        {
            entre10e15++;
        }
        else /* nao precisa do if(aluno < 15) pois ja fez todas as outras verificações */
        {
            maior15++;
        }

        printf("Deseja continuar com a pesquisa ? ");
        scanf(" %c", &resp);
    }

    printf("\nFim da pesquisa.\n\n");

    printf("Alunos que frequentaram menos que 10 vezes: [%d].\n", menor10);
    printf("Alunos que frequentaram entre 10 e 15 vezes: [%d].\n", entre10e15);
    printf("Alunos que frequentaram mais que 15 vezes: [%d].\n", maior15);

}

void exercicio2() {

    float notas;
    float maiorN = 0, menorN = 10, result = 0;

    for(int i = 1; i <= 40; i++) {

        printf("Aluno %d, informe sua nota de 0 a 10: ", i);
        scanf("%f", &notas);

        while( (notas < 0) || (notas > 10) ) {

            printf("\n\nNota informada nao esta entre 0 e 10, informe uma nota correta: ");
            scanf("%f", &notas);

        }
    
        if(notas > maiorN) {
            maiorN = notas;
        } else 
        if(notas < menorN) {
            menorN = notas;
        }

        result += notas;

    }

    printf("Maior nota: [%f].\n", maiorN);
    printf("Menor nota: [%f].\n", menorN);
    printf("Media dos alunos: [%f].\n", result/40);


}

int main()
{
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
                exercicio2();
                printf("\n\n\n");
                break;

            

            default:
                break;   

        }

    } while(separador != 0);

    return 0;
}