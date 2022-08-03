#include <iostream>
using namespace std;
int main() {
    int n,total;
    double numero,suma;
    cout<<"Ingresar el total de numeros: ";cin>>n;
    total=n;
    suma=0;
    while (total>0){
        cout<<"Ingrese dato: ";cin>>numero;
        suma+=numero;
        total-=1;
    }
    cout<<"La suma de los "<<n<<" Numeros es: "<<suma;
}
