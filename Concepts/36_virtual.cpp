#include <iostream>
using namespace std;

//base class
class Animal
{
    public:
        virtual void eat(){ //virtual imp here
            cout<<"I'm eating generic food."<<endl;
        }
};

class Cat:public Animal{
    public:
        void eat(){
            cout<<"I'm eating a rat."<<endl;
        }
};
class Dog:public Animal{
    public:
        void eat(){
            cout<<"I'm eating a meat."<<endl;
        }
};

void function1(Animal *xyz){
    xyz->eat();
}

int main(){
    Animal *ptr;
    Cat catobj;
    Dog dogobj;

    ptr = &catobj;
    function1(ptr);

    ptr = &dogobj;
    function1(ptr);


}