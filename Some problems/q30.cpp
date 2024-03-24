#include <iostream>
using namespace std;

class complex{
    int real, img;
        public:
            public:
                friend istream& operator>>(istream&,complex &);
                friend ostream& operator<<(ostream&, complex &);
};
istream& operator >>(istream& input, complex &c){
    cout<<"\nEnter the real part: ";
    input>>c.real;
    cout<<"\nEnter the imaginary part: ";
    input>>c.img;
    return input;
}
ostream& operator <<(ostream& output, complex &c){
    output<<endl<<c.real<<"+"<<"i"<<c.img;
    return output;
}

int main(){
    complex c1;
    cin>>c1;
    cout<<"The complex number is: "<<endl;
    cout<<c1;
    return 0;
}
