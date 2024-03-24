#include <iostream>
using namespace std;

class Weight{
    private:
        int kg;
    public:
        Weight(){
            kg = 0;
        }
        Weight(int x){
            kg = x;
        }
    void printWeight(){
        cout<<"Weight in KG: "<<kg<<endl;
    }
    Weight operator ++()
    {//preincrement 
        Weight temp;
        temp.kg = ++kg;
        return temp;
    }
    void operator ++(int){
        //postincrement
        kg++;
    }


};

int main(){
    Weight obj(10);
    Weight temp2;
    temp2 = ++obj;
    temp2.printWeight();
    obj.printWeight();
    obj++; //obj.operator ++()
    obj.printWeight();
    return 0;
}