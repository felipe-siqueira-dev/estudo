#include<stdio.h>

void main(){
	int i,soma;
	soma=0;
	for(i = 1; i <= 100 ; i++ ){
		printf("%d\n",i);
		soma+=i;
	}
	printf("Soma de 1 a 100:%d\n",soma);
}