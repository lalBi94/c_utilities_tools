#include <stdio.h>
#include <stdlib.h>

 //charmalloc(malloc_chaine, size_of_the_dynamical_tab, reserv. octet);
 //to the full malloc manip;

char* charmalloc(char* PRE_MALLOC, int SIZE, int TYPE){

    PRE_MALLOC = malloc(sizeof(TYPE) * SIZE);
    int i = 0;

    scanf("%s", PRE_MALLOC);

    return PRE_MALLOC;
}

//CREDIT : BILAL