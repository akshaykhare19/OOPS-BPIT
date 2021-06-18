//Write a program of Default Constructor

#include<iostream>
using namespace std;

class Construct
{
public:
    int a, b;

    // Default Constructor
    Construct()
    {
        a = 10;
        b = 20;
    }
};

int main()
{
    cout<<"\nMade By: Akshay Khare CSE B 54\n";
    // Default constructor called automatically
    // when the object is created
    Construct c;
    cout << "a: " << c.a << endl
         << "b: " << c.b << endl;
    return 1;
}