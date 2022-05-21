#include<iostream>
using namespace std;
class myclass {
int a;
public:
myclass(int x); //constructor
int get( );
};
myclass :: myclass(int x) {
a=x;
}
int myclass :: get( ) {
return a;
}
int main( ) {
myclass ob(120); //create object
myclass *p; //create pointer to object
p=&ob; //put address of ob into p
cout <<"value using object: " <<ob.get( );
cout <<"\n";
cout <<"value using pointer: " <<p->get( );
//return0;
}
