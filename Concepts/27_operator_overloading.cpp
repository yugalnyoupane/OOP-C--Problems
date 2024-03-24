#include <iostream>
using namespace std;

class Complex{
    private:
        int real, imag;
    public:
        Complex(int r=0,int i=0){
            real = r;
            imag = i;
        }
        void print(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
    //operator overloading
        Complex operator +(Complex C){
            Complex temp;
            temp.real = real+C.real;
            temp.imag = imag+C.imag;
            return temp;
        }
};

int main(){

    Complex C1(5,4);
    Complex C2(2,5);
    Complex C3;
    C3.print();
    C3=C1+C2; //C3 = C1.add(C2);
    C3.print();
    return 0;

}