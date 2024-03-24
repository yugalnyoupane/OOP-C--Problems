#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    char ch;
    ifstream inputfile("Hey.txt");
    while(inputfile){
        inputfile.get(ch);
        cout<<ch;
    }
    return 0;
}