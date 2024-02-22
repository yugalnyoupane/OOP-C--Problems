#include <iostream>
//#include <iomaip>
using namespace std;

int main(){
    //endl is used to change the line
    //setw is used to set the width 

    int a = 3, b=78, c=122;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of a without setw is: "<<b<<endl;
    cout<<"The value of a without setw is: "<<c<<endl;

    //setw is include in iomaip library
    //cout<<"The value of a is: "<<setw(4)<<a<<endl;
    //cout<<"The value of b is: "<<setw(4)<<b<<endl;
    //cout<<"The value of c is: "<<setw(4)<<c<<endl;

    return 0;
}