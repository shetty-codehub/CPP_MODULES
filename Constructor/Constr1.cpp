#include<iostream>
using namespace std;

/*C++ allows a constructor function to be included in a
class declaration. A class’s constructor is called each time an object of that class
is created. */
/*For a global object, its constructor is called once, when the program first begins
execution.
For local objects, the constructor is called each time the declaration statement is
executed.*/

// class declaration
class myclass {
int a;
public:
myclass( ); //constructor
void show( );
};
myclass::myclass( ) {
cout << "In constructor\n";
a=10;
}
void myclass::show( ) {
cout << a;
}
int main( ) {
myclass ob; // automatic call to constructor
ob.show( );
return 0;
}


