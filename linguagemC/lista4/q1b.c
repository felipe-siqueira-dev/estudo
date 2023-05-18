
#include<stdio.h>

void main(){
	int i,valor;
	for(i = 0; i < 10 ; i++ ){
		scanf("%d",&valor);
		if(valor > 0){
			printf("O seu dobro é: %d\n",valor*2);
		}else{
            i--;
        }
	}
}
