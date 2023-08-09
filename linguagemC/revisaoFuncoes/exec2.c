#include<stdio.h>

float calculaMedia(float n1,float n2, float n3, char letra){
    if(letra == 'a' || letra == 'A'){
        return ((n1+n2+n3)/3);
    }
    if(letra == 'p' || letra == 'P'){
        return ((n1*5 + n2*3 + n3*2)/10);
    }
    return 0;
}

int main(){
    float n1,n2,n3,resultado;
    char letra;
    scanf("%f%f%f",&n1,&n2,&n3);
    getchar();
    scanf("%c",&letra);
    resultado = calculaMedia(n1,n2,n3,letra);
    if(!resultado){
        printf("Opcao invalida");
    }else{
        
        printf("O resultado eh %.2f",resultado);
    }
    
    return 0;
}