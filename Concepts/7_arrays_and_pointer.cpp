#include <iostream>
using namespace std;

int main(){
    int marks[]={99,97,97,92};
    int *p = marks;
    //&operator is not used to assign the array value like that of variable
    cout<<"The value of *p (first marks) is "<<*p<<endl;
    cout<<"The value of *p+1(second marks) is "<<*(p+1)<<endl;
    cout<<"The value of *p+2 (third marks) is "<<*(p+2)<<endl;
    cout<<"The value of *p+3 (fourth marks) is "<<*(p+3)<<endl;
    return 0;

}