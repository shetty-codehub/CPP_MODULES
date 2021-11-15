#include<iostream>
using namespace std;


//The following example illustrates the overloading of the absolute value function
//
//

// overload abs three ways
int fabs (int n);
long fabs (long n);
double fabs (double n);
double fabs (float n);
int main( ) {
cout<< "Abs value of -10: "<< fabs(-10)<< "\n";
cout<< "Abs value of -10L: "<< fabs(-10L)<< "\n";
cout<<"Abs value of -10.01:"<<fabs(-10.01f)<<"\n";
return 0;
}
// abs( ) for ints
int fabs (int n) {
cout << "In integer abs( )\n";
return n<0 ? -n : n;
}
// abs( ) for long
long fabs (long n) {
cout << "In long abs( )\n";
return n<0 ? -n : n;
}
// abs( ) for double
double fabs (double n) {
cout << "In double abs( )\n";
return n<0 ? -n : n;
}
double fabs (float n) {
cout << "In float abs( )\n";
return n<0 ? -n : n;
}
