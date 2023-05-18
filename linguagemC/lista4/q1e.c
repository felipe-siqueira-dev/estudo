#include<stdio.h>

void main(){
	int i;
	float valor;
	for(i = 0; i < 10 ; i++ ){
		scanf("%f",&valor);
		if(valor > 0){
			printf("A sua metade é: %.2f\n",valor/2.0);
		}
	}
}