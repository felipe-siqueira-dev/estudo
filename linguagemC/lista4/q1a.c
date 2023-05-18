
#include<stdio.h>

void main(){
	int i,soma,valor;
	soma=0;
	for(i = 0; i < 20 ; i++ ){
		scanf("%d",&valor);
		soma+=valor;
	}
	printf("O valor da soma eh: %d\n",soma);
}
