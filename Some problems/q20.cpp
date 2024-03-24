//add month year and day using operator overloading 
//using member function 
#include <iostream>
using namespace std;

class date{
    int d,m,y;
    public:
        date(){
            int d= 0;
            int m =0;
            int y = 0;
        }
        date (int a, int b, int c){
            d = a;
            m = b;
            this->y = c;
        }
        date operator +(date );
        void print(){
            cout<<"Year: "<<y<<endl;
            cout<<"Month: "<<m<<endl;
            cout<<"Day: "<<d<<endl;
        }

};
date date::operator+(date C)
{
    date temp;
    temp.d= this->d + C.d;
    temp.m =this->m+C.m+temp.d/30;
    temp.d=temp.d%30;
    temp.y = this->y +C.y+temp.m/12;
    temp.m = temp.m%12;
    return temp;
}
int main(){
    date D1(27,3,2060);
    date D2(9,7,2068);
    date D3 = D1+ D2;
    D3.print();
    return 0;
}
