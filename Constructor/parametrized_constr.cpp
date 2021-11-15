#include <iostream>
using namespace std;
/*It is possible to pass one or more arguments to a constructor function. Simply add
the appropriate parameters to the constructor function’s declaration and
definition. Then, when you declare an object, specify the arguments.*/
// class declaration
class myclass {
int a;
public:
myclass(int x); //constructor
void show( );
};
myclass::myclass(int x) {
cout << "In constructor\n";
a=x;
}
/*Unlike constructor functions, destructors cannot have parameters.*/

void myclass::show( ) {
cout << a <<"\n";
}
int main( ) {
/*myclass ob = myclass(4);long form*/
myclass ob(4);
ob.show( );
return 0;
}
