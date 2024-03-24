//Compare the magnitude of complex number by using <,> and  == operator

#include <iostream>
using namespace std;

class complex{
    int r,c;
    float m;
    public:
        friend bool operator <(complex , complex);
        friend bool operator >(complex, complex);
        friend bool operator ==(complex, complex);

        complex(){
            int r = 0;
            int c = 0;
            m = 0;
        }
        complex(int x, int y){
            r = x;
            c = y;
            m = ((r^2)+(c^2))^(1/2);
        }
        void printcomplex(){
            cout<<"The complex number is: "<<r<<"+"<<c<<"i"<<endl;
            cout<<"The magnitude is: "<<m<<endl;
        }
};
bool operator <(complex A, complex B){
    complex temp;
    if (A.m<B.m){
        return true;
    }
    else{
        return false;
    }
}
bool operator >(complex A, complex B){
    complex temp;
    if (A.m>B.m){
        return true;
    }
    else return false;
}
bool operator ==(complex A, complex B){
    complex temp;
    if (A.m<B.m){
        return true;
    }
    else return false;
}
int main(){
    complex C1(2,3);
    C1.printcomplex();
    complex C2(4,5);
    C2.printcomplex();

    if(C1>C2){
        cout<<"Bigger";
    }
    else{
        cout<<"Smaller";
    }
    if(C1<C2){
        cout<<"Smaller";
    }
    else{
        cout<<"Bigger";
    }

    //if(C1==C2){
    //   cout<<"Equal";
    //}
    return 0;
   
    
}