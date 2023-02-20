//WAP to add two objects of Complex class
#include<iostream>
using namespace std;
class Complex{
private:
int real,img;
public:
void getdata(){
cout<<"Enter two numbers real and imaginary:";
}

void display(){
    cout<<"("<<real <<"+ i "<<img<<")";
}
void addcomplex(Complex c1, Complex c2){
real=c1.real + c2.real;
img=c1.img + c2.img;
}
};

int main (){
Complex c1,c2,c3;
c1.getdata();
c2.getdata();
c3.addcomplex(c1,c2);
cout<<"c3=";
c3.display();
    return 0;
}



