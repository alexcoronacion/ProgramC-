//
// Created by alexc on 8/3/2022.
//
#include "iostream"
using namespace std;
int main(){
    int num,digitoSig;
    cout<<"Ingrese un numero: ";cin>>num;
    cout<<"\n";
    cout<<"Numero: "<<num<<"\n";
    cout<<"Numero en orden inverso: ";
    do{
        digitoSig=num%10;
        cout<<digitoSig;
        num/=10;
    }while(num>0);

}