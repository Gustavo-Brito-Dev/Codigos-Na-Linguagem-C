#include <stdio.h>
#include <stdlib.h>

int main()
{
int vetor [6], i, j;



    for (i=0; i<6; i++){
        printf ("Digite um numero:\n");
        scanf ("%d", &vetor[i]);
    }
    for (i=0; i<6; i++)
    {
        for (j=i+1; j<6; j++)
        {
            if (vetor[i]==vetor[j])
            {
                printf ("Seu numero %d e igual\n", vetor[i]);
                }else{
                }

            }
        }
        for (i=0; i<6; i++)
        {
            printf ("%d ", vetor[i]);
        }
    }















