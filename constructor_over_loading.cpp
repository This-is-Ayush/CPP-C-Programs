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
class sub_super:public super
{
	public:
		int a,b;
		sub_super(int x,int y):super(x)
		{
			a=x;
			b=y;
			cout<<"SUB SUPER CLASS"<<endl<<endl;
		}
};
class sub:public sub_super
{
	public:
		int a,b,c;
		sub(int x,int y,int z):sub_super(x,y)
		{
			a=x;
			b=y;
			c=z;
			cout<<"DERIVED CLASS"<<endl<<endl;
		}
};
int main()
{
 sub object(1,2,3);
 return 0;
}
