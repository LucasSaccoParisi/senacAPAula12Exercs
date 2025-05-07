// 7 - Extra: Vetor 10 posições, números aleatórios, verificar se existem valores iguais.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

bool verify(int num[10]){

    for(int i = 0; i < 10; i++){
        num[i] = rand() % 10 + 1;

        return num[i] == num[i];
    }
}

int main (void){

    if (verify){
        printf("\ntrue\n");
    } else {
        printf("\nfalse\n");
    }
    
    return 0;
}

//**Resultado:**
// true
