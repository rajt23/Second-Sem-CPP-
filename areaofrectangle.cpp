//area of rectangle using class
#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length ;
    int breadth;
    public:
    void setdata(int l,int b)
    {
        length =l;
        breadth=b;
    }
    void showdata()
    {
        cout<< " Length = "<<length
         << endl << "Breadth ="<<breadth <<endl;
    }
    
    int findarea()
    {
        return length * breadth;
    }

    int findperimeter(){
        return 2*(length + breadth);
    }
    
    void display(){
        cout << " Area of rectangle is "<<findarea()<<endl
        <<"Perimeter of rectangle is "<<findperimeter();
    }
    
} ;

int main (){
rectangle obj;
obj.setdata(4,5);
obj.showdata();
obj.display();
    return 0;
}
