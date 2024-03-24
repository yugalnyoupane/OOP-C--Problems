#include <iostream>
using namespace std;

class Polygon{
    protected:
        int length, height;
    public:
        void Triangle_set(int x =0, int y = 0){
            length = x;
            height = y;
        }
        virtual void area()=0;
};
class rectangle:public Polygon{
    protected:
        int length, breadth;
    public:
        void rectangle_set(int x=0, int y=0){
            length = x;
            breadth = y;
        }
        void area(){
            int a= length*breadth;
            cout<<"Area: "<<area; 
        }
};
class Triangle:public Polygon{
    protected:
        int p, b;
    public:
        void area(){
            float a = 0.5*length*height;
            cout<<a;
        }
};

int main(){
    Polygon *ptr;
    Triangle T;
    rectangle R;
    ptr = &T;
    ptr ->Triangle_set(3,4);
    ptr->area();


}