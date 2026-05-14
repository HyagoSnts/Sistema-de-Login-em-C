/*
	Name: Sistema de Login em C
	Author: Hyago santos
	Date: 14/05/26 19:00
	Description: Projetoutilizando funções 
				recursivas para validar usuário e senha.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void lerLogin();
void lerSenha();

char usuario[] = "hyago";
int senha = 123;
int cont = 0;

main()
{
	lerLogin();	
}

void lerLogin()
{
	char user[20];
	
	printf("Usuario: ");
	fgets(user, sizeof(user), stdin);
	
	//remover o ENTER do fgets
	user[strcspn(user, "\n")] = '\0';
	
	if(strcspn(usuario, user) != 0){
		puts("Erro no usuario! tente novamente!");
		lerLogin();
	}else{
		lerSenha();
	}
}

void lerSenha()
{
	int pwd;
	
	printf("Senha: ");
	scanf("%d", &pwd);
	
	if(senha != pwd){
		cont++;
	
	if(cont < 3){
		printf("\nSenha invalida!!\n");
		printf("Voce tem mais %d tentativas\n", 3-cont);
		lerSenha();
	}else{
		printf("\nNumero de tentativas excedido!\n");
		exit(0);
		}
		
	} else {
		puts("\nLogin com sucesso!!");
	}
}






