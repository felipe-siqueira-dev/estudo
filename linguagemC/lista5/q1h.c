#include<stdio.h>

void main()
{
	int numeroConta=1;
	float saldo,percentual,qtdNegativo=0,qtdTotal=0;
	while(numeroConta>0){
		scanf("%d",&numeroConta);
		if(numeroConta>0){
			scanf("%f",&saldo);
			qtdTotal++;
			if(saldo < 0){
				qtdNegativo++;
				printf("Saldo Negativo\n");
			}else if(saldo > 0){
				printf("Saldo Positivo\n");
			}else{
				printf("Conta zerada\n");
			}
		}
	}
	percentual=(qtdNegativo/qtdTotal)*100;
	printf("O percentual de pessoas com saldo negativo eh %.2f ",percentual);
}
