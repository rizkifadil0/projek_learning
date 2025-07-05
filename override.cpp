#include <iostream>
#include <string>
using namespace std;

class pegawai{
    protected:
        string nama;
        char pilihan;
    public :
        void menu(){
            cout << "===========Data Pegawai===========" << endl;
            cout << "1. Karyawan Tetap" << endl;
            cout << "2. Krayawan Harian" << endl;
            cout << "pilihan (1/2) : ";
            cin >> pilihan;
        }
        virtual void input(){
            cout << "======Input Data Pegawai=========" << endl;
            cout << "Masukkan Nama Pegawai";
            cin.ignore();
            getline(cin, nama);
        }
        virtual void tampil(){
            cout << "========Display Data Pegawai======" << endl;
            cout << "Nama : " << nama << endl;
        }
        virtual void gaji(){

        }
        void setnama(string a){
            nama = a;
        }
        string getnama(){
            return nama;
        }
        void setpilihan(char a){
            pilihan = a;
        }
        char getpilihan(){
            return pilihan;
        }
};

class tetap : public pegawai{
    protected:
        int gajitetap;
    public: 
        void input() override{
            cout << "======Input Data Pegawai=========" << endl;
            cout << "Masukkan Nama Pegawai : ";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan gaji pegawai per bulan : Rp";
            cin >> gajitetap;
        }
        void tampil() override{
            cout << "========Display Data Pegawai======" << endl;
            cout << "Nama : " << nama << endl;
            cout << "Gaji per bulan : Rp" << gajitetap << ",00" << endl;
        }
};

class harian : public pegawai{
    protected:
        int harikerja, gajiperhari, totalgaji;
    public :
        void input() override{
            cout << "======Input Data Pegawai=========" << endl;
            cout << "Masukkan Nama Pegawai : ";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan gaji pegawai per hari : Rp";
            cin >> gajiperhari;
            cout << "Masukkan Hari Kerja : ";
            cin >> harikerja;
        }
        void gaji() override{
            totalgaji = harikerja * gajiperhari;;
        }
        void tampil() override{
            cout << "========Display Data Pegawai======" << endl;
            cout << "Nama : " << nama << endl;
            cout << "Total Gaji dalam " << harikerja << " Hari adalah Rp" << totalgaji << ",00" << endl; 
        } 

};

int main(){
    tetap t;
    harian h;
    tetap* ptr = &t;
    harian* point = &h;
    char input;


    ptr->menu();
    input = t.getpilihan();
    if (input == '1') 
    {
        ptr->input();
        ptr->tampil();
    }
    else if (input == '2')
    {
        point->input();
        point->gaji();
        point->tampil();
    }
    else 
    {
        cout << "Masukkanlah angka dengan benar" << endl;
    }
}