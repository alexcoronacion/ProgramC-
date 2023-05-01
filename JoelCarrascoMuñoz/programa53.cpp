#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    const int max=6;
    int encontrando=0;
    int nBuscar;
    int indice;

    int notas[max]={10,12,15,16,13,19};
    cout<<"\nIngrese numero a buscar: ";
    cin>>nBuscar;
    for(int i=0;i<max;i++){
        if(nBuscar==notas[i]){
            encontrando=1;
            indice=i;
        }
    }
    if(encontrando){
        cout<<"\nEl numero ocupa la posicion "<<(indice+1);
    }
    else{
        cout<<"\nEl numero no se encuentra en el arreglo";
    }
    return 0;
}
