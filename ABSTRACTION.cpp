/*DATA ABSTRACTION IS THE CONCEPT OF OPPS THAT "SHOWS" ONLY 
ESSENTIAL ATTRIBUTES OF THE PROGRAM AND "HIDES" UNNECESSARY 
DETAILS FROM THE USER.
IT HELPS IN REDUCING PROGRAMMING COMPLEXITY.               */

//HERE THE EXAMPLE
#include<iostream>
using namespace std;
class abst{
	private: int a,b,c;
	public:
		void sum(int x,int y)
		{
			a=x;
			b=y;
			c=a+b;
			cout<<"sum is two integer is:"<<c<<endl;
		}
};
int main()
{
	abst obj;
	obj.sum(10,40);
}
