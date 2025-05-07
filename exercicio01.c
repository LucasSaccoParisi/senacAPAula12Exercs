// 1 - Crie um vetor de inteiro de 10 posições. Insira o número 5 em todas as posições.

#include <stdio.h>

int main (void){
    int num[10];
    
    for(int i = 0; i < 10; i++){
        for(int I = 0; I < 5; I++){
            printf("%d ", num[I] = i);
        }
    }
    return 0;
}

// resultado: 0 0 0 0 0 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5 6 6 6 6 6 7 7 7 7 7 8 8 8 8 8 9 9 9 9 9
