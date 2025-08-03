#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vetor [8];
  int indice, numero;

        printf ("Digite 8 numeros entre 1 e 50\n");
    for (indice = 0; indice < 8; indice++){
    do{

        printf ("Numero %d: ", indice + 1);
        scanf ("%d", &numero);

        // ver se o numero esta entre 1 e 50

        if (numero < 1 || numero > 50){
            printf ("Seu numero nao esta entre 1 e 50, tente novamente.\n");
        }

        } while (numero < 1 || numero > 50);
        vetor[indice] = numero;

        }
        printf ("Seus numeros foram:\n");
        for (indice = 0; indice < 8; indice++){

        printf ("%d ", vetor[indice]);

}
}
