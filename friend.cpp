//example of friend function
#include<iostream>
#include<conio.h>
using namespace std;
class sample

{
private:
int a, b;
public:
void setdata(){
    a=20;
    b=40;
}
friend float mean(sample s){

}

};
float mean ( sample s)
{
     return float (s.a + s.b)/2;
}

  void  main() {
       sample x;
      x.setdata();
      cout << "Mean Value ="<<mean(x);
 getch ();
}