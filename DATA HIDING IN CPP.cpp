/*Data hiding is a process of combining data and functions
 into a single unit. The ideology behind data hiding is to
  conceal data within a class, to prevent its direct access
   from outside the class. It helps programmers to create 
   classes with unique data sets and functions, avoiding 
   unnecessary penetration from other program classes.*/

#include<iostream>
using namespace std;
class Base
{
    int n;  //by default private
    public:
    void read();
    void print();    
};
void Base :: read(){
    cout<<"Enter any Integer value"<<endl;
	cin>>n;    
}
void Base :: print(){
    cout<<"The value is "<<n<<endl;
}
  
int main(){
    Base obj;
    obj.read();
    obj.print();   
    return 0;
}
