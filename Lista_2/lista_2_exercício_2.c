/*Fa�a um programa na linguagem C que leia o nome, sexo e ano de nascimento de uma
pessoa e exibe as seguintes informa��es:
? Idade da pessoa
? Classifica��o Et�ria da pessoa, de acordo com o seguinte crit�rio:
o Idade at� 25 anos � Jovem Adulto.
o Idade at� 45 anos � Adultos.
o Idade at� 55 anos � Adulto Experiente.
o Idade at� 65 anos � Adultos S�nior.
o Idade > 65 � Vov� � Se o sexo = 'M' ou 'm' /Vov� � Se o sexo = 'F' ou 'f'.s*/
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
	printf("Adulto s�nior\n");
	if(2021-nascimento>65){
		if(sexo == 'f' || sexo == 'F')
		printf("Vov�\n");
		if(sexo == 'm' || sexo == 'M')
		printf("Vov�\n");
	}
	return 0;
}
