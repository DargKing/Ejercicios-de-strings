#include <stdio.h>

int repeatChar(char* arr, char c){
        int i = 0;
        int resul = 0;
        while(arr[i] != '\0'){
                if(arr[i] == c)
                        resul++;
                i++;
        }
        return resul;
}

int main(){
        char string[100];
        puts("Inserte Cadena");
        gets(string);

        puts("Inserte Caracter");
        char caracter = getchar();

        int repeticionesDeCaracter = repeatChar(string, caracter);
        printf("%d", repeticionesDeCaracter);
}