#include <iostream>
using namespace std;

class A{
    private:
        int a,b;
    public:
        A(){
            a=5;
            b=6;
        }
        friend A increase(A );
        void display(){
            cout<<"a: "<<a<<" b: "<<b<<endl;
        }
};
A increase (A C){
    C.a=C.a+1;
    C.b=C.b+1;
    return C;
}

int main(){
    A obj1 , obj2;
    obj2 = increase(obj1);
    obj2.display();
    return 0;
}