//WAP that will convert object from a class Rectangle to object of a class Square using Casting operator

//rectangle to triangle 
//destination first 
//operator -> source 
// arg lidaina, operator arko class ()

#include <iostream>
using namespace std;
class rectangle;
class Triangle{
    int p,b;
    public:
        Triangle(){
            p = 0;
            b=0;
        }
        Triangle (int x, int y){
            p = x;
            b = y;
        }
        void area(){
            int area = 0.5*p*b;
            cout<<"Area: "<<area;
        }
};

class rectangle{
    int l , b,area;
    public:
        rectangle(){
            l = 0;
            b = 0;
        }
        rectangle(int x, int y){
            l = x;
            b = y;
            area = l*b;
        }
        operator Triangle(){
            Triangle temp(l,b);
            return temp;
        }
        void print(){
            cout<<"Area: "<<area<<endl;
        }
};

int main(){
    rectangle R(2,2);
    Triangle T(3,4);
    T = R;
    T.area();
    
}