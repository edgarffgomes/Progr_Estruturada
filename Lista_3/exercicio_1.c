/* Faça um algoritmo para verificar se um número real lido pelo teclado encontra-se ou não em um vetor com
30 números reais (também lido pelo teclado). Crie e utilize duas funções: uma para preencher o vetor e outra
para verificar se o número pertence ou não ao vetor. A impressão desta informação (se o número pertence ou
não ao vetor) deve ser na função main. */
#include<stdio.h>
#include <locale.h>
#define tam 5
void preencheVetor(int vetor[]);
int verificaNumero (int vetor[]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	int vetor[tam];
	preencheVetor(vetor);
	if (verificaNumero(vetor) == 1)
	printf("O número se encontra no vetor\n");
	else
	printf("O número não se encontra no vetor\n");
	return 0;
}
void preencheVetor(int vetor[]){
	int i;
	for (i=0;i<tam;i++){
		printf("Digite um valor para a posição %d: ", i+1);
		scanf("%d", &vetor[i]);
		printf("\n");
	}
}

int verificaNumero (int vetor[]){
	int numero, i;
	printf("Digite o número que deseja verificar\n");
	scanf("%d", &numero);
	for(i=0;i<tam; i++){
		if(vetor[i] == numero)
		return 1;
	}
	return 0;
}
