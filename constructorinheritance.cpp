#include<iostream>
using namespace std;
class super
{
		int a;
	public:
		super(int x)
		{
			a=x;
			cout<<"SUPER!"<<endl;
		}
		~super()
		{
			cout<<"I am Base Class DISTRUCTOR"<<endl;
		}
		
};
class subsuper:public super
{
		int a,b;
	public:
		subsuper(int x,int y):super(x)
		{
			a=x;
			b=y;
			cout<<"SUB SUPER!!"<<endl;
		}
		~subsuper()
		{
			cout<<"I am Subsuper Class DISTRUCTOR"<<endl;
		}
};
class sub:public subsuper
{
	int a,b,c;
	public:
		sub(int x,int y,int z):subsuper(x,y)
		{
			a=x;
			b=y;
			c=z;
			cout<<"DERIVED CLASS!!!"<<endl<<endl;
		}
		~sub()
		{
			cout<<"I am Derived Class DISTRUCTOR"<<endl;
		}
};
int main()
{
 sub ob(10,20,30);
}
