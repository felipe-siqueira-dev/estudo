#include<stdio.h>

int somaDivisores(int valor){
	int soma=0;
	for(int i = 1; i < valor; i++){
		if(valor%i==0){
			soma+=i;
		}
	}
	return soma;
}

int verificador(int valor){
    if(valor>0)
        return 1;
    return 0;
}

int main(){
	int resultado,verifica,valor,acumulador = 0;
	do{
	    scanf("%d",&valor);
	    verifica = verificador(valor);
	    if(verifica){
	        resultado = somaDivisores(valor);
		    printf("%d\n",resultado);
		    acumulador++;
	    }
	    
	}while(acumulador<5);
	return 0;
}