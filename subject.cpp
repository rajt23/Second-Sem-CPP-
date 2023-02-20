//WAP that reads marks in 5 subjects and find total marks and percentage
#include<iostream>
using namespace std;
int main (){

float sub1, sub2, sub3 , sub4, sub5;
float total_marks , percentage;

cout << "Enter marks of five subjects:"<<endl;
cin >> sub1>>sub2>>sub3>>sub4>>sub5;

total_marks= sub1 + sub2 + sub3 + sub4 + sub5;
percentage=(total_marks /500) * 100;

cout << "Total marks ="<<total_marks<<endl;

cout << " Percentage ="<<percentage<<endl;
    return 0;
}