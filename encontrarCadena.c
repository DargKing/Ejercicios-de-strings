// Ejercicio 2
// Realizar un programa que comprueba si una cadena leída por 
// teclado comienza por una subcadena introducida por teclado.

#include <stdio.h>

int subcadenacmp(char* arr, char* cmp){
        int i = 0;
        while(cmp[i] != '\0'){
                if(arr[i] != cmp[i])
                        return 0;
                i++;
        }
        return 1;
}

int main(){
        char string[100];
        char string2[100];

        puts("Inserte Una Cadena");
        gets(string);

        puts("Inserte la segunda cadena");
        gets(string2);

        printf("%d", subcadenacmp(string, string2));
}