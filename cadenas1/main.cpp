#include <iostream>

using namespace std;
char cadena[30];
int main()
{
    cout << "ingresar una cadena...:";
    cin.getline(cadena,30);
    cadena[0]='X';
    cout<<cadena<<"\n";
    return 0;
}
