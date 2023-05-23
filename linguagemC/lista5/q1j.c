#include<stdio.h>

void main(){
	char nome[20];
	float n1,n2,n3,n4,n5,percentual,qtd3=0,qtdTotal=0;
	int validador=1;
	while(validador){
		printf("Informe seu nome:\n");
		fgets(nome,20,stdin);
		printf("\nInforme suas 5 notas:\n");
		scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
		qtdTotal++;
		if(n1>=7 && n2>=7 && n3>=7 && n4>=7 && n5>=7){
			printf("%s aprovado em todas as materias\n",nome);
		}else if(n1>=7 && n4>=7){
			printf("%s aprovado somente nas provas 1 e 4\n",nome);
		}else if(n3>=7){
			qtd3++;
		}
		printf("Deseja continuar?\n1-Sim\t0-Nao\n");
		scanf("%d",&validador);
		getchar();
	}
	percentual=(qtd3/qtdTotal)*100;
	printf("Percentual de alunos aprovados somente na prova 3:%.2f\n",percentual);
}
