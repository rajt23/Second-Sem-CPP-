//WAP that reads a number and finds sum of square of digits
#include<iostream>
using namespace std;

int main (){
	int num;
	int remainder,sum=0;
	
	cout <<"enter a positive integer:";
	cin>>num;
	
	while (num>0){
		remainder = num%10;
		sum=sum + remainder * remainder;
		num=num/10;
		
	}
	
	cout << " Sum of square of given number is "<<sum << endl;
	
	return 0;
}
