#include <iostream>
using namespace std;

// class is an template , blueprint of a data type (this book class is specification of a book we are going to make mf...)
class Book
{
public:
    string title;
    string author;
    int pages;
    Book() {
        cout << "creating object" << endl;
    }
};

int main()
{

    // object is an actual instance of a speification..
    Book book1 ;
    book1.title = "dostovyesky";
    book1.pages = 69;

    Book book2 ;
    book2.title = "brothers karmazov";
    book2.author = "idk";
    book2.author = "i still dont know";
     cout << book1.title << endl;
     cout << book2.author << endl;



    return 0;
}
