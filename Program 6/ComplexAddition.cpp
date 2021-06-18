/*
Write a program to perform addition of two complex numbers using constructor overloading. 
The first constructor which takes no argument is used to create objects which are 
not initialized, second which takes one argument is used to initialize real and imag parts 
to equal values and third which takes two argument is used to initialized real and imag 
to two different values.
*/

#include<iostream>
using namespace std;

class Complex{
	int real;
	int img;
	
	public:
		Complex(){
			//Default Constructor
		}
		
		Complex(int r){
			//Parameterised Constructor for Equal value of real and imaginary part
			real=r;
			img=r;
		}
		
		Complex(int r, int i){
			//Parameterised Constructor for Diffrernt values of real and imaginary part
			real=r;
			img=i;
		}
		
		Complex(Complex &c){
			//Copy Constructor
			real=c.real;
			img=c.img;
		}
		void print(){
			cout<<"The sum of two Complex numbers is: "<<real<<"+"<<img<<"i"<<endl;
		}
		
		friend Complex sum(Complex, Complex);
};
Complex sum(Complex obj1, Complex obj2){
	Complex obj3;
	obj3.real = obj1.real + obj2.real;
	obj3.img = obj1.img + obj2.img;
	return obj3;
}
int main(){
	int a,b,c;
	Complex c1;
	cout<<"\nMade By: Akshay Khare CSE B 54\n";
	cout<<"PROGRAM TO PERFORM ADDITION OF TWO COMPLEX NUMBERS USING CONSTRUCTOR OVERLOADING"<<endl;
	cout<<endl<<"For Equal Values:"<<endl;
	cout<<"Enter the values of real and imaginary part of number 1:"<<endl;
	cin>>a;
	Complex c2(a);
	
	cout<<endl<<"For Different Values:"<<endl;
	cout<<"Enter the values of real and imaginary part of number 2:"<<endl;
	cin>>b>>c;
	Complex c3(b,c);
	
	Complex c4;
	cout<<endl;
	c4=sum(c2,c3);
	c4.print();
	return 0;
}
