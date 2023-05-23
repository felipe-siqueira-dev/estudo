#include<stdio.h>

void main(){
	int numero=1,contador=0;
	float media,acumulador=0;
	printf("Informe numeros inteiros:\n");
	while(numero){
		scanf("%d",&numero);
		if(numero%3 == 0 && numero!=0){
			contador++;
			acumulador+=numero;
		}
		printf("\n");
	}
	media = acumulador/contador;
	printf("\nA media dos numeros informados eh: %.2f",media);
}
