#include<stdio.h>

void main(){
	int idade=1, contador21=0, contador50=0,somatorio=0;
	printf("Informe varias idades\n");
	while(idade){
		scanf("%d",&idade);
		somatorio+=idade;
		if(idade<21){
			contador21++;
		}else if(idade > 50){
			contador50++;
		}
		printf("\nDeseja sair?\n0 - Sim\n1 - Nao\n");
		scanf("%d",&idade);
		printf("\n");
	}
	printf("A quantidade de pessoas menor que 21 anos eh %d\n A quantidade de pessoas maior que 50 eh %d\n",contador21,contador50);
	printf("\nO somatorio das idades eh %d\n",somatorio);
	
}
