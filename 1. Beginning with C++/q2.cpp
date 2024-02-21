//Write a program to read two numbers from the keyboard and display the larger value on the screen

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if (a>b){
        cout<<"The larger value: "<<a;
    }
    else{
        cout<<"The larger value:"<<b;
    }
return 0;
}