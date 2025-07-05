#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
        int nim;
        string nama;
    public:
        mahasiswa(){
            cout << "Mahasiswa dibuat" << endl;
        }
        mahasiswa(int a, string b){
            nim = a;
            nama = b;
            cout << "nim : " << nim << " dibuat" << endl;
            cout << "nama : " << nama << " dibuat" << endl;
        }

        //destruktor
        ~mahasiswa(){
            cout << "Mahasiswa dihapus" ;
        }

        void tampil(){
            cout << "=====Data Mahasiswa======" << endl;
            cout << "nim : " << nim << endl;
            cout << "nama : " << nama << endl;
        }
        void setnim(int a){
            nim = a;
        }
        int getnim(){
            return nim;
        }
        void setnama(string a){
            nama = a;
        }
        string getnama(){
            return nama;
        }
        void input(){
            cout << "Masukkan Nama : ";
            cin >> nama;
            cout << "Masukkan Nim : ";
            cin >> nim;
        }
};

int main(){
    int inputnim;
    string inputnama;
    mahasiswa mhs(inputnim, inputnama);
    mhs.input();
    inputnim = mhs.getnim();
    inputnama = mhs.getnama();
    mhs.tampil();
}