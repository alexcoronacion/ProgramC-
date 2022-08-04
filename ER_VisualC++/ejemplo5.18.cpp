//
// Created by Christian on 4/08/2022.
//imprimir todos los numeros primos entre 2 y 100 inclusive
//
#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    int divisor;
    bool primo;
    for(int i=2;i<=100;i++){
        divisor=2;
        primo=true;
        while((divisor<=sqrt(i))and primo){
            if((i % divisor)==0){
                primo=false;

            }else{
                divisor++;
            }
        }
        if(primo){
            cout<<i<<" ";
        }
    }
}