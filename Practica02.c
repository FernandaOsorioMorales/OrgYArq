#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Función que calcula la media aritmética de un arreglo
float media_aritmetica(char *datos[], int n)
{
    float suma = 0;
    for (int i = 2; i < n; i++)
    {
        suma += atoi(datos[i]);
    }
    return suma / (n - 2);
}

// Función que calcula la media armónica de un arreglo
double media_armonica(char *datos[], int n)
{
    double sumaReciprocos = 0;
    for (int i = 2; i < n; i++)
    {
        sumaReciprocos += (1 / atof(datos[i]));
    }
    return (n - 2) / sumaReciprocos;
}

// Función que calcula la media geométrica de un arreglo de datos
float media_geometrica(char *datos[], int n)
{
    float productoDatos = 1;
    for (int i = 2; i < n; i++)
    {
        productoDatos = productoDatos * atoi(datos[i]);
    }
    double exponente = 1.0 / (n - 2);
    double raiz = pow(productoDatos, exponente);
    return raiz;
}

// Main
int main(int argc, char *argv[])
{
    if (*argv[1] == 'A')
    {
        printf("%f\n", media_aritmetica(argv, argc));
    }
    if (*argv[1] == 'H')
    {
        printf("%f\n", media_armonica(argv, argc));
    }
    if (*argv[1] == 'G')
    {
        printf("%f\n", media_geometrica(argv, argc));
    }
}
