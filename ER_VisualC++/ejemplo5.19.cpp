//
// Created by Christian on 4/08/2022.
//
#include "iostream"
#include "iomanip"
using namespace std;
int main(){
    int xultimo,yultimo,producto;
    cout<<"ingrese ultimo x: ";cin>>xultimo;
    cout<<"ingrese ultimo y: ";cin>>yultimo;
    for(int x=1;x<=xultimo;x++){
        for(int y=1;y<=yultimo;y++){
            producto=x*y;
            cout<<setw(2)<<x<<" * "<<setw(2)<<y<<" = "<<setw(3)<<producto<<endl;
        }
    }
}
