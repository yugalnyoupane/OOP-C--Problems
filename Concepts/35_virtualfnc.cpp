#include <iostream>
using namespace std;
 
class MyBase{
    public:
        void show(){
            cout<<"Base class show function called"<<endl;
        }
        virtual void print(){
            cout<<"Base class print function called"<<endl;
        }
};
class Myderived:public MyBase{
    public:
        void show(){
            cout<<"Derived class show function called"<<endl;
        }
        void print(){ //once virtual function for print is declared in the base class, we don't need to declare it again
            cout<<"Derived class print function called"<<endl;
        }
};

 int main(){
    MyBase *baseptr;
    Myderived derivedobj;

    baseptr = &derivedobj;
    //run time polymorphism
    baseptr ->print(); //derived class was called because virtual allows derived class function to be called
    baseptr ->show();//Base class was called
    return 0;
 }
 
