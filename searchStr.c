// Ejercicio 9
// Realizar un programa que compruebe si una cadena contiene una subcadena.
// Las dos cadenas se introducen por teclado.

#include <stdio.h>

int lenghtStr(char *str) // Esta funcion devuelve la longitud de un string sin contar el \0
{
        int i = 0;             // Esta variable almacenara la longitud del string
        while (str[i] != '\0') // Mientras la casilla no sea \0 entonces se sumara 1 a i
        {
                i++;
        }
        return i; // Devuelve la longitud del string
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

void subString(char *arr, int from, int to, char *var)
{
        int x = 0;
        for (int i = from; i < to; i++)
        {
                var[x] = arr[i];
                x++;
        }
        var[to - from] = '\0';
}

int searchStr(char *arr, char *cmp)
{
        int len1 = lenghtStr(arr);
        int len2 = lenghtStr(cmp);
        int i = 0;
        while (arr[i] != '\0')
        {
                char string[len2 + 1];
                if (arr[i] == cmp[0] && len2 + i < len1){
                        subString(arr, i, i + len2, string);

                        if(compareStr(string, cmp))
                                return 1;
                }
                i++;
        }
        return 0;
}

int main()
{
        char string1[300];
        char string2[300];
        
        puts("Inserte String 1");
        gets(string1);

        puts("Inserte String 2");
        gets(string2);

        printf("%d", searchStr(string1, string2));
}