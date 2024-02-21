//Write a program to input an integer value from keyboard and display on screen "WELL DONE" that many times. 

#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter your desired number to print \"WELL DONE\": ";
    cin>>a;
    for (int i=0;i<=a;i++){
        cout<<"\nWELL DONE";
    }
    return 0;

}