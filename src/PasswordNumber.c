#include "PasswordNumber.h"

void PasswordNumber(int length){
    int i, random = 0;
    srand(time(0));
    char password[length];
    for (i = 0; i < length; i++) {
        random = rand() % 4;
        if (random == 1) { // gera uma letra min�scula
            password[i] = (rand() % 10) + 48;
        }
        if (random == 2) { // gera uma letra min�scula
            password[i] = (rand() % 10) + 48;
        }
        else { // gera uma letra min�scula
            password[i] = (rand() % 10) + 48;
        }
     }

    password[length] = '\0';
    printf(password);
    return 0;
}
