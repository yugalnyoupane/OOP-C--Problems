#include <iostream>
using namespace std;

class B;
class A{
    int a;
    public:
        A(){
            a = 5;
        }
        friend void sum(A,B);
};
class B{
    int b;
    public:
        B(){
            b = 7;
        }
        friend void sum(A,B);
};

void sum(A p,B q){
    int sum1;
    sum1 = p.a+q.b;
    cout<<"Sum: "<<sum1<<endl;
}

int main(){
    A x;
    B y;
    sum(x,y);
    return 0;
}