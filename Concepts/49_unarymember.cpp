#include <iostream>
using namespace std;

class A{
    int x;
        public:
            void operator -();
            A(){
                x = 0;
            }
            A(int x){
                this ->x = x;
            }
            void print(){
                cout<<"X coordinate: "<<this->x;
            }

};

void A::operator -(){
    this ->x = -x;
}

int main(){
    A B(3);
    -B;
    B.print();
    return 0;
}