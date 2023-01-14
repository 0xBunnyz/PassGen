#include "PasswordSpecial.h"

void PasswordSpecial(int length){
    int i, random = 0;
    srand(time(0));
    char password[length];
    for (i = 0; i < length; i++) {
        random = rand() % 4;
        if (random == 1) { // gera uma letra minúscula
            password[i] = (rand() % 15) + 33;
        }
        if (random == 2) { // gera uma letra minúscula
            password[i] = (rand() % 15) + 33;
        }
        else { // gera uma letra minúscula
            password[i] = (rand() % 15) + 33;
        }
     }

    password[length] = '\0';
    printf(password);
    return 0;
}
