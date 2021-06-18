#include <iostream>  
using namespace std;  
class A  
{  
   public:  
    int x;  
    A(int a)                // parameterized constructor.  
    {  
      x=a; 
      cout<<"x = "<<a<<endl; 
    }  
};
int main()  
{  
    cout<<"\nMade By: Akshay Khare CSE B 54\n";
    A a1(20);               // Calling the parameterized constructor.  
    return 0;  
}
