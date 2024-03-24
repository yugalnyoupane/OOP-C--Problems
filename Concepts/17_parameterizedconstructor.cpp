#include <iostream>
using namespace std;

class item{
    int a,b;
    public:
    item(int, float);
};
item::item(int x, float y){
    a = x;
    b= y;
    cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
}

int main(){
    item A=item(3,4);//explicit call
    item B(4,6);
    return 0;

}