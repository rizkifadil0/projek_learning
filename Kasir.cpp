#include <iostream>
#include <string>
using namespace std;

class beli{
    private:
        char pilihan, pilihanB, pilihanS;
        int jumlahD = 0, jumlahR = 0, jumlahs = 0, jumlahse = 0, jumlahdk = 0, jumlahrs = 0, kalirs = 0, kalidk = 0, kalise = 0, kalis = 0 , kaliR = 0, kaliD = 0;
        int totalharga = 0;
    public:
        void menuutama(){
            cout << "\n=======Selamat Datang=========";
            cin.get();
            cout << "\nSebelum Masuk Kedalam Toko kami harap pahami bahwa Barang\n yang Sudah Dibeli Tidak Dapat Dikembalikan atau Ditukar" << endl << endl;
            cout << "Jika Sudah Paham Kebijakannya tekan enter untuk melanjutkan......";
            cin.get();
        }
        void daftarbarang(){
            cout << "\n=====Daftar Barang Yang Tersedia=====" << endl;
            cout << "1. Dompet Kulit Harimau (Harga : Rp 10jt)" << endl;
            cout << "2. Ransel (45L) Kulit Buaya Muara Belang Merah (Harga : Rp 35jt)" << endl;
            cout << "3. Sepatu Pantopel Kulit Kuda Arab (Harga : Rp15jt)" << endl;
            cout << "4. Dompet Kulit Sapi Jawa (Harga Rp2jt)" << endl;
            cout << "5. Ransel (30L) Karbon (Harga : Rp1jt)" << endl;
            cout << "6. Sepatu Running Khas Jawa (Harga : Rp500rb)" << endl;
        }
        void inputbeli(){
            cout << "\n=============Pembelian===============" << endl;
            cout << "1. Memilih barang " << endl;
            cout << "2. Menghitung Total Barang" << endl;
            cout << "3. Exit" << endl;
            cout << "Masukkan Angka (1/2/3) : ";
            cin >> pilihan;
            cin.ignore(); //untuk membuang newline tersisa
    }
    void inputbarang(){
        cout << "Pilihlah Barang yang anda ingin beli (1/2/3/4/5/6) : " << endl;
            cin >> pilihanB;

            switch (pilihanB)
                {
                case '1':
                    cout << "=/Anda Memilih Dompet Kulit Harimau dengan Harga Rp 10.000.000,00" << endl;
                    cout << "=/Garansi Selama 3 tahun" << endl;
                    cout << "=/Berapa Banyak yang Anda ingin beli : ";
                    cin >> jumlahD;

                    cout << "\nBarang Telah dimasukkan ke keranjang" << endl;
                    cout << "Terimakasih telah berbelanja :)" << endl;

                    kaliD= jumlahD * 10000000;
                    totalharga += kaliD; 
                    break ;
                case '2':
                    cout << "=/Ransel (45L) Kulit Buaya Muara Belang Merah dengan Harga Rp 35.000.000,00" << endl;
                    cout << "=/Garansi Selama 2 tahun" << endl;
                    cout << "=/Berapa Banyak yang Anda ingin beli : ";
                    cin >> jumlahR;

                    cout << "\nBarang Telah dimasukkan ke keranjang" << endl;
                    cout << "Terimakasih telah berbelanja :)" << endl;

                    kaliR= jumlahR * 35000000;
                    totalharga += kaliR;
                    break;
                case '3':
                    cout << "=/Sepatu Pantopel Kulit Kuda Arab dengan Harga : Rp15.000.000,00" << endl;
                    cout << "=/Garansi Selama 2 tahun" << endl;
                    cout << "=/Berapa Banyak yang Anda ingin beli : ";
                    cin >> jumlahse;

                    cout << "\nBarang Telah dimasukkan ke keranjang" << endl;
                    cout << "Terimakasih telah berbelanja :)" << endl;

                    kalise= jumlahse * 15000000;
                    totalharga += kalise;
                    break;
                case '4' : 
                    cout << "=/Dompet Kulit Sapi Jawa dengan Harga Rp2.000.000,00" << endl;
                    cout << "=/Garansi Selama 1 tahun" << endl;
                    cout << "=/Berapa Banyak yang Anda ingin beli : ";
                    cin >> jumlahdk;

                    cout << "\nBarang Telah dimasukkan ke keranjang" << endl;
                    cout << "Terimakasih telah berbelanja :)" << endl;

                    kalidk= jumlahdk * 2000000;
                    totalharga += kalidk;
                    break;
                case '5' :
                    cout << "=/Ransel (30L) Karbon dengan Harga  Rp1.000.000,00" << endl;
                    cout << "=/Garansi Selama 1 tahun" << endl;
                    cout << "=/Berapa Banyak yang Anda ingin beli : ";
                    cin >> jumlahrs;

                    cout << "\nBarang Telah dimasukkan ke keranjang" << endl;
                    cout << "Terimakasih telah berbelanja :)" << endl;

                    kalirs= jumlahrs * 1000000;
                    totalharga += kalirs;
                    break;
                case '6' :
                    cout << "=/Sepatu Running Khas Jawa dengan Harga Rp500.000,00" << endl;
                    cout << "=/Garansi Selama 1,5 tahun" << endl;
                    cout << "=/Berapa Banyak yang Anda ingin beli : ";
                    cin >> jumlahs;

                    cout << "\nBarang Telah dimasukkan ke keranjang" << endl;
                    cout << "Terimakasih telah berbelanja :)" << endl;

                    kalis= jumlahs * 500000;
                    totalharga += kalis;
                    break;
                default:
                    cout << "pilihlah angka dengan benar" << endl;
                    break;
                }
    }

    void setpilihanB(char n){
        pilihanB = n;
    }
    void setpilihan(char n){
        pilihan = n;
    }
    char getpilihanB(){
        return pilihanB;
    }
    char getpilihan(){
    return pilihan;
    }


    void hitungbarang(){
        cout << "\n==========Keranjang===========" << endl;
                cout << "1. Dompet Kulit Harimau (Harga : Rp 10jt) || jumlah = "<< jumlahD << " || Total Harga Rp" << kaliD <<",00" << endl;
                cout << "2. Ransel (45L) Kulit Buaya Muara Belang Merah (Harga : Rp 35jt) || jumlah = "<< jumlahR << " || Total Harga Rp" << kaliR <<",00" << endl;
                cout << "3. Sepatu Pantopel Kulit Kuda Arab (Harga : Rp15jt) || jumlah = "<< jumlahse << " || Total Harga Rp" << kalise <<",00" << endl;
                cout << "4. Dompet Kulit Sapi Jawa (Harga Rp2jt) || jumlah = "<< jumlahdk << " || Total Harga Rp" << kalidk <<",00" << endl;
                cout << "5. Ransel (30L) Karbon (Harga : Rp1jt) || jumlah = "<< jumlahrs << " || Total Harga Rp" << kalirs <<",00" << endl;
                cout << "6. Sepatu Running Khas Jawa (Harga : Rp500rb) || jumlah = "<< jumlahs << " || Total Harga Rp" << kalis <<",00" << endl;
                cout << "====== Total Harga =  Rp" << totalharga << ",00 ========" << endl;
    }



};


int main (){
    beli b;
    char input, inputn;
    b.menuutama();
    while (true){
        b.daftarbarang();
        b.inputbeli();
        input = b.getpilihan();
        if(input == '1')
        {
            b.inputbarang();
        }
        else if(input == '2')
        {
            b.hitungbarang();
        }
        else if(input == '3')
        {
            return 0;
        }
    }
    
}