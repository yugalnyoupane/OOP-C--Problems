#include <iostream>
using namespace std;

float &smaller(float &a, float &b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    float a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    smaller(a,b);
    cout<<"The value before assigning: "<<a<<" "<<b<<endl;
    float average = (a+b)/2;
    smaller(a,b)=average;
    cout<<"The value after assigning: "<<a<<" "<<b<<endl;
    return 0;

}