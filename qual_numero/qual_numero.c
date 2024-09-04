#include <stdio.h>
#include <stdlib.h>

int main(){
    int resposta = 500, chute;
    printf("Qual é o número? ");
    scanf("%d", &chute);
    while (chute != resposta){
        printf("\nTente novamente: ");
        scanf("%d", &chute);
    }
    printf("Acertou, parabéns!\n");
    return 0;
}