#include <iostream>
using namespace std;

void print(char c='L',int n=5){
    for(int i=0;i<n;i++){
        cout<<c<<endl;
    }
}
int main(){
    char A;
    int x;
    cout<<"Enter the character: ";
    cin>>A;
    cout<<"How many times you want to display? ";
    cin>>x;
    print(A,x);
    return 0;
}
