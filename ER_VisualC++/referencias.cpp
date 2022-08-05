//
// Created by alexc on 4/08/2022.
//
#include "iostream"
using namespace std;
int main(){

    string food="Pizza";
    string* ptr=&food;

    cout<<food<<"\n";
    cout<<&food<<"\n";
    cout<<*ptr<<"\n";

}
