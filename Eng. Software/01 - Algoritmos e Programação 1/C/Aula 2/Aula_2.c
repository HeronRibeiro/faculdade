#include <stdio.h>
#include <locale.h>

int main() { 
	
	setlocale(LC_ALL, "Portuguese");
	int selector = 1;
	do{
		printf("\nInforme o selecionador(digite 0 para sair): ");
		scanf("%d", &selector);
		
		switch(selector) {
			
			case 1:
				
				float nota1, nota2, media;
				int freq, aula = 20;
				
				printf("Digite a nota 1 do aluno: ");
				scanf("%f", &nota1);
				
				printf("\nDigite a nota 2 do aluno: ");
				scanf("%f", &nota2);
				
				printf("\nInforme tambem as faltas do aluno: ");
				scanf("%d", &freq);
				
				media = (nota1 + nota2)/2;
				
				
				if(media > 7 && freq > freq*100/20) { //Media > 7 e Freq > 75%
					printf("Aluno aprovado com média %f, frequencia %d.", media, freq);
				}
				if((media > 7 && freq < 75) || (media < 7 && freq > 75) || (media < 7 && freq < 75)) { //Media > 7 e Freq < 75% ou Media < 7 e Freq > 75%
					printf("Aluno reprovado com média %f, frequencia %d.", media, freq);
				}
				
				
				printf("\n\n");
	
			break;
				
			case 2:
				
				int num1, num2;
				
				printf("Informe os dois numeros que deseja comparar:\n");
				scanf(" %d%d", &num1, &num2);
				
				if(num1 > num2) {
					printf("\n%d maior que %d.", num1, num2);
				}
				else {
					printf("\n%d maior que %d.", num2, num1);
				}
				
				printf("\n\n");
				
			break;
				
			case 3:

				char sex;
				
				printf("Informe seu sexo: [M, m para masculino ou F, f para feminino]\n");
				scanf(" %c", &sex);
				
				if(sex == 'M' || sex == 'm') {
					printf("Masculino.");
				}
				if(sex == 'F' || sex == 'f') {
					printf("Feminino.");
				}
			break;
			
			printf("\n\n");
			
			default:
				printf("\n\n");
				break;
		}
	}while(selector != 0);
	
	printf("\nSaiu do laço.");

	return 0;
}
