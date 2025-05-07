// 2 - Solicite 5 números. Exiba os que estão acima da média.

#include <stdio.h>

int main (void){
    int num[5];
    int cont = 0;
    printf("coloque 5 números: ");
    
    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
        if (num[i] > 6){
            cont++;
        }
    }
    printf("%d Números são acima que a média... \n", cont);
    return 0;
}
