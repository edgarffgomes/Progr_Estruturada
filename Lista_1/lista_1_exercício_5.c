/*Fa�a um programa C que leia dois n�meros e imprima se s�o iguais ou diferentes. 
Caso sejam diferentes, imprima o maior deles.*/
#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	float numero1, numero2;
	printf("Digite um n�mero\n");
	scanf("%f", &numero1);
	printf("Digite outro n�mero\n");
	scanf("%f", &numero2);
	if(numero1 == numero2)
	printf("Ambos s�o iguais\n");
	else{
		printf("S�o diferentes\n");
		if(numero1>numero2)
		printf("O n�mero %.f � maior\n", numero1);
		else
		printf("O n�mero %.f � maior\n", numero2);
	}
	return 0;
}
