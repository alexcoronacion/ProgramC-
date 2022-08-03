//
// Created by alexc on 8/2/2022.
//
#include "iostream"
using namespace std;
int main(){
    int numero,contador;
    contador=0;
    cout<<"Ingrese numero: ";cin>>numero;
    while(numero>0){
        cout<<"Ingrese numero: ";cin>>numero;
        contador++;
    }
    cout<<"Cantidad de numeros positivos son: "<<contador;
}