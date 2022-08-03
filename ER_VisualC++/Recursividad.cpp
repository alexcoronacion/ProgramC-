//
// Created by alexc on 8/3/2022.
//
#include "iostream"
using namespace std;
int sum(int k);
int main(){
    int result=sum(10);
    cout<<result;
    return 0;
}
int sum(int k){
    if(k>0){
        return k+sum(k-1);
    }else{
        return 0;
    }
}
/*
10 + suma(9)
10 + ( 9 + suma(8) )
10 + ( 9 + ( 8 + suma(7) ) )
...
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + suma(0)
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
 */