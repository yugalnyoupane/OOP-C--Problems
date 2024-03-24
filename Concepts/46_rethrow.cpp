#include <iostream>
using namespace std;

void A(int x, int y){
    try{
        int a = x;
        float b = y;
        throw(b);
    }
    catch(float p){
        cout<<"A"<<endl;
        throw;
    }
}
int main(){
    try{
        A(5,6);
    }
    catch(int){
        cout<<"B"<<endl;
    }
    catch(float){
        cout<<"C"<<endl;
    }
}
