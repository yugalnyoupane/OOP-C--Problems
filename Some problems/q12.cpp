//department ID and Department name with constructor
//destructor in same class and show objects are destroyed in reverse order

#include <iostream>
#include <cstring>
#include<string>
using namespace std;

class depart{
    int *id;
    char *name;
    static int count;
    public:
        depart(){
            id = new int;
            name = new char[50];
            count++;

            id = 0;
            strcpy(name,"Default"); 
        }
        depart(int x, const char *t){
            id = new int;
            *id = x;

            name = new char[strlen(t)+1];
            count++;
            strcpy(name,t);
        }

        ~depart(){
            delete id;
            delete [] name;
            cout<<count--<<"th Object Destroyed "<<endl;
        }

};
int depart::count = 0;


int main(){
    depart D1(1,"Aaradhya");
    depart D2(2,"Yugal");
    depart D3(3,"Preeti");
    return 0;

}