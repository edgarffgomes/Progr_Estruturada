/* Fa�a um algoritmo para verificar se uma matriz quadrada 10�10 gerada
aleatoriamente com n�meros de 1 at� 50 � sim�trica. Crie e utilize duas fun��es: uma
para a gera��o da matriz e outra para a verifica��o. De acordo com o retorno da fun��o
de verifica��o, deve-se imprimir na fun��o main: �MATRIZ SIMETRICA� ou
�MATRIZ NAO SIMETRICA�. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdlib.h>
#define A 10
#define B 10
void preencheMatriz (int matriz[][B]);
int verificaSimetria (int matriz [][B]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	int matriz [A][B];
	preencheMatriz(matriz);
	if(verificaSimetria(matriz) == 1)
	printf("A matriz � sim�trica");
	else
	printf("A matriz n�o � sim�trica");
	return 0;
}

void preencheMatriz (int matriz[][B]){
	int i,j;
	srand(time(NULL));
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			matriz[i][j] = rand () % 50 +1;
			printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
}

int verificaSimetria (int matriz [][B]){
	int i, j, ver=0;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			if(matriz[i][j] == matriz[j][i])
			ver++;
		}
	if(ver == 100)
	return 1;
	else
	return 0;
}
