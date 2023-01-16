// Developer by 0xBunny
/*
--- GERADOR DE SENHAS ---
    * Definir o tipo de senha a ser gerado:
        -> -n senha somente com numeros.
        -> -ll senha somente com letras minusculas.
        -> -lu senha somente  com caracteres com letras maiusculas.
        -> -s senha somente com caracterese especiais.
        -> -all senha com todos os caracteres acima.

    * Definir o tamanho da senha a ser gerado;
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

// Includes das funções
#include "headers/PasswordAll.h"
#include "headers/PasswordNumber.h"
#include "headers/PasswordSpecial.h"
#include "headersPasswordLowerCase.h"
#include "headers/PasswordUpperCase.h"


int main(int argc, char* argv[]){
    int c, length;

    if(argc < 3){
        printf("Usage example: passgen.exe -all -length 12\n\t-n: somente com numeros.\n\t-ll: somente com letras minusculas.\n\t-lu somente com letras maiusculas.\n\t-s: somente com caracteres especiais\n\t-all: com todas as possibilidades.");
    }

    for (c = 0; c < argc; c++) {
        if (strcmp(argv[c], "-length") == 0) {
            length = atoi(argv[c+1]);
        }
    }

    if(strcmp(argv[1], "-n") == 0){
        PasswordNumber(length);
    } else if(strcmp(argv[1], "-ll") == 0){
        PasswordLowerCase(length);
    } else if(strcmp(argv[1], "-lu") == 0){
        PasswordUpperCase(length);
    } else if(strcmp(argv[1], "-s") == 0){
        PasswordSpecial(length);
    } else if(strcmp(argv[1], "-all") == 0){
        PasswordAll(length);
    }
    return 0;
}
