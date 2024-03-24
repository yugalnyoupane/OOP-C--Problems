#include <iostream>
using namespace std;

class item{
    int itemnum;
    float *cost = new float;
    public:
        item(){
            itemnum = 5;
            *cost = 0;
        }
        item(int a, float b){
            itemnum = a;
            *cost = b;
        }
        void display();
        ~item(){
            cout<<"Before delete: "<<*cost<<endl;
            delete cost;
            cout<<"After delete: "<<*cost<<endl;
        }
};

void item::display(){
    cout<<"Item number: "<<itemnum<<endl;
    cout<<"Cost: "<<*cost<<endl;
}

int main(){
    item i1;
    item i2(3,400.5);
    i1.display();
    i2.display();
    return 0;
    }