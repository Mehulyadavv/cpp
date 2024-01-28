#include <iostream>
using namespace std ;

int main(){
    int ages = 21 ;
    
    int *pAge = &ages ;
    //ages jaha located h vaha ka address show karna h.
    cout << pAge << endl ;
    // dereferencing the pointer (location pr jo value h vo show ho jati h)
    cout << *pAge ;

    return 0 ;

}