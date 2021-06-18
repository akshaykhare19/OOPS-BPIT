//Write a program of Multilevel Inheritance

#include <iostream>
using namespace std;

class A {
    public:
      void display() {
          cout<<"Base class content."<<endl;
      }
};

class B : public A {};

class C : public B {};

int main() {
    cout<<"\nMade By: Akshay Khare CSE B 54\n";
    C obj;
    obj.display();
    return 0;
}
