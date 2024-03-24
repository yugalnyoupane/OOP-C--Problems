#include <iostream>
using namespace std;

class A{
    int x,y;
    public:
        friend A operator +(A,A );
        A(int x = 0, int y =0){
            this->x = x;
            this->y = y;
        }
        void display(){
            cout<<"X Coordinate: "<<this->x<<endl;
            cout<<"Y Coordinate: "<<this->y<<endl;
        }
};
A operator +(A X,A Y){
    A temp;
    temp.x = X.x+Y.x;
    temp.y = X.y+Y.y;
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