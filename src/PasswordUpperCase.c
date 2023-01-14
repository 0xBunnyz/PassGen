#include "PasswordUpperCase.h"

void PasswordUpperCase(int length){
    int i, random = 0;
    srand(time(0));
    char password[length];
    for (i = 0; i < length; i++) {
        random = rand() % 4;
        if (random == 1) { // gera uma letra minúscula
            password[i] = (rand() % 26) + 65;
        }
        if (random == 2) { // gera uma letra minúscula
            password[i] = (rand() % 26) + 65;
        }
        else { // gera uma letra minúscula
            password[i] = (rand() % 26) + 65;;
        }
     }

    password[length] = '\0';
    printf(password);
    return 0;
}
