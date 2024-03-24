#include <iostream>
using namespace std;

int main(){
    try{
        throw 10.5;
    }
    catch(char C){
        cout<<"A"<<endl;
    }
}