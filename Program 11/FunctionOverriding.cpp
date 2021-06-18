//Write a program to implement overriding.

#include <iostream>  
using namespace std;  
class Animal {  
    public:  
void eat(){    
cout<<"Eating...";    
    }      
};   
class Dog: public Animal    
{    
 public:  
 void eat()    
    {    
       cout<<"Eating bread...";    
    }    
};  
int main(void) {  
    cout<<"\nMade By: Akshay Khare CSE B 54\n";
   Dog d = Dog();    
   d.eat();  
   return 0;  
}  
