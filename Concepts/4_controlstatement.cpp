//Switch case
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter you age: "<<endl;
    cin>>a;
    switch(a){
        case 18:
            cout<<"Welcome to the club! ";
            break;
        case 17:
            cout<<"Not welcomed to the club! ";
            break;
        default:
            cout<<"Guess, your age didn't come! ";
            break;
    }
    return 0;
}