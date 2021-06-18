#include<iostream>
using namespace std;

int main()
{
    cout<<"\nMade By: Akshay Khare CSE B 54\n";
    int pos;
    int a[5] = {11, 12, 13, 14, 15};
    cout<<"Enter the position you want to access: ";
    cin>>pos;

    try
    {
        if(pos < 0 || pos > 4)
        {
            throw 400;
        } else {
            cout << endl << a[pos];
        }
    }
    catch(int errorCode)
        {
            cout << "ERR(" << errorCode << ") ";
            cout << "Array out of bound exception, size of the array is 5" << endl;
        }

    return 0;
}