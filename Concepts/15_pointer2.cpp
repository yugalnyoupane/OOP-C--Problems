#include <iostream>
using namespace std;

int main(){
   /* int m=7;
    int const *ptr = &m;
    cout<<ptr<<endl;
    cout<<m<<endl;
    cout<<&m<<endl;
    cout<<*ptr<<endl;*/
    int x = 10;
    void *q = &x; // void pointer pointing to an integer
    int *p;

    // Incorrect syntax - this will result in a compilation error
    // p = int * (q);

    // Correct syntax - casting q to int pointer type
    p = (int *) q;

    // Dereferencing p to access the value pointed to by q
    std::cout << "Value of x (dereferencing p): " << *p << std::endl;

    return 0;
}