//1Write a program to find the greatest of two given numbers in two different classes using friend function.

#include<iostream>
using namespace std;
class B;
class A
{
     private:
      int x; 
     public:
      void num()
      {
    cout<<"Enter number:";
           cin>>x;
      }
      friend void max(A a,B b);
};
class B
{
     private:
      int x;
     public:
      void num()
      {
    cout<<"Enter number:";
           cin>>x;
     }
     friend void max(A a,B b);
};
void max(A a,B b)
{
     if(a.x>b.x)
     {
    cout<<"Largest:"<<a.x<<endl;
     }
     else
     {
    cout<<"Largest:"<<b.x<<endl;
     }
}
int main()
{
     cout<<"\nMade By: Akshay Khare CSE B 54\n";
     A a;
     B b;
a.num();
b.num();
     max(a,b);
     return 0;
}
