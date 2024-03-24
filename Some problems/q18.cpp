#include <iostream>
using namespace std;

namespace BEI{
    void print(){
        cout<<"Hey"<<endl;
    }
}

int main(){
    using namespace BEI;
    print();
    
}