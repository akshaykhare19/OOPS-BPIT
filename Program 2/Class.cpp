#include<iostream>
using namespace std;
// creating class Student
 class Student{
        public:
         int roll_no;
         double height;
         double obtained_marks;
         double total_marks;

         double percentagecalculate(){
             return (obtained_marks/total_marks)*100;
         }
    };

int main()
{
    cout<<"\nMade By: Akshay Khare CSE B 54\n";
   // creating object for class Student
    Student s1;
    s1.roll_no = 54;
    s1.height = 167.64;
    s1.obtained_marks = 465;
    s1.total_marks = 500;

    cout<<"Roll no. of student: "<<s1.roll_no<<endl;
    cout<<"Percentage obtained: "<<s1.percentagecalculate()<<endl;

    return 0;
}
