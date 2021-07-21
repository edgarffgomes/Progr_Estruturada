/*Faça um programa na linguagem C que leia o nome, sexo e ano de nascimento de uma
pessoa e exibe as seguintes informações:
? Idade da pessoa
? Classificação Etária da pessoa, de acordo com o seguinte critério:
o Idade até 25 anos – Jovem Adulto.
o Idade até 45 anos – Adultos.
o Idade até 55 anos – Adulto Experiente.
o Idade até 65 anos – Adultos Sênior.
o Idade > 65 – Vovô – Se o sexo = 'M' ou 'm' /Vovó – Se o sexo = 'F' ou 'f'.s*/
#include<stdio.h>
#include<string.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	char nome[20], sexo;
	int nascimento;
	printf("Digite o nome\n");
	scanf("%s", nome);
	printf("Utilize 'f' para feminino ou 'm' para masculino\n");
	scanf(" %c", &sexo);
	printf("Digite a data de nascimento\n");
	scanf("%d", &nascimento);
	if(2021-nascimento<=25)
	printf("Jovem adulto\n");
	if(2021-nascimento>25 && 2021-nascimento<=45)
	printf("Adulto\n");
	if(2021-nascimento>45 && 2021-nascimento<=55)
	printf("Adulto experiente\n");
	if(2021-nascimento>55 && 2021-nascimento<=65)
	printf("Adulto sênior\n");
	if(2021-nascimento>65){
		if(sexo == 'f' || sexo == 'F')
		printf("Vovó\n");
		if(sexo == 'm' || sexo == 'M')
		printf("Vovô\n");
	}
	return 0;
}
