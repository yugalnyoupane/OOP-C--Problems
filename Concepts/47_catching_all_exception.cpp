#include <iostream>
using namespace std;

int main(){
    try{
        int l = 5;
        throw l;
    }
    catch(float p){
        cout<<"FLOAT: "<<endl;
    }
    catch(...){
        cout<<"ALL"<<endl;
    }
    return 0;
}