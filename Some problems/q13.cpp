//create a class vector  - integer number reads
//vector addition - passing object as argument and returns the objects as result
//vector has 3 coordinates, add them 

#include <iostream>
using namespace std;

class Vector{
    protected:
        int x, y , z;
    public:
        friend Vector add(Vector, Vector, Vector);
        Vector(){
            x = 0;
            y = 0;
            z = 0;
        }
        Vector(int x, int y , int z){
            this->x = x;
            this->y = y; 
            this->z = z;
        }

        void display(){
            cout<<"X coordinate: "<<x<<endl;
            cout<<"Y coordinate: "<<y<<endl;;
            cout<<"Z coordinate: "<<z<<endl;
        }
};
Vector add(Vector A, Vector B, Vector C){
    Vector temp;
    temp.x = A.x + B.x + C.x;
    temp.y = A.y + B.y + C.y;
    temp.z = A.z + B.z + C.z;
    return temp;
}

int main(){
    Vector V1(1,2,3);
    Vector V2(3,4,5);
    Vector V3(8,4,5);
    Vector V4 = add(V1,V2,V3);
    V4.display();

}