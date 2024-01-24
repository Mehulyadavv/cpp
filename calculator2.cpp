#include<iostream>
#include<cmath>
using namespace std ;



int main()
{
    int num1 , num2 ;
    char op ;
    cout << "enter num1" << endl ;
    cin >> num1 ;
    cout << "enter num2" << endl ;
    cin >> num2 ;
    cout << "what do you want to do with them ?" << endl ;
    cin >> op ;
    int result ;
     if(op == '+' ){
        result = num1 + num2 ;
     }
     else if(op == '-' ){
        result = num1 - num2 ;
     }
     else if(op == '*' ){
        result = num1 * num2 ;
     }
     else if( op == '%' ) {
        result = num1 % num2 ;
     }
     else if ( op == '/' ){
        result = num1 / num2 ;
     }
     else {
        cout << "invalid" << endl ;

     }
     cout << result << endl ;
     }
    
     
