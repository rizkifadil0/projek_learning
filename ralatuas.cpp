#include <iostream>
#include <string>
using namespace std;

class hero{
    protected :
        string namahero, tipeartefak, statusrekrutment;
        int level, basepower, bonuspower, totalpower;
    
    private :
        int idhero;

    public :
        
        // abstrak
        virtual void inputdatadasar() = 0;
        virtual void evaluasipotensi() = 0;
        virtual void inputartefakdanhitungbonus() = 0;
        virtual void hitungkekuatantempur() = 0;
        virtual void tampilkankekuatanhero() = 0;
        virtual void prosesrekrutmen() = 0;
        virtual void tampilkangagal() = 0;

        void setidhero(int a){
            idhero = a;
        }
        int getidhero(){
            return idhero;
        }
};

class mage : public hero{
    protected :
        int nilaitesmana, input;
        
    public : 
        char pilihan;
        void inputdatadasar() override{
            cout << "======selamat datang Wahai Mage=========" << endl;
            cout << "Masukkan id hero : ";
            cin >> input;
            setidhero(input);
            cout << "Masukkan Nama Hero : ";
            cin.ignore();
            getline(cin, namahero);
            cout << "Masukkan Level : ";
            cin >> level;
            cout << "Masukkan Tes Mana :";
            cin >> nilaitesmana;
        }
        void inputartefakdanhitungbonus() override {
        if (tipeartefak == "Legend")
            {
                bonuspower = 5000;
                hitungkekuatantempur();
                tampilkankekuatanhero();
            }
            else if(tipeartefak == "Epic")
            {
                bonuspower = 3000;
                hitungkekuatantempur();
                tampilkankekuatanhero();
            }
            else if(tipeartefak == "Rare")
            {
                bonuspower = 1500;
                hitungkekuatantempur();
                tampilkankekuatanhero();
            }
            else if(tipeartefak == "Common")
            {
                bonuspower = 500;
                hitungkekuatantempur();
                tampilkankekuatanhero();
            }
            else
            {
                cout << "sepertinya yang anda masukkan bukan artefak!" << endl;
            }
        }
        void hitungkekuatantempur() override{
            basepower = 2000;
            totalpower = basepower + bonuspower;
        }
        void prosesrekrutmen() override{
            if (nilaitesmana >= 80){
                statusrekrutment = "LULUS";
                cout << "selamat anda \"LULUS\"" << endl;
                cout << "===Tipe Artefak====" << endl;
                cout << "Masukkan Tipe Artefak (Legend/Epic/Rare/Common)";
                cin >> tipeartefak;
                inputartefakdanhitungbonus();
            }
            else if(nilaitesmana > 100){
                statusrekrutment = "TERLALU KUAT";
                cout << "KUAT SEKALI!, apakah anda Raja Iblis?!" << endl;
                tampilkangagal();   
            }
            else if(nilaitesmana < 0){
                statusrekrutment = "BUKAN MANUSIA";
                cout << "sepertinya anda bukan manusia" << endl;
                tampilkangagal();
            }
            else 
            {
                statusrekrutment = "GAGAL";
                cout << "Maaf Anda sangat lemah!" << endl;
                tampilkangagal();
            }
        }
        void tampilkankekuatanhero() override{
            cout << "=======Profil=========" << endl;
            cout << "ID Hero : " << input << endl;
            cout << "Nama Hero : " << namahero << endl;
            cout << "Level : " << level << endl;
            cout << "Kelas : Mage" << endl;
            cout << "Satatus Rekrutmen : " << statusrekrutment << endl;
            cout << "Base Power : " << basepower << endl;
            cout << "Tipe Artefak : " << tipeartefak << endl;
            cout << "Bonus Power : " << bonuspower << endl;
            cout << "Total Power : " << totalpower << endl;
            cout << "----------------------------------" << endl;
        }
        void tampilkangagal() override{
            cout << "=======Profil=========" << endl;
            cout << "ID Hero : " << input << endl;
            cout << "Nama Hero : " << namahero << endl;
            cout << "Level : " << level << endl;
            cout << "Kelas : Mage" << endl;
            cout << "Status Rekrutmen : " << statusrekrutment << endl;
        }
        void evaluasipotensi(){
            cout << "========Rekrutmen Hero========" << endl;
            cout << "1. Mage" << endl;
            cout << "2. Tank" << endl;
            cout << "pilihan (1/2) : ";
            cin >> pilihan;
        }

    

};

