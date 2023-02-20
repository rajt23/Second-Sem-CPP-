//Unary operator example
#include<iostream>
#include<conio.h>
using namespace std;
class rectangle{
private:
int length ;
int breadth;
public:
rectangle (int l, int b){
    length =l;
    breadth = b;
}
void operator++(){
    ++length ;
   ++breadth ;
}
void display ()
{
    cout << "Length = "<<length <<endl<< "Breadth ="<<breadth<<endl;

}
};
int main (){

    rectangle r1(5,6);
    ++r1;
    r1.display();
    getch();
    return 0;
}
