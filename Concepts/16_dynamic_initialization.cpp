#include <iostream>
using namespace std;

int sum (int a, int b){
    return(a+b);
}

int main(){
    int a = sum (3,5);
    cout<<a<<endl;
    int b = sum(8,6);
    cout<<b<<endl;
    return 0;
}