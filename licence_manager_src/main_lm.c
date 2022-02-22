#include <stdio.h>
#include <windows.h>
#include "lib_lm.h"

#define LICENCE_MAX_LENGTH 5
#define WHEN_ADDING_LICENCE_IS_INCORRECT printf("\n\nUsage: licenceManage <option (a | r | m)> <if_a_put_the_licence))>\n\n")
#define PAUSE_END printf("Press any key to quit...")

int main(int argc, char* argv[]){
    system("color 0f");

    if(argc < 2){
        system("color 4");
        WHEN_ADDING_LICENCE_IS_INCORRECT;
        exit(1);
    }

    if(*argv[1] == 'a'){
        
        ADD_LICENCE(argv[2]);
    }

    else if(*argv[1] == 'r'){
        //REMOVE_LICENCE();
    }

    else if(*argv[1] == 'm'){
        //MODIFY_LICENCE();
    }

    exit(0);
}