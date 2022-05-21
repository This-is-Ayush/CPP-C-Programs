#include<iostream>
using namespace std;
class Distance
{private:
	int feet;
	float inches;
	public:
		Distance()
		{
			feet=0;inches=0.0;
		}
		Distance(int ft,float in) //constuctor(two argument)
		{
		feet=ft;inches=in;
		}
		void getdist()  //get length from user
		{
			cout<<"\n ENTER FEET:"<<endl;
			cin>>feet;
			cout<<"ENTER INCHES:"<<endl;
			cin>>inches;
		}
		void showdist()     //display distance
		{
			cout<<feet<<"\""""<<inches<<"\"";
		}
		Distance operator+(Distance);  //add two Distance
};
Distance Distance::operator+(Distance d2)  //return the sum and {also syntax of Operator Overloading}
{
	int f=feet+d2.feet;        //add the feet
	float l=inches+d2.inches;  //add the inches
	if(l>=12.0)
	{
		l-=12.0;
		f++;}
		return Distance(f,l);
		
}
int main()
{
	Distance di1,di2,di3,di4;   //define distances
	di1.getdist();
	Distance dist2(11,6.26);
	di3=di1+di2;
	di4=di1+di2+di3;
	cout<<"\n Distance 1=";di1.showdist();
	cout<<"\n Distance 2=";di2.showdist();
	cout<<"\n Distance 3=";di3.showdist();
	cout<<"\n Distance 4=";di4.showdist();
}
