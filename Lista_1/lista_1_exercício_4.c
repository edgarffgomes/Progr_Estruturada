//Fa�a um programa C que leia tr�s n�meros e imprima o maior deles.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float numero1, numero2, numero3;
	printf("Digite um n�mero\n");
	scanf("%f", &numero1);
	printf("Digite outro n�mero\n");
	scanf("%f", &numero2);
	printf("Digite mais um n�mero\n");
	scanf("%f", &numero3);
	if(numero1>numero2 && numero1>numero3)
	printf("O maior numero � %.f\n", numero1);
	if(numero2>numero1 && numero2>numero3)
	printf("O maior numero � %.f\n", numero2);
	if(numero3>numero1 && numero3>numero2)
	printf("O maior numero � %.f\n", numero3);
	return 0;
}
