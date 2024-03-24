//Wap to add two numbers and two strings using template function overloading
#include <iostream>
#include <cstring>

using namespace std;
template <class T, class T1, class T2>
T sum(T1 x, T2 y){
    return (x+y);
}
template <class T, class T1, class T2,class T3>
T sum(T1 x, T2 y, T3 z){
    return (x+y+z);
}

template<class x>
x sum(const char *a, const char *b){
    char c[5] = {};// = a;
    strcpy(c, a);
    strcat(c, b);
    cout<< c<<endl;
    // return c;
    x p;
    return p;
}
int main(){
    cout<<"The sum of integer is: "<<sum<int>(2,3)<<endl;
    char d[5];
    sum<float>("0","1");
    cout<<"The sum of 3 integer is: "<<sum<float>(3.4,5.6,32.2)<<endl;
    sum<float>("app","bpp");
    cout<<"The concatenated value is: "<<sum<int>("A","B");
    // cout<<"The concatenated value is: "<<d<<endl;
    return 0;
}