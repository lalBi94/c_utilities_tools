#include <stdio.h>
#include <stdlib.h>

/*BUFF PART*/
#define BUFFER_DEC10 15 //"." is counted
#define BUFFER_BIN2 32

/*ASCII PART*/
#define ASCII_POINT 46
#define ASCII_0 48
#define ASCII_1 49
#define ASCII_2 50
#define ASCII_3 51
#define ASCII_4 52
#define ASCII_5 53
#define ASCII_6 54
#define ASCII_7 55
#define ASCII_8 56
#define ASCII_9 57

void SEPARATION_OF_ARGS2_TO_ARGV(char* IP_ADDRESS[]);
void FREE_ALL_INT(char* ALLOC);
void FREE_ALL_CHAR(char* ALLOC);

int main(int argc, char* argv[]){
    if(argc != 2) 
        exit(1);

    else 
        SEPARATION_OF_ARGS2_TO_ARGV(argv);

    exit(0);
}

void ALL_CASE_TO_ZERO(int* TO_ZERO_ALLOC){
    int I_COUNT = 0;
    while(*(TO_ZERO_ALLOC + I_COUNT) != '\0'){
        *(TO_ZERO_ALLOC + I_COUNT) = 0;
        I_COUNT++;
    }
}

void SEPARATION_OF_ARGS2_TO_ARGV(char* IP_ADDRESS[]){
    char* ARG2_TO_1_STRING = malloc(sizeof(char) * BUFFER_DEC10);
    char* ARG2_BIN = malloc(sizeof(char) * BUFFER_BIN2);
    int* STOCK_ARG2_INT = malloc(sizeof(int) * 15);
    ARG2_TO_1_STRING = IP_ADDRESS[1];

    ALL_CASE_TO_ZERO(STOCK_ARG2_INT);

    int I_TEST = 0;

    int I_TO_DETECT_ASCII = 0;

    while(*(ARG2_TO_1_STRING + I_TO_DETECT_ASCII) != '\0'){ //convert int *alloc
        int ARG2_TO_ASCII = (int) *(ARG2_TO_1_STRING + I_TO_DETECT_ASCII);
        *(STOCK_ARG2_INT + I_TO_DETECT_ASCII) = ARG2_TO_ASCII;
        printf("%d IS ADDED ON THE %d CASE OF THE TABLE !\n", *(STOCK_ARG2_INT + I_TO_DETECT_ASCII), I_TO_DETECT_ASCII);

        if(*(STOCK_ARG2_INT + I_TO_DETECT_ASCII) == ASCII_0){
            *(STOCK_ARG2_INT + I_TO_DETECT_ASCII) = 0;
        }

        if(*(STOCK_ARG2_INT + I_TO_DETECT_ASCII) == ASCII_1){
            *(STOCK_ARG2_INT + I_TO_DETECT_ASCII) = 1;
        }

        if(*(STOCK_ARG2_INT + I_TO_DETECT_ASCII) == ASCII_2){
            *(STOCK_ARG2_INT + I_TO_DETECT_ASCII) = 2;
        }

        if(*(STOCK_ARG2_INT + I_TO_DETECT_ASCII) == ASCII_3){
            *(STOCK_ARG2_INT + I_TO_DETECT_ASCII) = 3;
        }

        if(*(STOCK_ARG2_INT + I_TO_DETECT_ASCII) == ASCII_4){
            *(STOCK_ARG2_INT + I_TO_DETECT_ASCII) = 4;
        }

        if(*(STOCK_ARG2_INT + I_TO_DETECT_ASCII) == ASCII_5){
            *(STOCK_ARG2_INT + I_TO_DETECT_ASCII) = 5;
        }

        if(*(STOCK_ARG2_INT + I_TO_DETECT_ASCII) == ASCII_6){
            *(STOCK_ARG2_INT + I_TO_DETECT_ASCII) = 6;
        }

        if(*(STOCK_ARG2_INT + I_TO_DETECT_ASCII) == ASCII_7){
            *(STOCK_ARG2_INT + I_TO_DETECT_ASCII) = 7;
        }

        if(*(STOCK_ARG2_INT + I_TO_DETECT_ASCII) == ASCII_8){
            *(STOCK_ARG2_INT + I_TO_DETECT_ASCII) = 8;
        }

        if(*(STOCK_ARG2_INT + I_TO_DETECT_ASCII) == ASCII_9){
            *(STOCK_ARG2_INT + I_TO_DETECT_ASCII) = 9;
        }

        I_TO_DETECT_ASCII++;
    }
    
    for(int RETURNN = 0; RETURNN != 2; RETURNN++){
        printf("\n");
    }

    int I_TO_DETECT = 0;
    
    printf("[");
    while(*(STOCK_ARG2_INT + I_TO_DETECT) != '\0'){
        if(*(STOCK_ARG2_INT + I_TO_DETECT) == ASCII_POINT){
            char TG = (char) *(STOCK_ARG2_INT + I_TO_DETECT);
            //*STOCK_ARG2_INT[I_TO_DETECT] = NULL;
            printf("%c", TG);
        }

        printf("%d", *(STOCK_ARG2_INT + I_TO_DETECT));

        I_TO_DETECT++;
    }
    printf("]");

    for(int RETURNN = 0; RETURNN != 2; RETURNN++){
        printf("\n");
    }
    
    free(ARG2_TO_1_STRING);
    free(STOCK_ARG2_INT);
    free(ARG2_BIN);
}