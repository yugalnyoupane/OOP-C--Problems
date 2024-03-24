#include <iostream>
#include <fstream>
#include <string>
#include <cstring> //for strlen function
using namespace std;
int main(){
    ofstream outfile("Hey.txt");
    char str[]= "Yugal Good Boy!";
    for( int i =0; i<strlen(str);i++){
        outfile.put(str[i]);
    }
    return 0;
}

