// Ejercicio 6
// Realizar un programa que dada una cadena de caracteres por caracteres, 
// genere otra cadena resultado de invertir la primera.
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

void invertString(char *str, char *var) 
{

        int lenght = lenghtStr(str);  // Se obtiene el tamaño del string

        // concat invert
        for (int i = lenght; i > 0; i--)        // el bucle comienza desde el final del array y termina cuando sea igual a 0
        {
                var[lenght - i] = str[i - 1];   /*
                                                lenght - i hace que la posicion de i comience desde 0 hasta el tamaño del array - 1,
                                                i - 1 sirve para obtener la casilla alterior a i*/
        }
        var[lenght] = '\0';     // Almacena en la ultima casilla \0
}

int main(){
        char arr[300];

        puts("Inserte Array a Invertir");
        gets(arr);

        char arrInv[lenghtStr(arr) + 1];
        invertString(arr, arrInv);

        puts(arrInv);

        return 0;
}