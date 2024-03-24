#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"A first"<<endl;
    }
};

class B{
    public:
    B(){
        cout<<"B first"<<endl;
    }
};

class C:public B,public A{
    public:
    C(){
        cout<<"C first"<<endl;
    }
};

int main(){
    C obj1;


}