//WAP to that reads a number and test whether it is a multiple 
// of 5 or not 

#include<iostream>
using namespace std;
int main ()
{
int n ;
cout << "enter a positive integer:";
cin>>n;

if (n%5==0 && n%11!=0)
cout <<"Given number "<<n <<" is a multiple of 5 but not 11"<<endl;

else 
cout << "Given number "<<n<< " is a multiple of 5 "<< endl;

    return 0;
}
