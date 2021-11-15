
#include<iostream>
using namespace std;
// class declaration
class myclass {
// private members to myclass
int a;
int b;
public:
// public members to myclass
void set_a(int num);
int get_a( );
};
int main()
{
cout<<sizeof(myclass)<<endl;

myclass ob1, ob2;//these are object of type myclass
// ... program code
}
