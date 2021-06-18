//Write a program to implement overloading.

#include<iostream>
using namespace std;    
class Cal {    
    public:    
 		int add(int a,int b){      
        	return a + b;      
    	}      
 		int add(int a, int b, int c){      
        return a + b + c;      
    	}      
};     
int main() {   
	cout<<"\nMade By: Akshay Khare CSE B 54\n";
	cout<<"PROGRAM OF FUNCTION OVERLOADING"<<endl;
 
    Cal C;    
    int a,b,x,y,z;
	cout<<"\nEnter the two numbers whose sum you want to calculate:\n";
	cin>>a>>b;                                                
    cout<<"Sum of "<<a<<" and "<<b<<" is: "<<C.add(a, b)<<endl; 
    
	cout<<"\nEnter the three numbers whose sum you want to calculate:\n";  
	cin>>x>>y>>z;                                              
    cout<<"Sum of "<<x<<", "<<y<<" and "<<z<<" is: " <<C.add(x, y, z);         
   return 0;    
}
