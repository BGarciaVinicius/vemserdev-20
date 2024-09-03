#include <stdio.h>

int main(){
    char sexo;
    int idade;
    float altura;
    float peso;
    
    // coleta de informações sobre o usuário
    printf("Calculadora de IMC\n");
    printf("Insira seu sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("\nInsira sua idade: ");
    scanf("%d", &idade);

    printf("\nInsira sua altura (metros): ");
    scanf("%f", &altura);

    printf("\nInsira seu peso (kg): ");
    scanf("%f", &peso);

    // verificar entradas válidas
    if (altura <= 0 || peso <= 0) {
        printf("Altura e peso devem ser positivos e maiores que zero.\n");
        return 1; // encerrar o programa com um código de erro
    }

    // calculo de IMC
    float imc;
    imc = peso/(altura*altura);

    // retorno IMC e classificação
    printf("\nSeu imc é: %.2f\n", imc);

    if (imc <= 16.9)
    {
        printf("Você está muito abaixo do peso\n");
    }
    else if (imc >= 17 && imc <= 18.4)
    {
        printf("Você está abaixo do peso\n");
    }
    else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("Você está dentro de seu peso ideal\n");
    }
    else if (imc >= 25 && imc <= 29.9)
    {
        printf("Você está acima do peso\n");
    }
    else if (imc >= 30 && imc <= 34.9)
    {
        printf("Você está com obesidade grau I\n");
    }
    else if (imc >= 30 <= 39.9)
    {
        printf("Você está com obesidade grau II\n");
    }
    else if (imc >- 40)
    {
        printf("Você está com obesidade grau III\n");
    }
    
    return 0;
}