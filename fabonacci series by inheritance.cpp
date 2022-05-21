#include<iostream>
using namespace std;
class A
{
	public:
		int a,b,n;
		void base_class()
		{
			a=0;
			b=1;
			cout<<"ENTER THE POSITIVE INTEGER:"<<endl;
			cin>>n;
		}
};
class B:public A
{
	public:
		int c;
		void fun()
		{
			int i;
			for(i=1;i<=n;i++)
			{
				a=b;
				b=c;
				c=a+b;
				cout<<c<<endl;
			}
		}
};

int main()
{
	B object;
		object.base_class();
		object.fun();
		return 0;
}
