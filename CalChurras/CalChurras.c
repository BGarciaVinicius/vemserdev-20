#include <stdio.h>

void limpar_buffer() {
    getchar();
}

int main(){
    int homens, mulheres;
    int vegetariano, op;

    printf("CalChurras\n\n");

    printf("Há vegetarianos nesse churrasco(S/N)? ");
    op = getchar();

    if (op == 'S' || op == 's')
    {
        printf("Quantos vegetarianos: ");
        scanf("%d", &vegetariano);
        int beringela = vegetariano * 2;
        int cebola = vegetariano * 2;
        printf("\nPara o(s) vegetariano(s) será necessário: \n");
        printf("%d cebola(s)\n", cebola);
        printf("%d beringelas\n\n", beringela);
    }

    printf("Quantos homens irão ao churrasco (descontado vegetarianos): ");
    scanf("%d", &homens);

    printf("Quantas mulheres irão ao churrasco (descontado vegetarianas): ");
    scanf("%d", &mulheres);

    int pessoas = vegetariano + homens + mulheres;

    if (pessoas < 8 || pessoas > 20)
    {
        printf("O número total de pessoas deve ser de 8 a 20...\n");
        return 0;
    }
    
    int carne = homens * 500 + mulheres * 300;
    int linguica = homens * 100 + mulheres * 100;
    int cerveja = homens * 4 + mulheres * 2;
    int queijo_coalho = homens * 100 + mulheres * 200;
    int guarana = pessoas * 300;

    printf("\nPara o churrasco será necessário: ");
    printf("\n%dg de carne", carne);
    printf("\n%dg de linguiça", linguica);
    printf("\n%dg de queijo coalho", queijo_coalho);
    printf("\n%dml de guaraná", guarana);
    printf("\n%d garrafas de cerveja\n", cerveja);

    return 0;
}