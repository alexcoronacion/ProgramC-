//
// Created by Christian on 3/08/2022.
//
#include "iostream"
using namespace std;

int main(){
    int i,j,mayor,ciudad;
    i=1;
    while (i<=8){
        mayor=0;
        j=1;
        while(j<=25){
            cout<<"Ingrese cantidad de la poblacion de la ciudad: ";cin>>ciudad;
            if(ciudad>mayor){
                mayor=ciudad;
            }
            j++;
        }
        cout<<"La ciudad mayor es: "<<mayor<<endl;
        i++;
    }
}

