#include <iostream>
using namespace std;

class Rectangle{
    int l,w;
    public:
        Rectangle(int x, int y){
            l = x;
            w = y;
        }
        
        void print(){
            int area = l*w;
            cout<<"The area of the Rectangle is: "<<area<<endl;
        }
};


class Triangle{
    int p,b;
    public:
        Triangle(int x, int y){
            p = x;
            b = y;
        }
        void print(){
            int area ;
            area = 0.5*p*b;
            cout<<"The are of the Triangle is: "<<area<<endl;
        }
        operator Rectangle(){
            Rectangle temp(b,p);
            return temp;
        }
};

int main(){
    Triangle T(10,20);
    Rectangle R(30,40);
    T.print();
    R.print();
    R = T;
    R.print();
    return 0;
}


