#include <stdio.h>
#include "lib_bilal.h"

/*
charmalloc(malloc_chaine, size_of_the_dynamical_tab, reserv. octet); CHAR*
intmalloc(malloc_chaine, size_of_the_dynamical_tab, reserv. octet); INT*
doublemalloc(malloc_chaine, size_of_the_dynamical_tab, reserv. octet); DOUBLE*
*/

int main(){
    char* assigment = charmalloc(assigment, 5, 1);

    printf("La phrase est : %s\n", assigment);
    // pritnf("L'entier est : %d\n", assigment);
    return 0;
}