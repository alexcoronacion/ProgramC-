#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    const int max=10;
    int nBuscar,primero=0,ultimo=max,central,encontrado=0;

    int notas[max]={8,10,10,11,12,13,15,17,18,19};
    cout<<"\nIngresar numero a buscar: ";cin>>nBuscar;
    while((primero<=ultimo)&&(!encontrado)){
        central=(primero+ultimo)/2;
        if(nBuscar==notas[central])
        {
            encontrado=1;
        }
        else{
            if(nBuscar>notas[central])
            {
                primero=central+1;
            }else{
                ultimo=central-1;
            }
        }
    }
    if(encontrado){
        cout<<"\nEl numero se encuentra en la posicion"<<(central+1);

    }else{
        cout<<"\nEl numero no se encuentra en el arreglo";
    }

    return 0;
}
