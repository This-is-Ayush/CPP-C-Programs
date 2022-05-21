#include<iostream>
using namespace std;
class super
{
	public:
		int a;
		super(int x)
		{
			a=x;
			cout<<"SUPER CLASS"<<endl<<endl;
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
			cout<<"SUB SUPER CLASS"<<endl<<endl;
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
			cout<<"DERIVED CLASS"<<endl<<endl;
		}
};
int main()
{
 sub ob(1,1,1);
}
