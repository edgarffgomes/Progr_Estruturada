/* Considere um vetor com 40 números inteiros positivos gerados aleatoriamente de 1 a 100. Faça um algoritmo
para verificar o número de vezes que um número inteiro positivo n lido pelo teclado aparece neste vetor. O
programa também deve informar em quais posições (índices) do vetor o número aparece, caso ele pertença ao
vetor. Crie e utilize duas funções: uma para preencher o vetor e outra para realizar a verificação.
Obs. 1: O seu programa deve verificar primeiro quantas vezes o número n aparece no vetor. Depois, se ele
aparecer alguma vez no vetor, imprimir as posições que ele aparece. Se ele não pertencer ao vetor, seu programa
deve imprimir: "Número não pertence ao vetor".
Obs. 2: O exemplo da Figura 1 preenche e imprime um vetor com 10 números inteiros positivos de 1 até 10
gerados aleatoriamente. */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <locale.h>
#define tam 40
void preencheVetor(int vetor[]);
void verificaNumero (int vetor[]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	int vetor[tam];
	preencheVetor(vetor);
	verificaNumero(vetor);
	return 0;
}
void preencheVetor(int vetor[]){
	int i;
	for (i=0;i<tam;i++){
		vetor[i] = rand () % 100 +1;
		printf("%d ", vetor[i]);
	}
	printf("\n");
}
void verificaNumero (int vetor[]){
	int i, numero, aux=0;
	printf("Digite o número que deseja verificar: ");
	scanf("%d", &numero);
	for(i=0;i<tam;i++){
		if(vetor[i] == numero)
		aux++;
	}
	if(aux>0)
	printf("O número aparece no vetor\n");
	else
	printf("O número não aparece no vetor\n");
	for(i=0; i<tam;i++){
		if(vetor[i] == numero)
		printf("O número aparece na posição: %d\n", i+1);
	}
}
