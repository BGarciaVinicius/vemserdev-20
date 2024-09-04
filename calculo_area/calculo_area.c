#include <stdio.h>
#include <stdlib.h>

void limpar_buffer() {
    getchar();
}

int main(){
    int senha, userid;
    char sn, op;
    float m1, m2, area, perimetro;

    printf("Digite seu número de usuário: ");
    scanf(" %d", &userid);
    printf("Digite sua senha: ");
    scanf(" %d", &senha);
    limpar_buffer();

    if (senha=294540 && userid == 0 || senha == 294541 && userid == 1)
    {
        printf("\nSeja bem vindo ao sistema");
        printf("\n\nDeseja continuar (S/N)? ");
        sn = getchar();
        limpar_buffer();

        if (65 + sn % 65 % 32 == 'S')
        {
            printf("\nDeseja calcular a área de algum poligono (S/N): ");
            sn = getchar();
            limpar_buffer();

            if (65 + sn % 65 % 32 == 'S')
            {
                system("clear");
                printf("Menu de opções");
                printf("\n1. Quadrado");
                printf("\n2. Retangulo");
                printf("\n3. Triangulo");
                printf("\n4. Encerrar");
                printf("\nSua opção: ");
                op = getchar();
                limpar_buffer();

                if (op == '1')
                {
                    system("clear");
                    printf("Calculando a área de um quadrado");
                    printf("\n\nDigite o comprimento do lado: ");
                    scanf("%f", &m1);
                    area = m1 * m1;
                    perimetro = 4 * m1;
                    printf("\n\nArea: %.2f", area);
                    printf("\nPerimetro: %.2f", perimetro);
                }
                if (op == '2')
                {
                    system("clear");
                    printf("Calculando a área de um retangulo");
                    printf("\n\nDigite o comprimento dos lados: ");
                    scanf("%f %f", &m1, &m2);
                    area = m1 * m2;
                    perimetro = 2 * m1 + 2 * m2;
                    printf("\n\nArea: %.2f", area);
                    printf("\nPerimetro: %.2f", perimetro);
                }
                if (op == '3')
                {
                    system("clear");
                    printf("Calculando a área de um triangulo");
                    printf("\n\nDigite o comprimento dos lados: ");
                    scanf("%f %f", &m1, &m2);
                    area = m1 * m2 / 2;
                    printf("\n\nArea: %.2f", area);
                    printf("\nPerimetro: %.2f", perimetro);
                }
            }
            else {
                printf("Que pena! Essa é única coisa que sei fazer, tchau ...");
            }
        }
        
    }
    else {
        printf("Cai fora, canalha!!");
    }
    return 0;
}