#include<iostream>
using namespace std;
class ABC
{
	public:
		void table();
};
//void ABC::table();
inline void ABC:: table()
{
	int a,b;
	cout<<"Enter Number:";
	cin>>a>>b;
	cout<<"Sum="<<(a+b);
}
int main()
{
	ABC obj;
	obj.table();
}
