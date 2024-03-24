#include <iostream>
using namespace std;

class Triangle{
    private:
        int p,b;
    public:
        Triangle(int x=0, int y=0){
            p=x;
            b=y;
        }
        void print(){
            float Area = 0.5*p*b;
            cout<<"Area of Triangle: "<<Area<<endl;
        }
        int getp(){
            return p;
        }
        int getb(){
            return b;
        }
};
class Rectangle{
    private:
        int l,w;
    public:
        Rectangle(int x=0,int y=0){
            l=x;
            w=y;
        }
        void print(){
            float Area = l*w;
            cout<<"Area of Rectangle: "<<Area<<endl;
        }
        Rectangle(Triangle T){
            l = T.getb();
            w = T.getp();
        }
};
int main(){
    Triangle T1(3,4);
    Rectangle R;
    R = T1;
    R.print();
    T1.print();
    return 0;
}