#include <iostream>
using namespace std ;

int main(){
    int numgrid[3] [2] = {
        {1,2},{3,4},{5,6}
    } ;
// This code snippet creates a 2D array called numgrid with 3 rows 
//and 2 columns. It then uses nested loops to iterate through each element of the array and prints its value.

for(int i=0 ; i<3 ; i++) {
    for(int j=0 ; j<2 ; j++) {
        cout << numgrid[i][j];
    }
     cout << endl;
}


return 0 ;
}