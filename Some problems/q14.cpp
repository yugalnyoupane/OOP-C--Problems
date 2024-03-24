//join two string usiing dynamic constructor concept 

#include <iostream>
#include <cstring>
using namespace std;

class concat{
    char *ch;
    int len;
    public:
        concat(){
            len = 0;
            ch = new char[len + 1];
        }
        concat(const char *p){
            len = strlen(p);
            ch = new char[len + 1];
            strcpy(ch,p);
        }
        void concatenate(concat A, concat B){
            len = A.len + B.len;
            ch = new char[len+1];
            strcpy(ch, A.ch);
            strcat(ch, B.ch);
        }
        void display(){
            cout<<"Character: "<<ch;
        }
        ~concat(){
            delete [] ch;
        }

};
int main(){
    concat C1("Yugal");
    concat C2("Yureka");
    concat C3;
    C3.concatenate(C1,C2);
    C3.display();
    
}