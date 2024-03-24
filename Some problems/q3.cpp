//redo the above problem using pointer variable rather than using reference variables

#include <iostream>
using namespace std;
//function declaration
void swap(int*, int*);
int getnum();

int main(){
    int num1 = getnum();
    int num2 = getnum();
    swap(&num1, &num2);
    cout<<"The number after the swap is: "<<num1<<","<<num2;
    return 0;
}

int getnum(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    return a;
}

void swap(int*a, int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}