#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXIMO 50

int peden (int);
float calcmedia(int, float*);
float calcvar(int, float*);
float sqr(float);

int main(){
    float valor[MAXIMO];
    int i, nnum;
    nnum = peden(MAXIMO);

    for (i = 0; i < nnum; i++){
        printf("\nDigite o número[%d]: ", i);
        scanf("%f", &valor[i]);
    }

    printf("\nMedia...........: %6.2f", calcmedia(nnum, valor));
    printf("\nVariancia.......: %6.2f", calcvar(nnum, valor));
    printf("\nDesvio Padrão...: %6.2f\n", sqrt(calcvar(nnum, valor)));
    return 0;
}

int peden(int maximo){
    int n;
    do {
        printf("Quantos números vai digitar (0 - %2d): ", maximo);
        scanf("%d", &n);
        if(n < 1 || n > maximo){
            printf("\nDigita certo!\n%d Não é um valor valido...\n", n);
        }
    } while (n > maximo || n < 1);    
    return n;
}

float calcmedia(int n, float *y){
    float media = 0.0;
    int i;
    for(i = 0; i < n; i++){
        media += y[i]/n;
    }
    return media;
}

float calcvar(int n, float *y){
    float media = calcmedia(n, y), variancia = 0;
    int i;
    for (i = 0; i < n; i++){
        variancia += sqr(y[i]-media);
    }
    variancia = variancia / (n - 1);
    return variancia;
}

float sqr(float y){
    return y*y;
}