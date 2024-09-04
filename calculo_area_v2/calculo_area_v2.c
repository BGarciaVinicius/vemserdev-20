#include <stdio.h>
#include <stdlib.h>

int menu();
void quadrado();
void retangulo();
void triangulo();

int main(){
    int op;
    system("clear");
    printf("Seja bem vindo ao sistema de cálculo da área de polígonos\n\n");
    do {
        op = menu();
        if (op == 1) quadrado();
        if (op == 2) retangulo();
        if (op == 3) triangulo();
    } while (op != 4);
    return 0;
}

int menu(){
    int op;
    printf("Menu de opções");
    printf("\n1. Quadrado");
    printf("\n2. Retangulo");
    printf("\n3. Triangulo");
    printf("\n4. Encerrar");
    printf("\nSua opção: ");
    scanf("%d", &op);
    fflush(stdin);
    return op;
}

void quadrado(){
    float m1, area, perimetro;
    system("clear");
    printf("Calculando a área de um quadrado");
    printf("\n\nDigite o comprimento do lado: ");
    scanf("%f", &m1);
    area = m1 * m1;
    perimetro = 4 * m1;
    printf("\nArea: %f", area);
    printf("\nPerimetro: %f\n\n", perimetro);
}

void retangulo(){
    float m1, m2, area, perimetro;
    system("clear");
    printf("Calculando a área de um retangulo");
    printf("\n\nDigite o comprimento dos lados: ");
    scanf("%f %f", &m1, &m2);
    area = m1 * m2;
    perimetro = 2 * m1 + 2 * m2;
    printf("\nArea: %f", area);
    printf("\nPerimetro: %f\n\n", perimetro);
}

void triangulo(){
    float m1, m2, area, perimetro;
    system("clear");
    printf("Calculando a área de um triangulo");
    printf("\n\nDigite o comprimentos dos lados: ");
    scanf("%f %f", &m1, &m2);
    area = m1 * m2 / 2;
    printf("\nArea: %f\n\n", area);
}