#include<iostream>
using namespace std;
class base
{
	public:
		virtual void area()
		{
			int r;
			cout<"Enter Radius:";
			cin>>r;
			cout<<3.14*r*r;
		}
};
class derived:public base
{   public:
	void area()
	{
	int a;
	cout<<"Enter Side of Square:"<<endl;
	cin>>a;
	cout<<a*a;
	}
};
int main()
{
	base *ob;
	derived o;
	ob=&o;
	ob->area();
	return 0;
}
