#define __ICANOR_H__
#ifndef __INACOR_H__

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct listeOfErrorCode{
    int errorCode;
    char* errorMessage;
};

struct licencePanel{
    int licenceKey;
};

int main();
int logginLicence();

#endif