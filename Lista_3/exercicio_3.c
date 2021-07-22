/* Considere um vetor com 40 n�meros inteiros positivos gerados aleatoriamente de 1 a 100. Fa�a um algoritmo
para verificar o n�mero de vezes que um n�mero inteiro positivo n lido pelo teclado aparece neste vetor. O
programa tamb�m deve informar em quais posi��es (�ndices) do vetor o n�mero aparece, caso ele perten�a ao
vetor. Crie e utilize duas fun��es: uma para preencher o vetor e outra para realizar a verifica��o.
Obs. 1: O seu programa deve verificar primeiro quantas vezes o n�mero n aparece no vetor. Depois, se ele
aparecer alguma vez no vetor, imprimir as posi��es que ele aparece. Se ele n�o pertencer ao vetor, seu programa
deve imprimir: "N�mero n�o pertence ao vetor".
Obs. 2: O exemplo da Figura 1 preenche e imprime um vetor com 10 n�meros inteiros positivos de 1 at� 10
gerados aleatoriamente. */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <locale.h>
#define tam 40
void preencheVetor(int vetor[]);
void verificaNumero (int vetor[]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	int vetor[tam];
	preencheVetor(vetor);
	verificaNumero(vetor);
	return 0;
}
void preencheVetor(int vetor[]){
	int i;
	for (i=0;i<tam;i++){
		vetor[i] = rand () % 100 +1;
		printf("%d ", vetor[i]);
	}
	printf("\n");
}
void verificaNumero (int vetor[]){
	int i, numero, aux=0;
	printf("Digite o n�mero que deseja verificar: ");
	scanf("%d", &numero);
	for(i=0;i<tam;i++){
		if(vetor[i] == numero)
		aux++;
	}
	if(aux>0)
	printf("O n�mero aparece no vetor\n");
	else
	printf("O n�mero n�o aparece no vetor\n");
	for(i=0; i<tam;i++){
		if(vetor[i] == numero)
		printf("O n�mero aparece na posi��o: %d\n", i+1);
	}
}
