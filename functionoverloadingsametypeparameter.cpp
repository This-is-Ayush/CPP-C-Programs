#include<iostream>
using namespace std;
class ABC
{
	public:
	int a,b;
	double a1,b1;
	void sum(int x,int y)
	{
		a=x;
		b=y;
		cout<<a+b<<endl;
	}
	void sum(double x1,double y1)
	{
		a1=x1;
		b1=y1;
		cout<<a1+b1<<endl;
	}
};
int main()
{
	ABC obj;
	obj.sum(2,20);
	obj.sum(6.5,4.5);
	return 0;
}
