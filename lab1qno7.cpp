//WAP to input in seconds and convert it into hour, minutes and seconds
#include<iostream>
using namespace std;
int main (){
int sec, hrs, mins;

cout << "Enter the required seconds :";
cin>>sec;

mins=sec/60;
hrs=mins/60;

cout << sec << " seconds is equivalent to "<<int ( mins%60)<<"mins"<<int ( sec%60)<<"Seconds";
    return 0;
}