//transpose of given Matrix using OOP
#include <iostream>
using namespace std;

class Matrix{
    int a[3][3];
    int b[3][3];
    public:
        Matrix();
        void Transpose();
        void Display();
};
Matrix::Matrix(){
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            cin>>a[i][j];
        }
    }
}
void Matrix::Transpose(){
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            a[i][j]=a[j][i];
        }
    }
}
void Matrix::Display(){
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            cout<<a[i][j]<<endl;
        }
    }
}

int main(){
    Matrix M1;
    M1.Transpose();
    M1.Display();
}