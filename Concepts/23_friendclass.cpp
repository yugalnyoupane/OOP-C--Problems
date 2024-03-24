#include <iostream>
using namespace std;

class B;
class A{
    int a;
    public:
        friend class B;
        A(){
            a = 5;
        }
};
class B{
    int b;
    public:
        A obj;
        B(){
            b=6;
        }
        int add(){
            return(obj.a+b);
        }
};

int main(){
    B C;
    cout<<"Sum: "<<C.add();
    return 0;
}