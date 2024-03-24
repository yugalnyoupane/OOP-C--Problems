#include <iostream>
using namespace std;
void divide(float x , float y,float z){
    float res ;
            res = x/(y-z);
            cout<<"The division result is: "<<res<<endl;
            if ((y-z)==0){
                throw (y-z);
            }
}

int main(){

    float x , y;
    try{
        divide (5,6,6);
        divide (1,2,3);
    }
    catch(float a){
        cout<<"ERROR FOUND. THE DUMB USER IS TRYING TO DIVIDE BY "<<y<<endl;
    }
    
    return 0;
    
    }