// Ejercicio 1
// Escribir por pantalla cada carácter de una cadena introducida por teclado.

#include <stdio.h>

void printInWindow(char* arr){
        int i = 0;
        while(arr[i] != '\0'){
                printf("%c\n", arr[i]);
                i++;
        }
}

int main(){
        char string[300];

        puts("Inserte Un String");
        gets(string);

        printInWindow(string);

        return 0;
}