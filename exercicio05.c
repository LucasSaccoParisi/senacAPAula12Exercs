// 5 - Escreva o conteúdo do vetor do exercício anterior na tela, colocando cada valor ao lado do anterior (na mesma linha). Se o valor do vetor for múltiplo de 10, então insira uma quebra de linha.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void){
    int num[100];

    for(int i = 0; i < 100; i++){
        num[i] = rand() % 100 + 1;
        printf("%d ", num[i]);

        if (num[i] % 10 == 0){
            printf("\n");
        }

    }

    return 0;
}

//**Resultado:**
// 84 87 78 16 94 36 87 93 50
// 22 63 28 91 60
// 64 27 41 27 73 37 12 69 68 30
// 83 31 63 24 68 36 30
// 3 23 59 70
// 68 94 57 12 43 30
// 74 22 20
// 85 38 99 25 16 71 14 27 92 81 57 74 63 71 97 82 6 26 85 28 37 6 47 30
// 14 58 25 96 83 46 15 68 35 65 44 51 88 9 77 79 89 85 4 52 55 100
// 33 61 77 69 40
// 13 27 87 95 40
