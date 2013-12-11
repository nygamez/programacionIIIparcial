#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
struct trabajador
{
    char nombre[30];
   double Turno,PC,Ventas,Comision,IHSS,TP;

};

void ingresar(trabajador &emplex)
{
    cout<<"Ingresar nombre del empleado  = ";
    cin.getline(emplex.nombre,30);
    cout<<"Ingrese las ventas = ";
    cin>>emplex.Ventas;
_flushall();
    do
    {
        cout<<"Ingrese el turno del empleado  = ";
        cin>>emplex.Turno;
    }while(!((emplex.Turno>=1)and(emplex.Turno<=3)));

}

double porcomision(double turno)
{
    if (turno==1)
        {
            return 0.03;
        }
    else if (turno==2)
        {
            return 0.05;
        }
    else
        {
            return 0.06;
        }

}

double SeguroSocial(double Ventas)
{
    if (Ventas>7000)
    {
    return 245;
    }
    else
    {
    return 0.035 * Ventas;
    }
}

void calcular (trabajador &emplex)
{
    emplex.PC=porcomision(emplex.Turno);
    emplex.Comision= emplex.PC * emplex.Ventas;
    emplex.IHSS= SeguroSocial(emplex.Ventas);
    emplex.TP= emplex.Comision -  emplex.IHSS;
}

void presentar(trabajador emplex)
{   cout<<"\n";
    cout<<"Nombre del Empleado...:"<<emplex.nombre <<"\n";
    cout<<"Porsentade de la comision...: "<< emplex.PC<<"\n";
    cout<<"Comision obtenida...: "<<  emplex.Comision<<"\n";
    cout<<"IHSS...:"<<emplex.IHSS  <<"\n";
    cout<<"Total a pagar...: "<<emplex.TP <<"\n";

}

trabajador emplex;
int main()
{
ingresar(emplex);
calcular(emplex);
presentar(emplex);
return 0;
}
