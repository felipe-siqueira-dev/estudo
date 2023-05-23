#include<stdio.h>

void main()
{
	float numero,somatorio=0,media;
	int contador=0;
	do{
		scanf("%f",&numero);
		if(numero>0){
			somatorio+=numero;
			contador++;
		}	
	}while(numero > 0);
	media=somatorio/contador;
	printf("A qtd de numeros lidos %d\nO somatorio dos numeros lidos %.2f\nA media eh %.2f\n",contador,somatorio,media);
}
