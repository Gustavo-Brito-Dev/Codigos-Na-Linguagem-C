#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int tabuada;

        printf ("Digite um numero de 1 a 10\n");
        scanf ("%d", &num1);
        printf ("A tabuada do %d e\n", num1);
        if (num1 <  1 || num1 > 10) {
        printf ("Numero invalido\n");


    }else {
    for (tabuada = 1; tabuada <= 10; tabuada++){
        printf ("%d ", num1*tabuada);
    }


    }



}
