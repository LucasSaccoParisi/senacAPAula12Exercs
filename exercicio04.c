// 4 - Crie e preencha o mesmo vetor de 100 números. Calcule a soma de todos que são menores que a média dos 10 últimos.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void){
    int num[100];
    int soma = 0;
    int media;
    int menorQMedia = 0;

    menorQMedia < media;

    for(int i = 0; i < 100; i++){
        num[i] = rand() % 100 + 1;
        printf("%d \n", num[i]);
        soma += num[i];

        if (num[i] < media){
            menorQMedia += num[i] < media;
        }
    }

    media = soma / 100;

    printf("\n%d\n", menorQMedia);

    return 0;
}

//**Resultado:**
// 100
