/* Faça um algoritmo para ler pelo teclado uma matriz 5×5 com valores inteiros e
também um número inteiro x. Ao final, o algoritmo tem que imprimir se o número x
pertence ou não à matriz. O número x tem que ser lido na função main. Crie e utilize
duas funções: uma para a leitura da matriz e outra para realizar a busca. A impressão da
informação (se x está presente ou não na matriz) deve ser na função main. */
#include<stdio.h>
#include <locale.h>
#define A 5
#define B 5
void preencheMatriz (int matriz[][B]);
int retornaPresenca (int matriz [][B], int numero);
int main (){
	setlocale(LC_ALL, "Portuguese");
	int matriz [A][B], numero;
	preencheMatriz(matriz);
	printf("Digite um número para ser buscado na matriz: ");
	scanf("%d", &numero);
	if(retornaPresenca(matriz, numero) == 1)
	printf("O número está presente na matriz\n");
	else
	printf("O número não está presente na matriz\n");
	
	return 0;
}
void preencheMatriz (int matriz[][B]){
	int i,j;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			printf("Escolha um valor para M[%d][%d]: ", i+1,j+1);
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
		for(i=0;i<A;i++){
			for(j=0;j<B;j++){
				printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
}
int retornaPresenca (int matriz [][B], int numero){
	int i, j;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			if(matriz[i][j] == numero)
			return 1;
		}
		return 0;
}
