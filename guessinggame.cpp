#include <iostream>
using namespace std ;

int main(){
    int secretnum = 5 ;
    int guess ;
    int guesscount = 0 ;
    int guesslimit = 3 ;
    bool outofguesses = false ;



    while(secretnum != guess && !outofguesses){
        if(guesscount < guesslimit){
            cout << "enter num" << endl ;
        cin >> guess ;
        guesscount++ ;
        }
        else {
             outofguesses = true ;
        }
        
    }
    
    if(outofguesses){
        cout << "ulost" << endl;
    }
    else{
         cout << "uwin" << endl ;
    }

}