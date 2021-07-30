/* Faça um algoritmo para ler pelo teclado duas matrizes de números reais 5×3 e
imprimir a soma dessas matrizes. Crie e utilize três funções: uma para a leitura das
matrizes, outra para calcular a soma e uma terceira para imprimir a matriz com o
resultado da soma. */
#include<stdio.h>
#include <locale.h>
#define A 5
#define B 3
void preencheMatriz (float matrizA[][B], float matrizB[][B]);
void somaMatriz (float matrizA [][B], float matrizB[][B], float matrizC[][B]);
void imprimeSoma (float matrizC[][B]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	float matrizA [A][B],matrizB[A][B], matrizC[A][B];
	preencheMatriz(matrizA, matrizB);
	somaMatriz(matrizA,matrizB, matrizC);
	imprimeSoma(matrizC);
	
	return 0;
}
void preencheMatriz (float matrizA[][B], float matrizB[][B]){
	int i,j;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			printf("Escolha um valor para matrizA[%d][%d]: ", i+1,j+1);
			scanf("%f", &matrizA[i][j]);
		}
		printf("\n");
		for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			printf("Escolha um valor para matrizB[%d][%d]: ", i+1,j+1);
			scanf("%f", &matrizB[i][j]);
		}
		
		printf("\n");
		printf("Matriz A:\n");
		for(i=0;i<A;i++){
			for(j=0;j<B;j++){
				printf("%.f ", matrizA[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		
		printf("Matriz B:\n");
		for(i=0;i<A;i++){
			for(j=0;j<B;j++){
				printf("%.f ", matrizB[i][j]);
			}
			printf("\n");
		}
		printf("\n");
}

void somaMatriz(float matrizA[][B], float matrizB[][B], float matrizC[][B]){
	int i, j;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
		}
}

void imprimeSoma (float matrizC [][B]){
	int i, j;
	printf("Matriz C:\n");
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			printf("%.f ", matrizC[i][j]);
		}
		printf("\n");
	}
}
