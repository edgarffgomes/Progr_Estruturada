/*Faça um programa C que leia dois números e imprima se são iguais ou diferentes. 
Caso sejam diferentes, imprima o maior deles.*/
#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	float numero1, numero2;
	printf("Digite um número\n");
	scanf("%f", &numero1);
	printf("Digite outro número\n");
	scanf("%f", &numero2);
	if(numero1 == numero2)
	printf("Ambos são iguais\n");
	else{
		printf("São diferentes\n");
		if(numero1>numero2)
		printf("O número %.f é maior\n", numero1);
		else
		printf("O número %.f é maior\n", numero2);
	}
	return 0;
}
