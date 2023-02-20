//WAP that reads coefficient of quadratic equation and finds its roots
#include<iostream>
#include<cmath>  
using namespace std;

int main (){

double a, b, c;
cout <<"Enter the coefficient starting with a and then b and c:"<< endl;
cin>>a>>b>>c;

if ( a== 0)
{
cout << " Undefined ."<<endl;
return 1;
}

double x1, x2;

x1=(- b + sqrt(b*b) - 4*a*c)/(2*a);
x2=(-b - sqrt(b*b)- 4*a*c)/(2*a);

cout <<endl<<"The roots are x1 = "<<x1 << " and x2="<<x2<<endl;


    return 0;
}
