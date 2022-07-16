// Ejercicio 8
// Realizar un programa que lea una cadena por teclado y convierta las mayúsculas a minúsculas y viceversa.

#include <stdio.h>

void invertLowerUpperCase(char *arr, char* var)
{
        int i = 0;
        while (arr[i] != '\0')
        {
                if (arr[i] >= 97 && arr[i] <= 122){
                        var[i] = arr[i] - 32;
                }
                if (arr[i] >= 65 && arr[i] <= 90)
                        var[i] = arr[i] + 32;
                i++;
        }
        var[i] = '\0';
}

int main()
{
        char string[256];
        char string2[256];

        puts("Inserte Un String");
        gets(string);

        invertLowerUpperCase(string, string2);

        puts("Invertiendo las mayusculas y minusculas Seria: ");
        puts(string2);
}