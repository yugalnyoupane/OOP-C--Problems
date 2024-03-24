#include <iostream>
using namespace std;

class Complex{
    float real, img;
    public:
        Complex(){};
        Complex(float, float);
        float get_real(){
            return real;
        }
        float get_img(){
            return img;
        }
        void setter(float a, float b){
            real = a;
            img = b;
        }
        void display();
};
void ComplexMultiplier(Complex );
void ComplexMultiplier2(Complex &);
Complex ComplexMultiplier3(Complex );

Complex::Complex(float a,float b){
    real = a;
    img = b;
}

void ComplexMultiplier(Complex C){
    C.setter(2*C.get_real(),2*C.get_img());
}
void ComplexMultiplier2(Complex &C){
    C.setter(2*C.get_real(),2*C.get_img());
}
Complex ComplexMultiplier3(Complex C){
    Complex temp;
    temp.setter(2*C.get_real(),2*C.get_img());
    return temp;
}

void Complex::display(){
    cout<<real<<"+j"<<img<<endl;
}

int main(){
    Complex C1(3.0,4.0);
    C1.display();
    ComplexMultiplier(C1);
    C1.display();
    ComplexMultiplier2(C1);
    C1.display();
    Complex C2=ComplexMultiplier3(C1);
    C2.display();
    return 0;
}

