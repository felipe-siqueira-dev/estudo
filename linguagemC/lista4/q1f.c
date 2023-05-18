#include<stdio.h>

void main(){
	char nome[20],sexo;
	int idade,i;
	for(i = 0; i < 3 ; i++ ){
		fgets(nome,20,stdin);
		scanf("%d",&idade);
		getchar();
		scanf("%c",&sexo);
		getchar();
		if(idade > 21){
			if(sexo == 'm' || sexo== 'M'){
			printf("Pessoa maior de 21 e do sexo masculino: %s",nome);
			}
		}
		printf("\n");
	}
}