//typecasting

#include <iostream>
using namespace std;

int main(){
int a = 45;
float b=45.46;
//you can typecast using anymethods given below
cout<<"The value of a is "<<(float)a<<endl;
cout<<"The vaue of a is "<<float(a)<<endl;

cout<<"The value of b is "<<(int)b<<endl;
cout<<"The value of b is "<<int(b)<<endl;
int c = int(b);

cout<<"The expression is "<<a+b<<endl;
cout<<"The expression is "<<a + int(b)<<endl;
cout<<"The expression is "<<a +(int)b<<endl;
return 0;
}