// Ejercicio 7
// Pide una cadena y dos caracteres por teclado (valida que sea un carácter),
//  sustituye la aparición del primer carácter en la cadena por el segundo carácter.

#include <stdio.h>

int lenghtStr(char *str)        // Esta funcion devuelve la longitud de un string sin contar el \0
{
        int i = 0;              // Esta variable almacenara la longitud del string
        while (str[i] != '\0')  // Mientras la casilla no sea \0 entonces se sumara 1 a i
        {
                i++;
        }
        return i;               // Devuelve la longitud del string
}

void replace(char* arr, char charA, char charB){
        int len = lenghtStr(arr);
        for(int i = 0; i < len; i++){
                if(arr[i] == charA)
                        arr[i] = charB;
        }
}

int main(){
        char string[300];

        puts("Inserte String");
        gets(string);

        char a[2];
        char b[2];

        puts("Inserte Letra a remplazar");
        scanf("%1s", &a);

        puts("Inserte Letra con la que se reemplazara");
        scanf("%1s", &b);

        replace(string, a[0], b[0]);
        printf("%s", string);
}