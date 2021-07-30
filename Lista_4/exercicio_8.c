/* Fa�a um algoritmo para verificar se uma dada matriz quadrada 15�15 gerada
aleatoriamente com n�meros de 0 at� 19 � uma matriz identidade. Crie e utilize duas
fun��es: uma para a gera��o da matriz e outra para a verifica��o. De acordo com o
retorno da fun��o de verifica��o, deve-se imprimir na fun��o main: �MATRIZ
IDENTIDADE� ou �MATRIZ NAO E IDENTIDADE�. */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdlib.h>
#define A 15
#define B 15
void preencheMatriz (int matriz[][B]);
int verificaIdentidae (int matriz [][B]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	int matriz [A][B];
	preencheMatriz(matriz);
	if(verificaIdentidade(matriz) == 1)
	printf("MATRIZ IDENTIDADE");
	else
	printf("MATRIZ N�O � IDENTIDADE");
	return 0;
}

void preencheMatriz (int matriz[][B]){
	int i,j;
	srand(time(NULL));
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			matriz[i][j] = rand () %  19;
			printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
}

int verificaIdentidade (int matriz [][B]){
	int i, j, ver=0;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			if((i == j && matriz[i][j] == 1) || (i!=j && matriz[i][j] == 0))
			ver++;
		}
	if(ver == 225)
	return 1;
	else
	return 0;
}


