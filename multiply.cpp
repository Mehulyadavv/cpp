#include<iostream>
#include<cmath>
using namespace std ;
int  multiply(){
    int num1=0;
    cout<<"what is num1 mf"<<endl;
    cin >> num1 ;
    int num2=0;
    cout<<"num2?"<<endl;
    cin >> num2 ;
    int multiplynum = num1*num2;
    cout<<"ans..."<< multiplynum<<endl;    
}
int main(){
    cout<<"this is going to show multiplication of 2 nos."<<endl;
    return multiply() ;
}