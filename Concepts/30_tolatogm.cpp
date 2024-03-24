#include <iostream>
using namespace std;

class Gram{
    private:
        int gm;
    public:
        Gram(int x=0){
            gm = x;
        }
        void print(){
            cout<<"The weight in gm is: "<<gm<<endl;
        }
};

class Tola{
    private:
        int t;
    public:
        Tola(int x){
            t = x;
        }
        void print(){
            cout<<"The weight in tola is: "<<t<<endl;
        }
        operator Gram(){
            float g1;
            g1 = t*11.664;
            return(Gram(g1));
        }
};

int main(){
    Tola T(35);
    Gram G;
    G = T;
    G.print();
    return 0;

}