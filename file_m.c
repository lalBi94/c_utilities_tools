#include "inacor.h"

int main(){
    system("CLS");
    system("color f0");
    SetConsoleTitle("Inacor.v0 by. Bilal");
    printf("\t\t _____________________________________________________________\n");
    printf("\t\t(_____________________________________________________________)\n\n");
    printf("\t\t (_____)  |  ___ \x5c      /\x5c     (_______)   / ___ \x5c   (_____ \x5c \n");
    printf("\t\t    _     | |   | |    /  \x5c     _         | |   | |   _____) )\n");
    printf("\t\t   | |    | |   | |   / /\x5c \x5c   | |        | |   | |  (_____ ( \n");
    printf("\t\t  _| |_   | |   | |  | |__| |  | |_____   | |___| |        | |\n");
    printf("\t\t (_____)  |_|   |_|  |______|   \x5c______)   \x5c_____/         |_|\n");
    printf("\t\t _____________________________________________________________\n");
    printf("\t\t(_____________________________________________________________)\n");
    printf("\t\t\t\t\t\t\t\t\t / \x5c      ._   _  ._   o   |_) o |  _. | \n");
    printf("\t\t\t\t\t\t\t\t\t \x5c_/ \x5c/\x5c/ | | (/_ |    o   |_) | | (_| | \n\n");

    int inter_scan;

    if(logginLicence() == 94){
        system("color 0f");
        system("CLS");
        printf("[LOGGED WITH TEST LICENCE !]\n");
        printf("For somes problems, contact Bilaal#7175 !\n\n");
        printf("[Interface 1 = TCP/IP]\n[Interface 2 = UDP]\n"); scanf("%d", &inter_scan);
    }

    if(inter_scan == 1){
        printf("opt. 1\n");
        return 0;
    }

    if(inter_scan == 2){
        printf("opt. 2\n");
        return 0;
    }

    return 0;
}