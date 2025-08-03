#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf ("Numeros primos entre 1 e 500:\n");


    for ( int numero = 2; numero <= 500; numero++) {
           int primo = 1;
    for ( int divisor = 2; divisor * divisor <= numero; divisor++) {
        if ( numero % divisor == 0) {
            primo = 0;
            break;
        }
        }

    if (primo){
        printf ("%d ", numero);
    }
    }

}
