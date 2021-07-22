/* Faça um algoritmo para preencher um vetor (de tamanho 30) com elementos gerados aleatoriamente de 1 a
100, de maneira que não sejam inseridos números iguais no vetor. Ou seja, todos os números contidos no vetor
têm que ser distintos. Crie e utilize duas funções: uma para preencher o vetor e outra para imprimi-lo. */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <locale.h>
#define tam 30
void preencheVetor(int vetor[]);
void imprimeVetor (int vetor[]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	int vetor[tam];
	preencheVetor(vetor);
	imprimeVetor(vetor);
	return 0;
}
void preencheVetor(int vetor[]){
	int i=0, j, ver;
	srand(time(NULL));
	do{
		ver=0;
		vetor[i] = rand () % 100 + 1;
		for(j<0;j<i;j++){
			if(vetor[i] == vetor[j])
			ver = 1;
		}
		if(ver == 0){
			i++;
		}
	} while (i<30);
}
void imprimeVetor(int vetor[]){
	int i;
	for (i=0;i<tam;i++){
		printf ("%d ", vetor[i]);
	}
}
