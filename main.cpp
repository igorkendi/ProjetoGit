#include<stdio.h>

int main(){

    int numero, fatorial;
    printf("Digite um numero:");
    scanf("%d", &numero);

    while(numero > 0){
        fatoria = fatorial * numero;

        numero--;
    }

    printf("Fatorial do numero digitado = %d \n", fatorial);


    return 0;
}