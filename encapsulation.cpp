#include <iostream>
using namespace std;

class employee
{
private:
    string name;
    string company;
    int age;

public:
    void setname(string namee){
        name = namee;
    }    

    string getname(){
        return name;
    }

    void setcompany(string compa){
        company = compa;
    }
    string getcompany(){
        return company;
    }

    void setage(int aage){
        age = aage ;

    }
    int getage(){
        return age;
    }

    void introduceyourself()
    {
        cout << "Name-" << name << endl;
        cout << "Company--" << company << endl;
        cout << "age-" << age << endl;
    }
    employee(string Naam, string Comp, int Agee)
    {
        name = Naam;
        company = Comp;
        age = Agee;
    };
};

int main()
{
    employee employee1 = employee("saldina", "code beauty", 25);
    employee1.introduceyourself();
    employee1.setage(39);
    cout << employee1.getname() << " is " << employee1.getage() << " years old." << endl;

    
}