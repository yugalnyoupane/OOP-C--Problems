//Redo q5 using class called temp and member function
////Write a C++ program that will ask for a temperature in Fahrenheit and display it in Celsius


#include <iostream>
using namespace std;

class temp{
    float f,c;
    public:
        void gettemp();
        void displaytemp();
};
void temp :: gettemp(){
    cout<<"Enter the temperature in fahrenheit: ";
    cin>>f;
}
void temp::displaytemp(){
    c=(f-32)*5/9;
    cout<<"The temperature in celsius: "<<c;
}
 int main(){
    temp T;
    T.gettemp();
    T.displaytemp();
    return 0;
 }
