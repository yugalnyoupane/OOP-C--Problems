//Write a C++ program that will ask for a temperature in Fahrenheit and display it in Celsius
#include <iostream>
using namespace std;

int main(){
    float f, c;
    cout<<"Enter the temperature in Fahrenheit: ";
    cin>>f;
    c=(f-32)*5/9;
    cout<<"The temperature in celsius is : "<<c;
    return 0;
}