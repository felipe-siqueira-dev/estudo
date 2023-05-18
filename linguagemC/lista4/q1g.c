#include<stdio.h>

void main()
{
	float numeros,media;
	int i;
	media=0;
	for ( i = 0 ; i < 12 ; i++ ){
		scanf("%f",&numeros);
		media+=numeros;
	}
	printf("A media dos numeros lidos eh: %.2f\n",media/12);
}