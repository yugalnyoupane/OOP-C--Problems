#include <iostream>
using namespace std;
void test_handler(){
    cout<<"\n Inside test handler";
}

int main(){
    set_terminate(test_handler);
    try{
        cout<<"\nInside try block";
        throw 10;
    }
    catch(char c){
        cout<<"\n Character exception";
    }
    return 0;
}