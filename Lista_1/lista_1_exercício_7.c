/*Faça um programa C que leia os três lados de um triangulo e verifique se é um
triangulo e de que tipo (equilátero, isósceles, escaleno).*/
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
	printf("Triângulo equilátero\n");
	if((ladoA ==ladoB && ladoA!=ladoC) || (ladoA!=ladoB && ladoB == ladoC) || (ladoA != ladoB && ladoA == ladoC))
	printf("Triângulo isósceles\n");
	if(ladoA != ladoB && ladoB != ladoC && ladoA != ladoC)
	printf("Triângulo escaleno\n");
	return 0;
}
