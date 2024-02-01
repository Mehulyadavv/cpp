#include <iostream>
using namespace std;

class employee
{
  public:
    string name;
    string company;
    int age;

    void introduceyourself() {
        cout << "Name-" << name << endl;
        cout << "Company--" << company << endl;
        cout << "age-" << age << endl;
    }
};

int main()
{
    employee employee1 ;
    employee1.company = "MY corp";
    employee1.name = "M";
    employee1.age = 21;
    employee1.introduceyourself();

    employee employee2 ;
    employee2.name = "Anu";
    employee2.introduceyourself();
}