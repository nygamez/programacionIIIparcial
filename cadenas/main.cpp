#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*
Ingrese 5 cadenas de tipo char a un arreglo usanda un procedimiento, luego elavorar una funcion
que cuente cuantas consonantes tiene cada uno de los nombres.
elaborar un procedimiento para agregar al final de la cadena un asterisco. Presentar la cadena modificada con el
asterisco y a la par el numero de consonantes que tiene.
*/
const int n=5;
char cadena [n][30];

void ingresar (char cadena [n][30])
{
    int i;
    for (i=0;i<n;i++)
    {
       cout<<"Ingrese la Cadena["<<i<<"]...";
       cin.getline(cadena[i],30);
    }

}

void cambias (char cadena [n][30])
{
    int i;
    int fin;
    for (i=0;i<n;i++)
    {
        fin = strlen(cadena[i]);
        cadena[i][fin]='*';
    }
}

void presentar (char cadena[n][30])
{
    int i;
    for (i=0;i<n;i++)
    {
        cout<<"cadena["<<i<<"]..."<<cadena[i]<<"\n";
    }
}

int main()
{
    ingresar(cadena);
    cambias(cadena);
    presentar(cadena);
    return 0;
}
