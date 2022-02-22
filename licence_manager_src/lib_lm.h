#ifndef __LIB_LM_H__
#define __LIB_LM_H__

struct LICENCE_MANAGER{
    int ID;
    char* BUYER;
};

int main(int argc, char* argv[]);
void ADD_LICENCE(char* THE_LICENCE); //adding licence to licence.bilal
void DUPLI_CHECK(int ID_LICENCE, char* THE_LICENCE); //check if licence/id already exit;

#endif