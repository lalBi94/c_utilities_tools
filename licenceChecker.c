#include <stdio.h>
#include <stdlib.h>
#include "inacor.h"

#define errorLicence printf("Invalid licence !");
/*
    code [94] is validate.
    code [errorLicence] is no validate.
*/

int logginLicence(){
    int j = 0, k = 0, detector = 0;

    char* licence = malloc(sizeof(char) * k);
    char* licenceTest = malloc(sizeof(char) * j);

    *(licenceTest + 0) = 'B';
    *(licenceTest + 1) = 'i';
    *(licenceTest + 2) = 'l';
    *(licenceTest + 3) = 'a';
    *(licenceTest + 4) = 'l';
    *(licenceTest + 5) = '9';
    *(licenceTest + 6) = '4';
    *(licenceTest + 7) = '0';
    *(licenceTest + 8) = '0';
    *(licenceTest + 9) = '0';

    if(licence == NULL){
        errorLicence;
        exit(94);
    }

    if(licenceTest == NULL){
        errorLicence;
        exit(94);
    }

    printf("Licence Key : "); scanf("%s", licence);

    while(*(licence + k) != '\0'){
        if(*(licence + k) == *(licenceTest + j)){
            k++;
            j++;
            detector++;
        }  else{
            k++;
        }
    }

    if(detector == 10){
        return 94;
    } else{
        errorLicence;
        exit(94);
    }
}