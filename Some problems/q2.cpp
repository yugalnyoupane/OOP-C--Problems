//write a program to swap the numbers using reference variables. 
//initialize the variables used to store the number dynamically. 

#include <iostream>
using namespace std;
//function declaration
int getnum();
void swap(int& , int&);

int main(){
    int num1 = getnum();
    int num2 = getnum();
    swap(num1, num2);
    cout<<"The number swapping is: "<<num1<<","<<num2;
    return 0;

}
int getnum(){
    int a;
    cout<<"Enter the first number: ";
    cin>>a;
    return a;
}
void swap(int&a , int&b){
    int temp = a;
    a = b;
    b = temp;
}