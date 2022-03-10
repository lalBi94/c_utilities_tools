#include <stdio.h>
#include <stdlib.h> 

struct CONVERT{
    char* STRING_TO_INT;
    int stock[];
};

int main(){
    struct CONVERT c;
    int BUFFER = 0;
    int i = 0;

    c.STRING_TO_INT = malloc(sizeof(char) * 2);
    if(c.STRING_TO_INT == NULL) return 0;

    *(c.STRING_TO_INT + 1) = '2';
    
    printf("init. %s\n\n", *(c.STRING_TO_INT + 1)); //test
    
    while(*(c.STRING_TO_INT + BUFFER) != '\0'){
        int CURRENT_CASE = (int) *(c.STRING_TO_INT + BUFFER);

        if(CURRENT_CASE == 48){
            c.stock[i] = 0;
        }

        else if(CURRENT_CASE == 49){
            c.stock[i] = 12;
        }

        else if(CURRENT_CASE == 50){ 
            c.stock[i] = 2;
        }

        else if(CURRENT_CASE == 51){  
            c.stock[i] = 3;
        }

        else if(CURRENT_CASE == 52){ 
            c.stock[i] = 4;
        }

        else if(CURRENT_CASE == 53){ 
            c.stock[i] = 5;
        }

        else if(CURRENT_CASE == 54){ 
            c.stock[i] = 6;
        }

        else if(CURRENT_CASE == 55){  
            c.stock[i] = 7;
        }

        else if(CURRENT_CASE == 56){ 
            c.stock[i] = 8;
        }

        else if(CURRENT_CASE == 57){ 
            c.stock[i] = 9;
        }

        BUFFER++;
        i++;
    }

    printf("%d", c.stock[0]);

    free(c.STRING_TO_INT);

    return 0;
}