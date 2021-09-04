#include "scanner.h"

int scanner_token(int character){
    if(isspace(character)){
        return -1;
    }else if(character == ','){
        return SEP;
    }else{
        return CAD;
    }
}

void get_token(){
    int c;
    enum tokens token;
    printf("Ingrese un texto:");
    while(c != '\n')    {
        c=getchar();
        token=scanner_token(c);
        printf("\n");
        if(token == CAD){
            printf("CADENA: ");
            }
        while(token == CAD){
            putchar(c);
            c=getchar();
            token=scanner_token(c);
        }
        switch(token){
            case SEP:
                printf("SEPARADOR: ");
                putchar(c);
                break;
            case FDT:
                printf("FIN DE TEXTO: ");
                putchar(c);
                break;
        }
    }

}
