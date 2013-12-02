#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>


using namespace std;
struct empleados
{char nombre [30];
    int ventas, comis;

};

const int tam=5;
empleados emple[tam];
empleados emplemax;
empleados mayorempleado(empleados emple[])
{
    empleados auxmayor;
    auxmayor.comis=0;
    for (int i=0;i<tam;i++)
    {
        if (auxmayor.comis<emple[i].comis)
            auxmayor=emple[i];
    }
    return auxmayor;
}

void Ingreso(empleados emple[])
{
    for (int i=0;i<tam;i++)
    {
        cout << "Ingresar el nombre del empleado..:";
        cin.getline(emple[i].nombre,30);

        cout << "Ventas del empleado...:";
        cin >> emple[i].ventas;
        _flushall();

    }
}

void Calcular(empleados emple[])
{
     for (int i=0;i<tam;i++)
    {
        emple[i].comis=emple[i].ventas *0.05;

    }
}

void Presentar(empleados emple[])
{
     for (int i=0;i<tam;i++)
    {
        cout << "El empleado" << emple[i].nombre << "Gano"
        << emple[i].comis  << "de comision" << "\n";

    }
}
int main()
{
    Ingreso(emple);
    Calcular(emple);
    Presentar(emple);
    emplemax=mayorempleado(emple);
    cout << "El empleado que tiene la mayor comision es:"
    << emplemax.nombre << "Con la comision" << emplemax.comis;


    return 0;
}
