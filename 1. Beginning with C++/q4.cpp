//Write a program to read the values of a,b and c and display the value of x, where 
// x= a / b -c

#include <iostream>
using namespace std;

int main(){
    double a,b,c,x;
    cout<<"Enter the values of a,b and c respectively: ";
    cin>>a>>b>>c;
    x = a/b-c ;
    cout<<"x = "<<x;
    return 0;
}