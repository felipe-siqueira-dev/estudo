#include<stdio.h>

void main()
{
	char estadoCivil;
	int idade=1,qtdCasada=0,qtdSolteira=0,qtdViuvas=0,qtdSeparada=0;
	float somaViuva=0,media, percentual,qtdTotal=0;
	while(idade>0){
		printf("\nInforme a sua idade:\n");
		scanf("%d",&idade);
		if(idade>0){
			printf("\nInforme o seu estado civil:\nC-Casado   S-Solteiro   V-Viuvo   D-Desquitado   X-Separado\n\n");
			fflush(stdin);
			scanf("%c",&estadoCivil);
			getchar();
			qtdTotal++;
			if(estadoCivil == 'c' || estadoCivil == 'C'){
				qtdCasada++;
			}else if(estadoCivil == 's' || estadoCivil == 'S'){
				qtdSolteira++;
			}else if(estadoCivil == 'v' || estadoCivil == 'V'){
				somaViuva+=idade;
				qtdViuvas++;
			}else if(estadoCivil == 'd' || estadoCivil == 'D' || estadoCivil == 'x' || estadoCivil == 'X'){
				qtdSeparada++;
			}else{
				printf("\nEstado civil invalido\n");
				qtdTotal--;
			}
		}
	}
	media = somaViuva/qtdViuvas;
	percentual = (qtdSeparada/qtdTotal)*100;
	printf("A quantidade de pessoas casadas %d\n",qtdCasada);
	printf("A quantidade de pessoas solteiras %d\n",qtdSolteira);
	printf("A media das idades de pessoas viuvas eh %.2f\n",media);
	printf("A porcentagem de pessoas desquitadas ou separadas eh %.2f\n",percentual);
	
}
