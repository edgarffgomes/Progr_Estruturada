/* Faça um algoritmo que leia pelo teclado os 30 números de um vetor do tipo float e imprima na tela o maior
e o menor elementos deste vetor e a posição em que eles se encontram. Crie e utilize duas funções: uma para
preencher o vetor e outra para imprimir as informações.
Obs.: Caso o maior e o menor elementos apareçam mais de uma vez no vetor, a posição a ser impressa é a
do último maior e menor elementos. */
#include<stdio.h>
#include <locale.h>
#define tam 30
void preencheVetor(float vetor[]);
void imprimeInfo (float vetor[]);

int main (){
	setlocale(LC_ALL, "Portuguese");
	float vetor[tam];
	preencheVetor(vetor);
	imprimeInfo(vetor);
	return 0;
}
void preencheVetor(float vetor[]){
	int i;
	for (i=0;i<tam;i++){
		printf("Digite um valor para a posição %d: ", i+1);
		scanf("%f", &vetor[i]);
		printf("\n");
	}
}

void imprimeInfo(float vetor[]){
	int i, posmaior,posmenor;
	float maior=-999999, menor=999999;
	for(i=0;i<tam;i++){
		if(vetor[i]>=maior){
			maior = vetor[i];
			posmaior=i;
		}
		if(vetor[i]<=menor){
			menor = vetor[i];
			posmenor = i;
		}
	}
	printf("O maior elemento do vetor é: %.2f e se encontra na posição %d\n", maior, posmaior+1);
	printf("O menor elemento do vetor é: %.2f e se encontra na posição %d\n", menor, posmenor+1);
}
