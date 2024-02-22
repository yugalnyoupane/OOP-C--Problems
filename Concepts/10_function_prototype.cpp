//simple function to add two numbers

#include <iostream>
using namespace std;

int sum(int, int);

int main(){
    int num1 ,num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    int result = sum(num1,num2);
    cout<<"The sum of the number is: "<<result<<endl;
    return 0;
}
int sum(int a, int b){
    return (a +b);
}