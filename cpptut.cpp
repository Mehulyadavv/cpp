#include <iostream>
#include <cmath>
using namespace std;
// namespace std:

int main()
{

    string ch = "fucck";
    cout << "fuck"
         << "fucck"
         << "inghi" << endl;

    double gpa = -4.7;
    float gpaa = -6.89;
    string phrase = "mehul yadav";
    cout << phrase << endl;
    cout << phrase.length();
    phrase[0] = 'L';
    cout << phrase << endl;
    cout << phrase.find("ul", 1);
    string phrasesub;
    phrasesub = phrase.substr(3, 8);
    cout << phrasesub << endl;
    // C++ maths functions
    cout << 6 + 9 << endl;
    cout << 6 / 9 << endl;
    cout << 6 * 9 << endl;
    cout << 10 % 3 << endl;
    int num = 5;
    num++;
    cout << num << endl;
    cout << sqrt(36);
    int power;
    power = pow(7, 9);
    cout << power << endl;
    cout << round(4.5) << endl;
    cout << ceil(4.1) << endl;
    cout << floor(4.4) << endl;
    cout << fmax(5, 7) << endl;
    // input number or character from users
     /*int age;
    cout << "enter age : " << endl;

    cin >> age;
    cout << "your age is " << age << " years old" << endl; */
    // get a string
    string name;
    cout << "your name motherfucker ?" << endl;
    getline(cin, name);
    cout << "your name is " << name << endl;

    return 0;
}
