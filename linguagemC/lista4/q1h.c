#include<stdio.h>

void main()
{
	int i,contadorPar,contadorImpar,numero;
	contadorPar=contadorImpar=0;
	for ( i = 0 ; i < 200 ; i++ ){
		scanf("%d",&numero);
		if(numero%2==0){
			contadorPar++;
		}else{
			contadorImpar++;
		}
	}
	printf("A quantidade de numeros pares eh: %d\nE a quantidade de numeros impares eh:%d\n",contadorPar,contadorImpar);
}