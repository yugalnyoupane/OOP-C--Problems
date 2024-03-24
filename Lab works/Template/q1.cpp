//Wap to add two numbers using template function overloading
#include <iostream>
using namespace std;
int sum(int x, int y){
    cout<<"this function was called"<<endl;
    return (x+y);
}

template <class T>
T sum(T a, T b){
    return (a+b);
}
int main(){
   cout<<sum<int>(3,4)<<endl;
   cout<<sum<float>(3.4,2.5)<<endl;
   cout<<sum(4,6)<<endl;

    return 0;
}