#include <iostream>
using namespace std;

class A{
    int x;
        public:
            friend void operator -(A&);
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

void operator -(A & C){
    C.x = -C.x;
}

int main(){
    A B(3);
    -B;
    B.print();
    return 0;
}