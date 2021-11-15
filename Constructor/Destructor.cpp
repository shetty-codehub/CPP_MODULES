


/*complement of a constructor is the destructor. This function is called when
an object is destroyed. */

//name of a destructor is the name of its class preceded by a ∼
/*Local objects are destroyed when they go out of scope. Global objects are
destroyed when the program ends.*/

#include <iostream>
#include <cstring>
using namespace std;
// class declaration
class myclass {
int a;
public:
myclass(); //constructor
//∼myclass(); //destructor
    ~myclass(); // destructor

void show();
};
myclass::myclass( ) {
cout << "In constructor\n";
a=10;
}
myclass::~myclass( ) {
cout << "Destructing...\n";
} // ...
class String {
private:
    char* s;
    int size;
 
public:
    String(char*); // constructor
    ~String(); // destructor
};
 
String::String(char* c)
{
    size = strlen(c);
    s = new char[size + 1];
    strcpy(s, c);
}
String::~String() { delete[] s; }
int main(void)
{
myclass obj;
}
