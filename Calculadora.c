#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operador;
    float num1, num2, resultado;
    char continuar;

    do {

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);

        printf("Digite o operador (+, -, *, /): ");
        scanf(" %c", &operador);

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);


        switch(operador) {
            case '+':
                resultado = num1 + num2;
                break;
            case '-':
                resultado = num1 - num2;
                break;
            case '*':
                resultado = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    resultado = num1 / num2;
                } else {
                    printf("Erro: Divisao por zero!\n");
                    continue;
                }
                break;
            default:
                printf("Operador invalido!\n");
                continue;
        }


        printf("O resultado da operacao e: %.2f\n", resultado);


        printf("Deseja continuar? (S/N): ");

        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    printf("Programa encerrado.\n");

}


















