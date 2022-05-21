#include<iostream>
using namespace std;

class ABC
{
public:
int a,b;
void data()
{
cout<<"Enter the value of A :"<<endl;
cin>>a;
cout<<"Enter the value of B :"<<endl;
cin>>b;
}
void swap()
{
a=a+b;
b=a-b;
a=a-b;
cout<<"Value of A :"<<a<<endl;
cout<<"Value of B :"<<b;
}
};
int main()
{
ABC ob1;
ob1.data();
ob1.swap();
return 0;
}
