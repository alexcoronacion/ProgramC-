//
// Created by Christian on 4/08/2022.
//
#include "iostream"
#include "iomanip"
using namespace std;
int main(){
    //cabecera de la impresion
    cout<<setw(12)<<" i "<<setw(6)<< " j "<<endl;
    for(int i=0;i<4;i++){
        cout<<"Externo "<<setw(3)<<i<<endl;
        for(int j=0;j<i;j++){
            cout<<"Interno "<<setw(9)<<j<<endl;
        }
    }
}