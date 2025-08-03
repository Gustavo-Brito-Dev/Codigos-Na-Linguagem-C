#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4];
    int i, j;
    int numero, contador = 0;

    printf ("Faca uma matriz 4X4:\n");

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf ("sequencia [%d] [%d] : ", i+1, j+1);
            scanf ("%d", &matriz[i][j]);
        }
    }
    printf ("Digite o numero que voce quer procurar:\n");
    scanf ("%d", &numero);

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (matriz[i][j] == numero){
                contador++;
            }
        }
    }
    printf ("O numero %d foi encontrado %d vezes", numero, contador);
}
