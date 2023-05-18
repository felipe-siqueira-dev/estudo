#include<stdio.h>

void main()
{
	int i, opiniao, qtdRegular, qtdExcelente, qtdBom;
	float idade, mediaIdades,somaIdades,porcentagem;
	mediaIdades=0;
	qtdRegular=qtdBom=qtdExcelente=0;
	printf("Informe a sua idade e selecione uma das opções abaixo com relação ao filme:\n3 - Excelente\n2 - Bom\n1 - Regular\n");	
	for( i = 0 ; i < 20; i++){
		scanf("%f%d",&idade,&opiniao);
		if(opiniao==3){
			somaIdades+=idade;
			qtdExcelente++;
		}else if(opiniao==1){
			qtdRegular++;
		}else if(opiniao==2){
			qtdBom++;
		}
	}
	porcentagem=(qtdBom*100)/i;
	mediaIdades=somaIdades/qtdExcelente;
	printf("A media das idades de pessoas que responderam Excelente: %.2f",mediaIdades);
	printf("\nA quantidade de pessoas que responderam regular: %d",qtdRegular);
	printf("\nA porcentagem de pessoas que responderam Bom entre todos: %.2f porCento\n",porcentagem);
}