//rethrowing exception
#include <iostream>
using namespace std;

void divide(double x, double y){
    std::cout<<"Inside Divide:\n";
    try{
        if(y==0.0) throw y;
        else std::cout<<"result= "<<x/y<<endl;
    }
    catch(double a){
        std::cout<<"Exception in divide:\n";
        throw;
    }
    std::cout<<"End of Divide: ";
};
int main(){
    cout<<"Inside main:\n";
    try{
        divide(10,0);
        divide(5.0,0.0);
    }
    catch (int){
        cout<<"Exception in main(int):\n";
    }
    catch(double){
        cout<<"Exception in main(double)\n";
    }
    cout<<"End of main";
    return 0;
}