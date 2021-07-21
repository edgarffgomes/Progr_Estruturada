//Faça um programa C que leia três números e imprima o maior deles.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float numero1, numero2, numero3;
	printf("Digite um número\n");
	scanf("%f", &numero1);
	printf("Digite outro número\n");
	scanf("%f", &numero2);
	printf("Digite mais um número\n");
	scanf("%f", &numero3);
	if(numero1>numero2 && numero1>numero3)
	printf("O maior numero é %.f\n", numero1);
	if(numero2>numero1 && numero2>numero3)
	printf("O maior numero é %.f\n", numero2);
	if(numero3>numero1 && numero3>numero2)
	printf("O maior numero é %.f\n", numero3);
	return 0;
}
