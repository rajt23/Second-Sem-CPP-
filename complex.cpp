#include<iostream>

#include<string.h>

using namespace std;
class complex{
private:
int real, img;
public:
void getdata(){
    cout <<"Enter the real and imaginary numbers:"<<endl;
}
void display(){
    cout <<"("<<real<<" + i"<<img<<")";
}
void addcomplex(complex c1, complex c2){
    real = c1.real + c2.real;
    img = c1.img + c2.img;
}

};
int main() {
 complex c1, c2, c3;
 c1.getdata();
 c2.getdata();
 c3.addcomplex(c1,c2);
 cout << " c3 =";
 c3.display();
 return 0; 
}