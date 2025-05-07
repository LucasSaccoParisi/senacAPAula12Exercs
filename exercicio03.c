// 3 - Crie um vetor de 100 posições, preencha com números aleatórios de 1 a 100. Exiba a média destes.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void){
    int num[100];
    int soma = 0;
    int media;
    
    for(int i = 0; i < 100; i++){
        num[i] = rand() % 100 + 1;
        printf("%d \n", num[i]);
        soma += num[i];
    }
    
    media = soma / 100;
    printf("\n%d \n", media);
    return 0;
}

//**resultado:**
// 52
