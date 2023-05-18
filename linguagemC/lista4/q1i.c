#include<stdio.h>

void main()
{
	int i,id,idPesada,idLeve,iniciador;
	float peso,pesoPesada,pesoLeve;
	for ( i = 0 ; i < 5 ; i++ ){
		scanf("%f%d",&peso,&id);
		if(i==0){
			pesoPesada=peso;
			idPesada=id;
			pesoLeve=peso;
			idLeve=id;
			iniciador=0;
		}else if(peso>pesoPesada){
			pesoPesada=peso;
			idPesada=id;
		}else if(peso<pesoLeve){
			pesoLeve=peso;
			idLeve=id;
		}
	}
	printf("A ovelha mais pesada eh: %d %.2f\nA ovelha mais leve eh: %d %.2f\n",idPesada,pesoPesada,idLeve,pesoLeve);
}
