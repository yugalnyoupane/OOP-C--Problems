#include <iostream>
using namespace std;
#define PI 3.14

float area(int l,int b){
    return l*b; //Rectangle
}
float area(float r){
    return PI*r*r; //Circle
}
float area(double p,double b){
    return 0.5*p*b; //Triangle
}

int main(){
    float Rectangle = area(3,4);
    cout<<"Rectangle: "<<Rectangle<<endl;
    float Circle = area(5.5);
    cout<<"Circle: "<<Circle<<endl;
    float Triangle = area(3.4, 4.3);
    cout<<"Triangle: "<<Triangle<<endl;
    return 0;
}