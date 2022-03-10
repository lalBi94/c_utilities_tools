#include <stdio.h>
#include "lib_bilal.h"

/*
charmalloc(malloc_chaine, size_of_the_dynamical_tab, reserv. octet); CHAR*
intmalloc(malloc_chaine, size_of_the_dynamical_tab, reserv. octet); INT*
doublemalloc(malloc_chaine, size_of_the_dynamical_tab, reserv. octet); DOUBLE*
*/

int main(){
    char* assigment_char = charmalloc(assigment_char, 5, 1);
    int* assigment_int = intmalloc(assigment_int, 1, 4);
    double* assigment_double = doublemalloc(assigment_char, 2, 8);

    printf("La phrase est : %s\n", assigment_char);
    pritnf("L'entier est : %s\n", assigment_int);
    pritnf("Le flottant est : %s\n", assigment_double);

    return 0;
}