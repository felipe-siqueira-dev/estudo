#include<stdio.h>

void main(){
	int validador, numero;
	validador=1;
	while(validador){
		scanf("%d",&numero);
		if(numero%10==0){
			printf("Numero divisivel por 10,5 e 2\n");
		}else{
			printf("Nao eh divisivel por 10,5 ou 2");
		}
		printf("\nDeseja parar?\n1 - Continuar\n0 - Parar\n");
		scanf("%d",&validador);
	}
}
