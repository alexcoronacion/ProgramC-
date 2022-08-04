//
// Created by Christian on 4/08/2022.
//
#include "iostream"

using namespace std;
int main(){
    int numero,n;
    double factorial;
    cout<<"Ingresar el total de numeros: ";cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Ingrese el numero["<<i<<"]: ";cin>>numero;
        factorial=1;
        for(int j=1;j<=numero;j++){
            factorial*=j;

        }
        cout<<"el factorial de "<<numero<<" es: "<<factorial<<"\n";
    }

    return 0;
}