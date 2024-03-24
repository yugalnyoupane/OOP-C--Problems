//Write a Program to convert angle in degree to radian. Take the input angle in degrees from the 
//keyboard and display the output on screen

#include <iostream>
using namespace std;
const int PI = 3.14;

int main(){
    float d,r;
    cout<<"Enter the angle in degree: ";
    cin>>d;
    r = PI*d/180;
    cout<<"The angle in radian is: "<<r;
}
