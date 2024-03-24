//Write a C++ program that calculates the area of the cube (length in integer value and default
//length is 10 meter), circle (radius in decimal value) and rectangle (length and breadth in decimal
//values). You must provide options to enter the input dimensions of above solids. (Use function
//overloading with default arguments.).

#include <iostream>
using namespace std;
const float PI=22/7;

inline int area(int l=10){
    return(6*l*l);
}
inline float area(float r){
    return (PI*r*r);
}
inline float area(float l, float b){
    return(l*b);
}
int main(){
    //for cube
    int l;
    cout<<"Enter the length of cube: ";
    cin>>l;
    cout<<"Area of the cube: "<<area(l)<<endl;
    //for circle
    float r;
    cout<<"Enter the radius of circle: ";
    cin>>r;
    cout<<"Area of the circle: "<<area(r)<<endl;
    //for rectangle
    float x,y;
    cout<<"Enter the length of rectangle: "<<endl;
    cin>>x;
    cout<<"Enter the breadth of rectangle: "<<endl;
    cin>>y;
    cout<<"Area of the rectangle: "<<area(x,y)<<endl;

    return 0;
}