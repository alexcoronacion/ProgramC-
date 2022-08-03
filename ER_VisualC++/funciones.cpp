//
// Created by alexc on 8/2/2022.
//
#include "iostream"
using namespace std;

void myFunction(string fname);
void myFunction2(string fname,int age);
int funcion3(int x);
int funcion4(int x,int y);
void swapNums(int &x,int &y);

int main(){

    int firstNum=10,secondNum=20;
    cout<<firstNum<<secondNum<<"\n";
    swapNums(firstNum,secondNum);
    cout<<endl;
    cout<<firstNum<<secondNum<<"\n";

    myFunction("Liam");
    myFunction2("Liam",3);
    myFunction2("Christian",37);

//Return Values
    cout<<funcion3(3)<<endl;
    cout<<funcion4(5,3)<<endl;
    int z= funcion4(2,3);
    cout<<z;

    return 0;
}
//Function definition
void myFunction(string fname){
    cout<<fname<<" Refsnes\n";
}
void myFunction2(string fname,int age){
    cout<<fname<<" Refsnes. "<<age<<" years old. \n";
}
//Return Values... Valores devueltos
int funcion3(int x){
    return 5+x;
}
int funcion4(int x,int y){
    return x+y;
}
//Pass By Reference.. Pasar por referencia
void swapNums(int &x,int &y){
    int z=x;
    x=y;
    y=z;
}