/*Fa�a um programa C que leia os tr�s lados de um triangulo e verifique se � um
triangulo e de que tipo (equil�tero, is�sceles, escaleno).*/
#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int ladoA, ladoB, ladoC;
	printf("Digite o tamanho do lado A\n");
	scanf("%d", &ladoA);
	printf("Digite o tamanho do ladoB\n");
	scanf("%d", &ladoB);
	printf("Digite o tamanho do lado C\n");
	scanf("%d", &ladoC);
	if(ladoA == ladoB && ladoB == ladoC)
	printf("Tri�ngulo equil�tero\n");
	if((ladoA ==ladoB && ladoA!=ladoC) || (ladoA!=ladoB && ladoB == ladoC) || (ladoA != ladoB && ladoA == ladoC))
	printf("Tri�ngulo is�sceles\n");
	if(ladoA != ladoB && ladoB != ladoC && ladoA != ladoC)
	printf("Tri�ngulo escaleno\n");
	return 0;
}
