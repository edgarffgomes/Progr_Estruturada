/* Fa�a um algoritmo que, dadas duas matrizes A e B de tamanho 10�10 geradas
aleatoriamente com n�meros de 1 at� 10, verifique se B � a inversa de A, isto �, se B �
igual a A-1. Se B for a inversa, a multiplica��o A�B resulta em uma matriz identidade.
Crie e utilize tr�s fun��es: uma para verificar se a matriz resultante de A�B � uma
matriz identidade, outra para a gera��o das matrizes e uma terceira para realizar a
multiplica��o delas. De acordo com o retorno da fun��o de verifica��o, deve-se
imprimir na fun��o main: �B E INVERSA DE A� ou �B NAO E INVERSA DE A�. */

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
	printf("B N�O � INVERSA DE A");
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
