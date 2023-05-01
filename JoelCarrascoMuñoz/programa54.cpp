#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

const int cantidad=5;
int numero[cantidad];

int main(int argc, char const *argv[])
{
    cout<<"\nORDENAMIENTO DE ARREGLO\n";
    cout<<"-------------------------------";
    cout<<"(5 elementos)\n\n";

    int i=0;
    do{
        cout<<"Leer numero["<<i<<"]";
        cin>>numero[i];
        i++;
    }while(i<cantidad);
    int aux;
    for(int i=0;i<cantidad;i++){
        for(int j=i+1;j<cantidad;j++){
            if(numero[i]<numero[j]){
                aux=numero[i];
                numero[i]=numero[j];
                numero[j]=aux;
            }
        }
    }

    i=0;
    cout<<"\nDATOS ORDENADOS\n\n";
    do{
        cout<<"Elemento["<<i<<"]: "<<setw(6)<<numero[i]<<endl;
        i++;
    }while(i<cantidad);
    
    return 0;
}
