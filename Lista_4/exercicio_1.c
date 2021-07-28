/* Faça um algoritmo para ler pelo teclado uma matriz 5×4 com valores reais e
imprimir o maior valor presente na matriz e a sua posição (linha e coluna). Crie e utilize
duas funções: uma para a leitura da matriz e outra para imprimir as informações. */
#include<stdio.h>
#include <locale.h>
#define A 5
#define B 4
void preencheMatriz (float matriz[][B]);
void imprimeMaior (float matriz [][B]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	float matriz [A][B];
	preencheMatriz(matriz);
	imprimeMaior(matriz);
	return 0;
}
void preencheMatriz (float matriz[][B]){
	int i,j;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			printf("Escolha um valor para M[%d][%d]: ", i+1,j+1);
			scanf("%f", &matriz[i][j]);
		}
		
		for(i=0;i<A;i++){
			for(j=0;j<B;j++){
				printf("%.f ", matriz[i][j]);
			}
			printf("\n");
		}
}
void imprimeMaior (float matriz [][B]){
	int i, j, imaior,jmaior;
	float maior = -999999;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			if(matriz[i][j]>maior){
				maior = matriz[i][j];
				imaior= i;
				jmaior = j;
			}
		}
	printf("O maior valor da matriz é %.f, e se encontra na posição [%d][%d]\n", maior,imaior+1,jmaior+1);
}
