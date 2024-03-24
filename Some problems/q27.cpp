#include <iostream>
#include <fstream>
using namespace std;

class student{
    int roll, score;
    char name[40];
    int telephone;
    public:
        void getdata(){
            cout<<"\nEnter the name of the student";
            cin>>name;
            cout<<"\nEnter the roll number: ";
            cin>>roll;
            cout<<"\nEnter the score: ";
            cin>>score;
            cout<<"\nEnter the telephone: ";
            cin>>telephone;
        }
        void showdata(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll no: "<<roll<<endl;
            cout<<"Score: "<<score<<endl;
            cout<<"Telephone: "<<telephone<<endl;
        }
};
//member functions 

void input_to_file(){
    fstream fout;
    student s1;
    fout.open("student.dat",ios::binary|ios::out);
    cout<<"Enter student data:\n"<<endl;
    s1.getdata();
    fout.write((char*)&s1,sizeof(s1));
}
void output_from_file(){
    fstream fin;
    student s1;
    fin.open("student.dat",ios::binary|ios::in|ios::out);
    while(!fin.eof()){
        cout<<"\nStudent's Record: ";
        s1.showdata();
        fin.read((char*)&s1,sizeof(s1));
    }
}

int main(){
    input_to_file();
    output_from_file();
    return 0;
}