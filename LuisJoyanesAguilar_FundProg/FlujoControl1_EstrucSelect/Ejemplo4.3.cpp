#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    double a,b;
    double x;
    cout<<"Ingrese valor a: ";cin>>a;
    cout<<"Ingrese valor b: ";cin>>b;
    
    if(a!=0){
        x=-b/a;
        cout<<x;
    }else if(a==0 && b!=0){
        cout<<"solucion imposible!!!";
    }else if(a==0 && b==0){
        cout<<"Solución Indeterminada!!!";
    }else{
        cout<<"ya fue!!";
    }
    return 0;
}
