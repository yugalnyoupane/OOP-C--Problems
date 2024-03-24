//weight in tola to weight in gram  1 tola = 11.664gm
//using constructor - > source first - > constructor in destination

#include <iostream>
using namespace std;
class tola{
    int t;
    public:
        tola(){
            t = 0;
        }   
        tola(int x){
            t = x;
        }
        float data(){
            return t;
        } 
        void print(){
            cout<<"The weight in tola is: "<<t<<endl;
        }
};
class gram{
    int g;
    public:
        gram(tola T){
            g = 11.64*T.data();
        }
        void print(){
            cout<<"The weight in gram is: "<<g<<endl;
        }
};

int main(){
    tola T(34);
    gram G = T;
    G.print();
}
