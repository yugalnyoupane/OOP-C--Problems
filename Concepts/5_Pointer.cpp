#include <iostream>
using namespace std;

int main(){
    //& -> adress of 
    //* --> point to the address
    int a = 10;
    int *b = &a;
    int **c = &b;//pointer to pointer

    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<b<<endl;
    cout<<"The value of a at address b is: "<<*b<<endl<<endl;
    
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address of value c is "<<**c<<endl;
    return 0;



}