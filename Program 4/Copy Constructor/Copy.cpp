#include <iostream>  
using namespace std;  
class A  
{  
   public:  
    int x;  

    A(int j = 5)
    {
        int k = j;
        cout<<"Normal constructor called: Value = "<<k<<endl;
    }

    A(A &i)               // copy constructor  
    {     
        x = i.x;
        cout<<"Copy constructor called: Value = "<<x<<endl; 
    }  
};  
int main()  
{  
    cout<<"\nMade By: Akshay Khare CSE B 54\n";
    A a1(10);               //Calling normal constructor
    A a2 = a1;               //  Calling the copy constructor.  
    cout<<a2.x;  
    return 0;  
}
