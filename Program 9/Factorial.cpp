//Write a program of factorial of a given number 

#include<iostream>
using namespace std;
class Check{
	int number;
	
	public:
		Check(int n){
			number=n;
		}
		
		int fact(){
			int fact=1;
			for(int i=1;i<=number;i++){
				fact*=i;
			}
			return fact;
		}
};
int main(){
	cout<<"\nMade By: Akshay Khare CSE B 54\n";
	cout<<"PROGRAM OF FACTORIAL OF GIVEN NUMBER"<<endl;
	int n;
	cout<<"\nEnter the number whose factorial you want to calculate: ";
	cin>>n;
	Check c(n);
	cout<<"Factorial of "<<n<<" is: "<<c.fact();
	return 0;
}
