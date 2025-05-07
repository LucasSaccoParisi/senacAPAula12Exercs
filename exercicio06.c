// 6 - Crie uma função que declara e preenche um vetor de 5 números aleatórios. A função deve exibir o vetor na tela e retornar TRUE caso este vetor esteja em ordem crescente. No seu programa, chame esta função até ela retornar True.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

bool verify(int num[5]){

    for(int i = 0; i < 5; i++){
        num[i] = rand() % 5 + 1;

        return num[i] > num[i + 1];
    }
}

int main (void){

    if (verify){
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}

//**Resultado:**
// true
