/* every object in cpp has access to it's own address through an important
 pointer called this pointer.the pointer is an implicit parameter to all 
 member functions. therefore,inside a member function, this may be used to
 refer to the invoking object. */

#include<iostream>
using namespace std;
class student
{
	int rollno;
	float marks;
	public:
		student(int a,float b)//Parameterized function with diffrent argument
		{
		this->rollno=a;
		this->marks=b;
	}
void show()// it function show/display the values.
{
	cout<<"\t\t\t\t"<<"Roll no is :"<<rollno<<"\n"<<endl;
	cout<<"\t\t\t\t"<<"Marks is :"<<marks<<endl<<endl;
}
};
int main()
{
	student obj(1,5.8); //value(Argument) pass to Parameterized function student.
	student ob(2,4.2);
	student o(8,0.7);
	obj.show();   // calling of show function 
	ob.show();
	o.show();
	return 0;
}
