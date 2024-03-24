#include <iostream>
using namespace std;
class Meter{
    private:
        float length;
    public:
        Meter(){
            length = 0;
        }
        Meter(float l){
            length = l/100.0;
        }
        void showlength(){
            cout<<"Length(in meters)= "<<length;
        }
};

int main(){
    Meter m1;//userdefined
    float l1;///basic
    cout<<"Enter lengths in cm: "<<endl;
    cin>>l1;
    m1=l1; //conversion from basic to userdefined
    //l1=m1 conversion from userdefined to basic
    m1.showlength();
    return 0;

}