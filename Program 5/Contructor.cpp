#include<iostream>
using namespace std;

template <class t>
class test
{
     private:
      t a,b;
     public:
      test(t x,t y)
      {
           a=x;
           b=y;
      }
      void show()
      {
           if(a>b)
           {
        cout<<a<<" is greater than "<<b;
           }
           else
           {
        cout<<b<<" is greater than "<<a<<endl;
           }
      }
      ~test(){}
};

int main()
{
    cout<<"\nMade By: Akshay Khare CSE B 54\n";
    int a,b;
    cout<<"\nEnter two numbers to find the biggest:";
    cin>>a>>b;
    test <int> t1(a,b);
    t1.show();
    return 0;
}
