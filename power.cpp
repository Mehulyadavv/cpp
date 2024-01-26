#include <iostream>
#include <cmath>


using namespace std ;


int power(int base , int powernum){
    int result = 1 ;
    for(int i = 1 ; i <= powernum ; i++){
        result = result * base ;
    }

    return result ; 
}


   int main() {
    cout << power(2,4) << endl;
    return 0;
   } 
