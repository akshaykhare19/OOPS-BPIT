//Write a program to define the function template for calculating the square of given numbers with different data types. 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template<class S> S square(S val)
{
    return val * val;
};

template<> string square(string str)
{
    return str + str;
};

int main()
{
    cout<<"\nMade By: Akshay Khare CSE B 54\n";
    int num;
    string st;

    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Enter a string: ";
    cin>>st;

    cout<<num<<" ---> "<<square(num)<<endl;
    cout<<st<<" ---> "<<square(st)<<endl;

    return 0;
}