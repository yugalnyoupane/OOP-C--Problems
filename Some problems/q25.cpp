#include <iostream>
using namespace std;

class cricketer{
    protected:
        char name[30];
        int age;
        int no;
    public:
        void getinfo(){
            cout<<"Enter the player's name: ";
            cin>>name;
            cout<<"Age of the player?: ";
            cin>>age;
            cout<<"No. of matches played?: ";
            cin>>no;
        }
        void printinfo(){
            cout<<"Player's name: :"<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"No. of matches played: "<<no<<endl;
        }

};
class bowler:virtual public cricketer{
    protected:
        int nw;
    public:
        void getinfo_bowler(){
            cricketer::getinfo();
            cout<<"How many wicket's have you taken? ";
            cin>>nw;
        }
        void printinfo_bowlder(){
            cricketer::printinfo();
            cout<<"Wicket's taken: "<<nw<<endl;
        }
};
class batter:virtual public cricketer{
    protected:
        int no_of_runs;
        int centuries;
    public:
        void getinfo_batter(){
            cricketer::getinfo();
            cout<<"How many runs scored?: ";
            cin>>no_of_runs;
            cout<<"How many centuries?: ";
            cin>>centuries;
        }
        void printinfo_batter(){
            cricketer::printinfo();
            cout<<"Runs scored: "<<no_of_runs<<endl;
            cout<<"No. of centuries: "<<centuries<<endl;
        }
};
class Nationalplayer:public bowler,public batter{
    protected:
        int s;
    public:
        void printinfo(){
            cricketer::printinfo();
        }

};
int main(){
    bowler B1;
    batter B2;
    B1.getinfo_bowler();
    B1.printinfo_bowlder();

    B2.getinfo_batter();
    B2.printinfo_batter();
    Nationalplayer N1;
    N1.getinfo();

}
