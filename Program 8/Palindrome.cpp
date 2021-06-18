//Write a program of palindrome number.

#include<iostream>
using namespace std;
int reverse(int n){
	int rem, rev=0;
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}
class Check{
	int number;
	
	public:
		
		Check(int n){
			number=n;
		}
		
		int reverse(){
			int rem=1,rev=0;
			int temp=number;
			while(temp>0){
				rem=temp%10;
				rev=rev*10+rem;
				temp=temp/10;
			}
			return rev;
		}
		void palidrome(){
			if(reverse()==number){
				cout<<"Yes, It is a Palindrome Number";
			}
			else{
				cout<<"No, It is not a Palindrome Number";
			}
		}
};
int main() {
	cout<<"\nMade By: Akshay Khare CSE B 54\n";
	cout<<"PROGRAM OF PALINDROME NUMBER"<<endl;
	cout<<"\nEnter the number you want to check:"<<endl;
	int n;
	cin>>n;
	Check c(n);
	c.palidrome();

    return 0;
}
