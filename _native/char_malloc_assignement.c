#include <stdio.h>
#include <stdlib.h>
#include "lib_bilal.h"

//charmalloc(malloc_chaine, size_of_the_dynamical_tab, reserv. octet);
//to the full malloc manip;

char* charmalloc(char* PRE_MALLOC, int SIZE, int TYPE){
    PRE_MALLOC = malloc(sizeof(TYPE) * SIZE);
    scanf("%s", PRE_MALLOC);
    return PRE_MALLOC;
}

//CREDIT : Bilaal#7175