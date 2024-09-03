#include <stdio.h>

int main(){
    printf("Calculadora VSD\n\n");
    printf("Opções disponíveis:\n");
    printf("Soma (+)\n");
    printf("Subtração (-)\n");
    printf("Multiplicação (*)\n");
    printf("Divisão (/)\n\n");
    printf("Insira a opção desejada: \n");

    char opcao;
    int n1, n2;
    scanf("%c", &opcao);
    
    if (opcao == '+')
    {
        printf("A opção selecionada foi soma\n");
        printf("Insira dois número a serem somados: \n");
        scanf("%d %d", &n1, &n2);
        printf("O resultado é: %d \n", n1 + n2);
    }
    else if (opcao == '-')
    {
        printf("A opção selecionada foi subtração\n");
        printf("Insira dois número a serem subtraidos: \n");
        scanf("%d %d", &n1, &n2);
        printf("O resultado é: %d \n", n1 - n2);
    }
    else if (opcao == '*')
    {
        printf("A opção selecionada foi multiplicaçao\n");
        printf("Insira dois número a serem multiplicados: \n");
        scanf("%d %d", &n1, &n2);
        printf("O resultado é: %d \n", n1 * n2);
    }
    else if (opcao == '/')
    {
        printf("A opção selecionada foi divisão\n");
        printf("Insira dois número a serem dividos: \n");
        scanf("%d %d", &n1, &n2);
        printf("O resultado é: %d \n", n1 / n2);
    }
    else {
        printf("A opção selecionada é invalida...\n");
    }
    return 0;
}