class tank : public hero{
    protected : 
        string tipeperisai;
        int input;
        char pilihan;
    public :
        void inputdatadasar() override{
            cout << "======selamat datang Wahai Tank=========" << endl;
            cout << "Masukkan id hero : ";
            cin >> input;
            setidhero(input);
            cout << "Masukkan Nama Hero : ";
            cin.ignore();
            getline(cin, namahero);
            cout << "Masukkan Level : ";
            cin >> level;
            cout << "Masukkan Tipe Perisai :";
            cin >> tipeperisai;
        }
        void inputartefakdanhitungbonus() override {
        if (tipeartefak == "Legend")
            {
                bonuspower = 5000;
                hitungkekuatantempur();
                tampilkankekuatanhero();
            }
            else if(tipeartefak == "Epic")
            {
                bonuspower = 3000;
                hitungkekuatantempur();
                tampilkankekuatanhero();
                
            }
            else if(tipeartefak == "Rare")
            {
                bonuspower = 1500;
                hitungkekuatantempur();
                tampilkankekuatanhero();
            }
            else if(tipeartefak == "Common")
            {
                bonuspower = 500;
                hitungkekuatantempur();
                tampilkankekuatanhero();
            }
            else
            {
                cout << "sepertinya yang anda masukkan bukan artefak!" << endl;
            }
        }
        void hitungkekuatantempur() override{
            basepower = 3000;
            totalpower = basepower + bonuspower;
        }
        void tampilkankekuatanhero() override{
            cout << "=======Profil=========" << endl;
            cout << "ID Hero : " << input << endl;
            cout << "Nama Hero : " << namahero << endl;
            cout << "Level : " << level << endl;
            cout << "Kelas : Tank" << endl;
            cout << "Satatus Rekrutmen : " << statusrekrutment << endl;
            cout << "Base Power : " << basepower << endl;
            cout << "Tipe Artefak : " << tipeartefak << endl;
            cout << "Bonus Power : " << bonuspower << endl;
            cout << "Total Power : " << totalpower << endl;
            cout << "----------------------------------" << endl;
        }
        void tampilkangagal() override{
            cout << "=======Profil=========" << endl;
            cout << "ID Hero : " << input << endl;
            cout << "Nama Hero : " << namahero << endl;
            cout << "Level : " << level << endl;
            cout << "Kelas : Tank" << endl;
            cout << "Tipe Perisai :" << tipeperisai;
            cout << "Status Rekrutmen : " << statusrekrutment << endl;
        }
        void prosesrekrutmen() override{
            if (tipeartefak == "Andamantite" || "Baja"){
                statusrekrutment = "LULUS";
                cout << "selamat anda \"LULUS\"" << endl;
                cout << "===Tipe Artefak====" << endl;
                cout << "Masukkan Tipe Artefak (Legend/Epic/Rare/Common)";
                cin >> tipeartefak;
                inputartefakdanhitungbonus();
            }
            else if(tipeartefak == "Kayu"){
                statusrekrutment = "GAGAL";
                cout << "Maaf, Kayu sangat lemah!" << endl;
                tampilkangagal();
            }
            else 
            {
                statusrekrutment = "GAGAL";
                cout << "Aneh Sekali!" << endl;
                tampilkangagal();
            }
        }
        void evaluasipotensi(){
            cout << "========Rekrutmen Hero========" << endl;
            cout << "1. Mage" << endl;
            cout << "2. Tank" << endl;
            cout << "pilihan (1/2)";
            cin >> pilihan;
        }
};

int main(){  
    hero *h = nullptr; 
    mage m;
    tank t;
    char i;

    mage* ma = &m;
    tank* ta = &t;

    do{
        ma->evaluasipotensi();
        if (ma->pilihan == '1')
        {
            ma->inputdatadasar();
            ma->prosesrekrutmen();
            cout << "Apakah Anda ingin Melalakukan Rekrutmen Lagi (y/n) : ";
            cin >> i;

        }
        else if(ma->pilihan == '2')
        {
            ta->inputdatadasar();
            ta->prosesrekrutmen(); 
            cout << "Apakah Anda ingin Melalakukan Rekrutmen Lagi (y/n) : ";
            cin >> i;
            cin.ignore();
        }
    } while (i == 'y');
}