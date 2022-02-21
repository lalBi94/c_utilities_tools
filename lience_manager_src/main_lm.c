#include <stdio.h>
#include <windows.h>
#include "lib_lm.h"

#define LICENCE_MAX_LENGTH 5
#define WHEN_ADDING_LICENCE_IS_INCORRECT printf("\n\nUsage: licenceManage <option (a | r | m)> <if_a_put_the_licence))>\n\n")
#define PAUSE_END printf("Press any key to quit...")

int main(int argc, char* argv[]){
    system("color 0f");

    int i;
    for(i = 1; i < argc; i++){
        printf("argv[%d] = '%s'\n", i, argv[i]);
    }

    if(argc < 2){
        system("color 4");
        WHEN_ADDING_LICENCE_IS_INCORRECT;
        exit(1);
    }

    if(*argv[1] == 'a'){
        char* SEND_LICENCE_TO_A = malloc(sizeof(char) * LICENCE_MAX_LENGTH);
        if(SEND_LICENCE_TO_A == NULL) 
            exit(0);

        SEND_LICENCE_TO_A == argv[2];
        printf("\n\nSL = [%s]\n", argv[2]);
        //ADD_LICENCE();
    }

    else if(*argv[1] == 'r'){
        //REMOVE_LICENCE();
    }

    else if(*argv[1] == 'm'){
        //MODIFY_LICENCE();
    }

    exit(0);
}