//
// Created by alexc on 8/2/2022.
//
#include "iostream"
using namespace std;

void myFunction(int myNumbers[5]);

int main(){
    int myNumbers[5]={10,20,30,40,50};
    myFunction(myNumbers);
    return 0;
}

void myFunction(int myNumbers[5]){
    for(int i=0;i<5;i++){
        cout<<myNumbers[i]<<"\n";
    }
}