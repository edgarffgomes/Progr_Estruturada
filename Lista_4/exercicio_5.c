/*  Fa�a um algoritmo para imprimir o resultado da multiplica��o de um n�mero lido
pelo teclado (lido na fun��o main) por uma matriz de inteiros 5�15 gerada
aleatoriamente com n�meros de 0 at� 29. Crie e utilize tr�s fun��es: uma para a gera��o
da matriz, outra para calcular a multiplica��o e uma terceira para imprimir a matriz com
o resultado da multiplica��o. */

#include<stdio.h>
#include <locale.h>
#include<stdlib.h>
#include <time.h>
#define A 5
#define B 15
void preencheMatriz (int matriz[][B]);
void multiplicaMatriz (int matriz [][B], int numero);
void imprimeMult (int matriz [][B]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	int matriz [A][B], numero;
	preencheMatriz(matriz);
	printf("Digite um n�mero para multiplicar a matriz: ");
	scanf("%d", &numero);
	multiplicaMatriz(matriz, numero);
	imprimeMult (matriz);

	
	return 0;
}
void preencheMatriz (int matriz[][B]){
	int i,j;
	srand(time(NULL));
	printf("Matriz: \n");
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){ 
			matriz[i][j] = rand () % 29 + 0;
			printf(" %d", matriz[i][j]);
		}
		printf("\n");
	}
}
		
void multiplicaMatriz (int matriz [][B], int numero){
	int i, j;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			matriz[i][j] = matriz[i][j] * numero;
		}
}

void imprimeMult (int matriz [][B]){
	int i,j;
	printf("Matriz multiplicada: \n");
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			printf(" %d ", matriz[i][j]);
		}
		printf("\n");
	}
}
