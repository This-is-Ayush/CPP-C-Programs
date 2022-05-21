#include<iostream>
using namespace std;
class ABC
{
	public:
		int sum(int arr[])
		{
			int i,s=0;
		    for(i=0;i<sizeof(arr);i++)
			    if(arr[i]%2==0)
				   s=s+arr[i];
			return s;	   	
	    }
	    
};
int main()
{
	int n,i,a[20];
	cout<<"Enter Size of ARRAY:"<<endl;
	cin>>n;
	cout<<"Enter Numbers:"<<endl;
	for(i=0;i<n;i++)
	   cin>>a[i];
	ABC ob;
	cout<<"Sum of EVEN Number:"<<ob.sum(a);
}
