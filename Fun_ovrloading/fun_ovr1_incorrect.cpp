
#include<iostream>
using namespace std;


//The following example illustrates the overloading of the absolute value function
//only return type change will not be considered overloading 
//
int f1(int);
double f1(int);

int main(void)
{
//compiler dont know which version of f1 to call
f1(10);

}
int f1(int a)
{
cout<<"f1 returning int"<<a<<endl;
return a;
}
double f1(int a)
{
cout<<"f1 returning int"<<a<<endl;
return 10.6;
}
