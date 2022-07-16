// ejercicio 4
// Suponiendo que hemos introducido una cadena por teclado que representa una 
// frase (palabras separadas por espacios), realiza un programa que cuente cuantas palabras tiene.

#include <stdio.h>

int split(char* arr){
        int i = 0;
        int words = 0;
        while(arr[i] != '\0'){
                if(arr[i] == ' ' && arr[i + 1] != ' ')
                        words++;
                i++;
        }

        return words;
}

int main(){
        char string[100];

        puts("Inserte Una Frase");
        gets(string);

        printf("%d", split(string));

        return 0;
}