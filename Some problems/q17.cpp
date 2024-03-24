//make an explicit constructor 
#include <iostream>
using namespace std;

class A{
    int x; 
    public:
        explicit A(int value):x(value){}
        void print(){
            cout<<x<<endl;
        }
};

int main(){
    A B(10);
    B.print();
    return 0;

}
