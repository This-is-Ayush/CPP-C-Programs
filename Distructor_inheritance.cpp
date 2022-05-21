#include<iostream>
using namespace std;
class super
{
	public:
		int a;
		super(int x)
		{
			a=x;
			cout<<"SUPER!"<<endl;
		}
		~super()    /*it is syntax of distructor//*********(~)tilde symbol*/
		{
			cout<<"I am Base Class DISTRUCTOR"<<endl;
		}
		
};
class subsuper:public super
{
	public:
		int a,b;
		subsuper(int x,int y):super(x)
		{
			a=x;
			b=y;
			cout<<"SUB SUPER!!"<<endl;
		}
		~subsuper()    //(~)tilde symbol
		{
			cout<<"I am Subsuper Class DISTRUCTOR"<<endl;
		}
};
class sub:public subsuper
{
	public:
		int a,b,c;
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
