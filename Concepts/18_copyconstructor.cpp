#include<iostream>
using namespace std;

class item {
    int itemdata;
    float cost;
    public:
        item(){
            itemdata =0;
            cost = 0;
            cout<<"1 called"<<endl;
        }
        item (int a, float b){
            itemdata = a;
            cost = b;
            cout<<"2 called"<<endl;
        }
        item(item &i){
            itemdata = i.itemdata;
            cost = i.cost;
            cout<<"3 called"<<endl;
        }
};
int main(){
    item i1;
    item i2(10,15.5);
    item i3(i2);
    return 0;
}
