/*Encapsulation binds the data & functions
 together which keeps both safe from outside
  interference. Data encapsulation led to
   data hiding.*/
#include<iostream> 
using namespace std;   
class Encapsulation 
{ 
    private: // data hidden from outside world 
        int n; 
           
    public: 
        // function to set value of  
        // variable x 
        void set(int a) 
        { 
            n =a; 
        } 
           
        // function to return value of 
        // variable x 
        int get() 
        { 
            return n; 
        } 
}; 
	int main() //main function
{ 
    Encapsulation obj; 
    obj.set(5); 
    cout<<obj.get(); 
    return 0; 
}
