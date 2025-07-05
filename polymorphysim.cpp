#include <iostream>
using namespace std;

class transportasi{
    public :
        virtual void bergerak(){

        }
};

class sepeda : public transportasi{
    public :
        void bergerak() override{
            cout << "Sepeda dikayuh kring kring" << endl;
        }

};

class mobil : public transportasi{
    public :
        void bergerak() override{
            cout << "Mobil Digas Ngengggg!" << endl;
        }    
};

class kereta : public transportasi{
    public :
        void bergerak() override{
            cout << "Kereta direl tutuu!" << endl;
        }
};

int main (){
    transportasi* t;
    mobil m;
    kereta k;
    sepeda s;

    t = &m;
    t ->bergerak();
    t = &k;
    t ->bergerak();
    t = &s;
    t ->bergerak();
}