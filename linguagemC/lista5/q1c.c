#include<stdio.h>

void main(){
	int numero,validador=1;
	while(validador){
		printf("Informe um valor entre 1 e 4\n");
		scanf("%d",&numero);
		if(numero==1 || numero==2 || numero==3 || numero==4){
			printf("O numero informado foi %d\n",numero);
			validador=0;
		}else{
			printf("\nValor invalido\n");
			validador=1;
		}
	}
	
	
}
