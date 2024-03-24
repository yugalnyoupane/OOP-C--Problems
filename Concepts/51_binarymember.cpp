#include <iostream>
using namespace std;

class A{
    int x,y;
    public:
        A operator +(A );
        A(int x = 0, int y =0){
            this->x = x;
            this->y = y;
        }
        void display(){
            cout<<"X Coordinate: "<<this->x<<endl;
            cout<<"Y Coordinate: "<<this->y<<endl;
        }
};
A A::operator +(A C){
    A temp;
    temp.x = this->x + C.x;
    temp.y = this->y + C.y;
    return temp;
}
int main(){
    A B(2,3);
    A C(5,8);
    A D;
    D = B + C;
    D.display();
    return 0;
}