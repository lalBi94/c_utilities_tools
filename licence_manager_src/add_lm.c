#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "lib_lm.h"

#define FILE_OPEN_ERROR printf("\n\nError, please contact Bilaal#7175 on discord :)\n\n")

int ID_LICENCE = 0; //number max of the licence left
char BACK_N = '\n';
char CROCHET_OPEN = '[';
char CROCHET_CLOSE = ']';
char SPACE = ' ';

void ADD_LICENCE(char* THE_LICENCE){
    struct LICENCE_MANAGER L;
    
    L.ID = ID_LICENCE;
    printf("%d", L.ID);
    L.BUYER = malloc(sizeof(char) * 20);
    L.BUYER = THE_LICENCE;

    FILE *LICENCE_BILAL;
    LICENCE_BILAL = fopen("licence.bilal", "a+");
    

    if(LICENCE_BILAL == NULL){
        FILE_OPEN_ERROR;
        fclose(LICENCE_BILAL);
        exit(0);
    }

    else{
        fwrite(&BACK_N, sizeof(char), 1, LICENCE_BILAL); //\n

        fwrite(&CROCHET_OPEN, sizeof(char), 1, LICENCE_BILAL); //\n
        fprintf(LICENCE_BILAL, "%d", L.ID);
        fwrite(&CROCHET_CLOSE, sizeof(char), 1, LICENCE_BILAL); //\n
        fwrite(&SPACE, sizeof(char), 1, LICENCE_BILAL); //\n
        
        fwrite(L.BUYER, sizeof(char), 5, LICENCE_BILAL);
        
        fclose(LICENCE_BILAL);
        system("color a");
        printf("\n\nThe licence [%s] as been save correctly at licence.bilal !\n\n\n", L.BUYER);
    }

    free(L.BUYER);
}