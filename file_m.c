#include "inacor.h"

int main(){
    system("CLS");
    system("color f0");
    SetConsoleTitle("Inacor.v0 by. Bilal");
    printf("\t\t\t _____________________________________________________________\n");
    printf("\t\t\t(_____________________________________________________________)\n\n");
    printf("\t\t\t (_____)  |  ___ \x5c      /\x5c     (_______)   / ___ \x5c   (_____ \x5c \n");
    printf("\t\t\t    _     | |   | |    /  \x5c     _         | |   | |   _____) )\n");
    printf("\t\t\t   | |    | |   | |   / /\x5c \x5c   | |        | |   | |  (_____ ( \n");
    printf("\t\t\t  _| |_   | |   | |  | |__| |  | |_____   | |___| |        | |\n");
    printf("\t\t\t (_____)  |_|   |_|  |______|   \x5c______)   \x5c_____/         |_|\n");
    printf("\t\t\t _____________________________________________________________\n");
    printf("\t\t\t(_____________________________________________________________)\n");

    printf("\t\t\t\t\t\t\t  ___ _ _           _     _ _     ____ _ ____ ___ \n");
    printf("\t\t\t\t\t\t\t | _ |_) |__ _ __ _| |  _| | |_  |__  / |__  | __|\n");
    printf("\t\t\t\t\t\t\t | _ \x5c | / _` / _` | | |_  .  _|   / /| | / /|__ \x5c\n");
    printf("\t\t\t\t\t\t\t |___/_|_\x5c__,_\x5c__,_|_| |_     _|  /_/ |_|/_/ |___/\n");
    printf("\t\t\t\t\t\t\t                         |_|_|                    \n\n");

    int inter_scan;

    if(logginLicence() == 94){
        system("color 0f");
        system("CLS");
        printf("[LOGGED WITH TEST LICENCE !]\n");
        printf("For somes problems, contact Bilaal#7175 !\n\n");
        printf("[Interface 1 = TCP/IP]\n[Interface 2 = UDP]\n\n"); scanf("%d", &inter_scan);
    }

    if(inter_scan == 1){
        printf("\nopt. 1\n");
        return 0;
    }

    if(inter_scan == 2){
        printf("\nopt. 2\n");
        return 0;
    }

    return 0;
}