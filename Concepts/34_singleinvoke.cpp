#include <iostream>
using namespace std;


class A{
    public:
        A(){
        cout<<"A";
        }
};

class B:public A{
    public:
        B(){
            cout<<"B";
        }
};

int main(){
    B obj;
    return 0;
    
}