#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool ismale = false;
    bool isfat = true;
    if (ismale && isfat)
    {
        cout << "you are a fat man" << endl;
        return 0;
    }

    else if (!ismale && !isfat)
    {
        cout << "you are a fat woman" << endl;
    }
    else if (!ismale && isfat)
    {
        cout << "fat woman" << endl;
    }

    else
    {
        cout << "you are a slim trans.." << endl;
    }
}
