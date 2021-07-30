/* Faça um algoritmo que, dadas duas matrizes A e B de tamanho 10×10 geradas
aleatoriamente com números de 1 até 10, verifique se B é a inversa de A, isto é, se B é
igual a A-1. Se B for a inversa, a multiplicação A×B resulta em uma matriz identidade.
Crie e utilize três funções: uma para verificar se a matriz resultante de A×B é uma
matriz identidade, outra para a geração das matrizes e uma terceira para realizar a
multiplicação delas. De acordo com o retorno da função de verificação, deve-se
imprimir na função main: “B E INVERSA DE A” ou “B NAO E INVERSA DE A”. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define A 10
void geraMatrizes (int matrizA[][A], int matrizB[][A]);
int verificaInversa (int matrizA [][A], int matrizB[][A]);
void multiplicaMatrizes(int matrizA[][A], int matrizB[][A], int matrizC[][A]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	int matrizA [A][A],matrizB[A][A];
	geraMatrizes(matrizA, matrizB);
	if(verificaInversa(matrizA, matrizB) == 1)
	printf("B INVERSA DE A");
	else
	printf("B NÃO É INVERSA DE A");
	return 0;
}
void geraMatrizes (int matrizA[][A], int matrizB[][A]){
	int i,j;
	for(i=0;i<A;i++)
		for(j=0;j<A;j++){
			matrizA[i][j] = rand () % 10 + 1;
			matrizB[i][j] = rand () % 10 + 1;
		}
	
		
		printf("\n");
		printf("Matriz A:\n");
		for(i=0;i<A;i++){
			for(j=0;j<A;j++){
				printf("%d ", matrizA[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		
		printf("Matriz B:\n");
		for(i=0;i<A;i++){
			for(j=0;j<A;j++){
				printf("%d ", matrizB[i][j]);
			}
			printf("\n");
		}
		printf("\n");
}

int verificaInversa(int matrizA[][A], int matrizB[][A]){
	int i, j,ver=0, matrizC[A][A];
	multiplicaMatrizes(matrizA, matrizB, matrizC);
	for(i=0;i<A;i++)
		for(j=0;j<A;j++){
			if((i == j && matrizC[i][j] == 1) || (i!=j && matrizC[i][j] == 0))
			ver++;
		}
		if(ver == 100)
		return 1;
		else
		return 0;
}


void multiplicaMatrizes (int matrizA[][A], int matrizB[][A], int matrizC [][A]){
	int i, j,k, aux=0;
	printf("Matriz Multiplicada:\n");
	for (i=0;i<A;i++){
		for(j=0;j<A;j++){
			aux=0;
			for(k=0;k<A;k++){
			aux+=matrizA[i][k] * matrizB[k][j];
		    }
		    matrizC[i][j]=aux;
	    }
	}
}
