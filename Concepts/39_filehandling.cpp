#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char arr[100];
    cout<<"Enter your name and age: ";
    cin.getline(arr,100);
    //file write 
    ofstream hello("xyz.txt",ios::app); //int x, float y similar as this //ios for append mode  
    hello<<arr;
    hello.close();
    cout<<"File write operation performed successfully! "<<endl<<endl;


    //file read
    cout<<"Reading started...."<<endl;
    char arr1[100];
    ifstream obj("xyz.txt");
    obj.getline(arr1,100);
    cout<<"Array content: "<<arr1<<endl;
    cout<<"File reading succesfully"<<endl;

    return 0;
}