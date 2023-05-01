#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int cantidad;
    
    int i=0;
    cout<<"Ingrese la cantidad de numeros a Ingresar: ";
    cin>>cantidad;
    int numero[cantidad];

    do{
        cout<<"Leer numero: ["<<i<<"]";
        cin>>numero[i];
    }

    
    return 0;
}

