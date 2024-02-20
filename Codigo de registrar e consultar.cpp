#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



	int registrar()
	{
	setlocale (LC_ALL, "Portuguese");
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome [40];
	char cargo [40];
	
	printf("\nDigite seu CPF: ");
	scanf("%s", cpf);
	
	FILE *file; //criando novo arquivo
	file = fopen(arquivo, "w");	
	fprintf(file, cpf); // salva o valor da variável
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("\nDigite seu Nome: ");
	scanf("%s", nome);
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen (arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("\nDigite seu Sobrenome: ");
	scanf("%s", sobrenome);
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen (arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("\nDigite seu cargo: ");
	scanf("%s", cargo);
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	file = fopen (arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	system("pause");
	}

int deletar()
{
printf("Voce escolheu deletar um nome\n");
system ("pause");	
}

int consultar()
{
printf("Voce escolheu consultar um registro\n");
system ("pause");
setlocale (LC_ALL, "Portuguese");
char cpf[40];
char conteudo [200];
	
printf("\n Digite o numero do CPF a ser consultado: ");
scanf("%s", cpf);

FILE *file;
file = fopen(cpf, "r");

if(cpf == NULL)
{
printf("Nao localizado na base de dados registrada");	
}

while (fgets(conteudo,200,file)!=NULL)
{
printf("os dados do CPF solicitados são: : \n");
printf("%s", conteudo);
}
system("pause");
}

int main()
{	
int opcao = 0;
int laco;
setlocale (LC_ALL, "Portuguese");
system ("cls");
for(laco=1; laco==1;)
	{

	printf("\n\nBem vindo ao sistema de registros da EBAC\n");
	printf(" \nDigite opcao 1 para registrar um novo nome: ");
	printf(" \nDigite opcao 2 para deletar um nome: ");
	printf(" \nDigite opcao 3 para consultar um novo nome: ");
	printf("\n Sair do sistema\n\n");	
	printf(" \nOpcão n°: \t");
	scanf("%d", &opcao);
	printf("Voce escolheu a opcao: %d\n", opcao);
	
	system ("cls");
	
	switch  (opcao)
	
	{
		case 1:
		registrar();
		break;
		
		case 2:
		deletar();
		break;
		
		case 3:
		consultar();
		break;
		
		case 4:
		printf("Obrigado por utilizar o sistema");
		return 0;
		break;
		
		default:
		printf("Digite novamente a opcao 1, 2 ou 3\n");
		system ("pause");
		break;
	}
	
	}
	
		
}

