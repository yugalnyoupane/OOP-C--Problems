#include <iostream>
using namespace std;

class B{
    public:
        virtual void show(){}
};
class D:public B{};

int main(){
    B *b = new D;
    D *d = dynamic_cast<D *>(b);
    if(d!=NULL){
        cout<<"Converted: "<<endl;
    }
    else{
        cout<<"cannot convert"<<endl;
    }
    return 0;
}