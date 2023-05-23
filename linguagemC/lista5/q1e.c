#include<stdio.h>
#include<math.h>

void main(){
	float numero=1;
	while(numero!=6){
		scanf("%f",&numero);
		printf("Seu quadrado eh %.2f\n\n",pow(numero,2));
	}
}
