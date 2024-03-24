//landmeasure - ropani, ana paisa, dam , two add two objects 

#include <iostream>
using namespace std;

class landmeasure{
    protected:
        float ropani, ana, paisa, dam;
    public:
        landmeasure(){
            ropani = 0;
            ana = 0;
            paisa = 0;
            dam = 0;
        }
        landmeasure(int m , int n , int o , int p){
            ropani = m;
            ana = n;
            paisa = o;
            dam = p;
        }
        friend landmeasure add(landmeasure,landmeasure  );
        void display(){
            cout<<"Ropani: "<<ropani<<endl;
            cout<<"Ana: "<<ana<<endl;
            cout<<"Paisa: "<<paisa<<endl;
            cout<<"Dam: "<<dam<<endl;
        }
};
landmeasure add(landmeasure C, landmeasure D)
{
    landmeasure temp;
    temp.ropani = C.ropani + D.ropani;
    temp.ana = C.ana+D.ana;
    temp.paisa = C.paisa+D.paisa;
    temp.dam = C.dam+D.dam;
    return temp;
}

int main(){
    landmeasure L1(3,4,5,6);
    landmeasure L2(4,3,2,1);
    landmeasure L3 = add(L1,L2);
    L3.display();
}