#include<stdio.h>

void main()
{
	int numero=1,contador=0;
	printf("Informe um numero:\n");
	while(numero){
		scanf("%d",&numero);
		if(numero>=100 && numero<=200){
			contador++;
		}
	}
	printf("\nForam lidos %d numeros entre 100 e 200\n",contador);
}
