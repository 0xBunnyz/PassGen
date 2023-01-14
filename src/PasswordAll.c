#include "PasswordAll.h"

void PasswordAll(int length){
    int i, random = 0;
    srand(time(0));
    char password[length];

     for (i = 0; i < length; i++) {
            random = rand() % 4;
        if (random == 0) { // gera um número
            password[i] = (rand() % 10) + 48;
        } else if (random == 1) { // gera uma letra minúscula
            password[i] = (rand() % 26) + 97;
        } else if (random == 2) { // gera uma letra maiúscula
            password[i] = (rand() % 26) + 65;
        } else { // gera um caractere especial
            password[i] = (rand() % 15) + 33;
        }
    }
    password[length] = '\0';
    printf(password);
    return 0;
}
