#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero1, numero2, numero3;
	printf("Digite um número\n");
	scanf("%d", &numero1);
	printf("Digite outro número\n");
	scanf("%d", &numero2);
	printf("Digite mais um número\n");
	scanf("%d", &numero3);
	if(numero1 < numero2 && numero2 < numero3)
	printf("Ordem: , %d, %d, %d\n", numero1, numero2, numero3);
	if(numero1 < numero3 && numero3 < numero2)
	printf("Ordem: %d, %d %d\n", numero1, numero3, numero2);
	if(numero2 < numero1 && numero1 < numero3)
	printf("Ordem: %d, %d, %d\n", numero2, numero1, numero3);
	if(numero2 < numero3 && numero3 < numero1)
	printf("Ordem: %d, %d, %d", numero2, numero3, numero1);
	if(numero3 < numero1 && numero1 < numero2)
	printf("Ordem: %d, %d, %d", numero3, numero1, numero2);
	if(numero3 < numero2 && numero2 < numero1)
	printf("Ordem: %d, %d, %d", numero3, numero2, numero1);
	return 0;
}
