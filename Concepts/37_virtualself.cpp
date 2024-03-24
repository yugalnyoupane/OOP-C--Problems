#include <iostream>
using namespace std;

class Polygon{
    protected:
        int width, height;
    public:
        void set(int a, int b){
            width = a;
            height = b;
        }
        virtual int area(){
            return 0;
        }
};
class Rectangle:public Polygon{
    public:
        int area(){
            return(width*height);
        }
};
class Triangle:public Polygon{
    public:
        int area(){
            return(0.5*width*height);
        }
};

int main(){
    Polygon *ptr;
    Polygon A;
    Rectangle B;
    Triangle C;

    ptr = &A;
    ptr ->set(4,5);
    int a = ptr->area();
    cout<<a<<endl;
    
    ptr = &B;
    ptr ->set(10,5);
    int b = ptr->area();
    cout<<b<<endl;

    ptr = &C;
    ptr ->set(5,6);
    int c = ptr->area();
    cout<<c<<endl;

    return 0;
}
