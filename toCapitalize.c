// Ejercicio 5
// Si tenemos una cadena con un nombre y apellidos,
// realizar un programa que muestre las iniciales en mayúsculas.

#include <stdio.h>

void toCapitalize(char *arr)
{
        int i = 0;
        while (arr[i] != '\0')
        {
                if ((i == 0 || arr[i - 1] == ' ') && (arr[i] >= 97 && arr[i] <= 122))
                        arr[i] = arr[i] - 32;
                i++;
        }
}

int main(){
        char string[256];

        puts("Inserte un string");
        gets(string);

        toCapitalize(string);

        puts(string);
}