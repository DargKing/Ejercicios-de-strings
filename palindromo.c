// Ejercicio 10
// Introducir una cadena de caracteres e indicar si es un palíndromo.
// Una palabra palíndroma es aquella que se lee igual adelante que atrás.

#include <stdio.h>
#include <stdbool.h>

int lenghtStr(char *str) // Esta funcion devuelve la longitud de un string sin contar el \0
{
        int i = 0;             // Esta variable almacenara la longitud del string
        while (str[i] != '\0') // Mientras la casilla no sea \0 entonces se sumara 1 a i
        {
                i++;
        }
        return i; // Devuelve la longitud del string
}

void invertString(char *str, char *var)
{

        int lenght = lenghtStr(str); // Se obtiene el tamaño del string

        // concat invert
        for (int i = lenght; i > 0; i--) // el bucle comienza desde el final del array y termina cuando sea igual a 0
        {
                var[lenght - i] = str[i - 1]; /*
                                              lenght - i hace que la posicion de i comience desde 0 hasta el tamaño del array - 1,
                                              i - 1 sirve para obtener la casilla alterior a i*/
        }
        var[lenght] = '\0'; // Almacena en la ultima casilla \0
}

int repeatChar(char *arr, char c)
{
        int i = 0;
        int resul = 0;
        while (arr[i] != '\0')
        {
                if (arr[i] == c)
                        resul++;
                i++;
        }
        return resul;
}

void deleteSpaces(char *var, char *arr)
{
        int i = 0;
        int x = 0;
        while (arr[i] != '\0')
        {
                if (arr[i] != ' ')
                {
                        var[x] = arr[i];
                        x++;
                }
                i++;
        }
        var[x] = '\0';
}

int compareStr(char *arr1, char *arr2)
{
        int len1 = lenghtStr(arr1);
        int len2 = lenghtStr(arr2);

        if (len1 != len2)
                return 0;

        int i = 0;

        while (arr1[i] != '\0')
        {
                if (arr1[i] != arr2[i])
                        return 0;
                i++;
        }

        return 1;
}

bool esUnPalindromo(char *arr)
{
        int len = lenghtStr(arr) - repeatChar(arr, ' ');
        char arrSinEsp[len];
        char arrInv[len];

        deleteSpaces(arrSinEsp, arr);

        invertString(arrSinEsp, arrInv);

        if (!compareStr(arrSinEsp, arrInv))
        {
                return false;
        }

        return true;
}

int main()
{
        char arr[] = "dabale arroz a la zorra el abad";

        printf("%d", esUnPalindromo(arr));

        return 0;
}