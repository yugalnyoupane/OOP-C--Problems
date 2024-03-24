#include <iostream>
using namespace std;
#include <string>

template<class T>
void print(T data){
    cout<<"First: "<<data<<endl;
}

template<class T>
void print(T data, int n){
    cout<<"This much times: "<<endl;
    for(int i =0;i<n;i++){
        cout<<data<<endl;
    }
}

template<class T,class S>
void print(T title, S data, int n){
    cout<<"Title: "<<title<<endl;
    for(int i=0;i<n;i++){
        cout<<data<<endl;
    }
}

int main(){
    print<int>(4.56);
    print<float>(4.56);
    print<float>(4,5);
    print<string, string>("OOP","Template",3);
    return 0;
}