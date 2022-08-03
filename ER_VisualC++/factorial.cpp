//
// Created by Christian on 3/08/2022.
//
#include "iostream"
using namespace std;
int main(){
    int numero,n;
    double factorial;
    cout<<"Ingresar cantidad de  numeros se realizara su factorial: ";cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Ingrese numero para hallar su factorial: ";cin>>numero;
        factorial=1;
        for(int j=1;j<=numero;j++){
            factorial*=j;
        }
        cout<<"El factorial del numero "<<numero<<" es "<<factorial<<endl;
    }
}