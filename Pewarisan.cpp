#include <iostream>
#include <string>
using namespace std;

class kendaraan{
    protected :
        int tahun;
        string merek;
    public :
        void inputdata(){
            cout << "Masukkan merek kendaraan : ";
            cin.ignore();
            getline(cin, merek);
            cout << "Masukkan Tahun kendaraan : ";
            cin >> tahun;
        }
        void tampildata(){
            cout << "Merek Kendaraan : " << merek << endl;
            cout << "Tahun Dikeluarkan : " << tahun << endl;
        }
        void settahun(int a){
            tahun = a;
        }
        void setmerek(string a){
            merek = a;
        }
        string getmerek(){
            return merek;
        }
        int gettahun(){
            return tahun;
        }
};

class motor : public kendaraan{
    protected :
        int cc;
        string jenis;
    public : 
        void inputmotor(){
            cout << "============Input Data Motor===========" << endl;
            inputdata();
            cout << "Masukkan Jenis motor : ";
            cin.ignore();
            getline(cin, jenis);
            cout << "Masukkan CC motor : ";
            cin >> cc;
            cout << "---------------------------" << endl;
        }
        void tampilmotor(){
            cout << "===============Data Motor=============="<< endl;
            tampildata();
            cout << "Jenis Motor : " << jenis << endl;
            cout << "CC Motor : " << cc << endl;
        }
        void setjenis(string a){
            jenis = a;
        }
        void setcc(int a){
            cc =a;
        }
        int getcc(){
            return cc;
        }
        string getjenis(){
            return jenis;
        }

};

int main(){
    motor m;
    string inm, inj;
    int incc, inT;
    m.inputmotor();
    inm = m.getmerek();
    inj = m.getjenis();
    incc = m.getcc();
    inT = m.gettahun();
    m.tampilmotor();
}