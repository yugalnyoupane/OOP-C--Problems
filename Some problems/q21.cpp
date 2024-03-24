//overloading += operator 

#include <iostream>
using namespace std;

class A{
    int x;
    public:
        A(){
            x = 0;
        }
        A(int x){
            this->x = x;
        }
        void operator +=(A );
        void print(){
            cout<<"X coordinate: "<<this->x<<endl;
        }

};
void A::operator+=(A B){
    this->x = B.x + this->x;
}

int main(){
    A X(24);
    A Y(27);
    Y +=X;
    Y.print();
    X.print();
    return 0;

}
