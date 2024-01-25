#include <iostream>
using namespace std;

string getdayoftheweek(int daynum)
{
    string dayname;
    switch (daynum)
    {
    case 0:
        dayname = "sunday";
        break;
    case 1:
        dayname = "monday";
        break;
    default:
        dayname = "invalid";
    }
    return dayname ;
}

int main()
{
   cout << getdayoftheweek(21) ;
   return 0 ;
}