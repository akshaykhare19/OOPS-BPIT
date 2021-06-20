/*
Implement a class string containing the following functions: 
- Overload + operator to carry out the concatenation of strings. 
- Overload = operator to carry out string copy. 
- Overload <= operator to carry out the comparison of strings. 
- Function to display the length of a string. 
- Function tolower( ) to convert upper case letters to lower case. 
- Function toupper( ) to convert lower case letters to upper case. 
*/

#include<iostream>
#include<string.h>
using namespace std;

class String
{
    private:
    char str[20];

    public:
    void getString()
    {
        cout<<"Enter a string: ";
        cin>>str;
        cout<<endl;
    }

    void displayString()
    {
        cout<<"\""<<str<<"\"\n"<<endl;
    }

    String operator+(String x)
    {
        String s;
        strcat(str, x.str);
        strcpy(s.str, str);
        return s;
    }

    String operator=(String x)
    {
        String s;
        strcpy(s.str, x.str);
        return s;
    }

    bool operator<=(String x)
    {
        if(strcmp(str, x.str) <= 0) 
            return 1;
        return 0;
    }

    int length(String x)
    {
       return strlen(x.str); 
    }

    String toLower(String x)
    {
        String s;
        for(int i = 0; i < 20; i++)
        {
            tolower(x.str[i]);
        }
        strcpy(s.str, x.str);
        return s;
    }

        String toUpper(String x)
    {
        String s;
        for(int i = 0; i < 20; i++)
        {
            toupper(x.str[i]);
        }
        strcpy(s.str, x.str);
        return s;
    }

};

int main()
{
    String s1, s2, s3;

    s1.getString();
    cout<<"String 1 is ";
    s1.displayString();

    s2.getString();
    cout<<"String 2 is ";
    s2.displayString();

    s3 = s1+s2;
    s3.displayString();
    
    return 0;
}

