//WAP that reads a number and test whether it is a multiple of 5 or 11
#include<iostream>
using namespace std;

int main (){
	
	int x;
	cout << "Enter any positive integer:";
	cin>>x;
	
	if(x%5==0)
	cout <<"The given number is divisible by 5 "<<endl;
	
	else if (x%11==0)
	cout << "The given number is divisibel by 11"<<endl;
	
	else 
	cout << "The number you entered us not divisible by both 5 and 11";
	
	return 0;
}
