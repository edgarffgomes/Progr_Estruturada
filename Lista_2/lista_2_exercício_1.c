/*Fa�a um programa na linguagem C que leia o nome, idade, sexo e a mensalidade de dois
alunos e exiba as seguintes informa��es:
Quem � o mais velho?
Quem paga a mensalidade mais barata?
Informe "HOMEM" quando o sexo for 'm'; e "MULHER" quando o sexo for 'f'.*/
#include<stdio.h>
#include<string.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome1[20], nome2[20], sexo1,sexo2;
	int idade1, idade2;
	printf("Digite o nome da primeira pessoa\n");
	scanf("%s", nome1);
	printf("Digite o sexo da primeira pessoa\n");
	scanf(" %c", &sexo1);
	printf("Digite a idade da primeira pessoa\n");
	scanf("%d", &idade1);
	printf("Digite o nome da segunda pessoa\n");
	scanf("%s", nome2);
	printf("Digite o sexo da segunda pessoa\n");
	scanf(" %c", &sexo2);
	printf("Digite a idade da segunda pessoa\n");
	scanf("%d", &idade2);
	
	
	if(idade1>idade2)
	printf("%s � mais velho(a) que %s\n", nome1, nome2);
	if(idade1 == idade2)
	printf("Ambos(as) tem a mesma idade\n");
	if(idade1<idade2)
	printf("%s � mais velho(a) que %s\n", nome2, nome1);
	
	
	if(sexo1 == 'm' || sexo1 == 'M')
	printf("%s � homem\n", nome1);
	if(sexo1 == 'f' || sexo1 == 'F')
	printf("%s � mulher\n", nome1);
	if(sexo2 == 'm' || sexo2 == 'M')
	printf("%s � homem\n", nome2);
	if(sexo2 == 'f' || sexo2 == 'F')
	printf("%s � mulher\n", nome2);
	return 0;
}
