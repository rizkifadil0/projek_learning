#include <iostream>
#include <string>
using namespace std;

class buku {
private:
    string judul[100], penulis[100];
    int jumlahstok[100];
    int jenisbuku;
    char pilihan;
public:
    void inputbuku() {
        
        while(true){
            cout << "======== Menu Utama ========\n";
            cout << "1. Input Buku\n";
            cout << "2. Tampilkan Daftar Buku\n";
            cout << "3. Keluar\n";
            cout << "Pilih opsi (1/2/3): ";
            cin >> pilihan;
            cin.ignore(); // Buang newline setelah cin >>
        if (pilihan == '3') {
            cout << "Terima kasih!" << endl;
            break;
        }
        else if (pilihan == '2'){
            tampilbuku();
        }
        else if (pilihan == '1'){
            cout << "Masukkan jumlah jenis buku yang ingin diinput: ";
            cin >> jenisbuku;
            
            cin.ignore(); // Penting untuk menghilangkan newline setelah cin >>
            for (int i = 0; i < jenisbuku; i++) {
            cout << "\n======= Input Buku ke-" << i + 1 << " ========" << endl;

            cout << "Masukkan judul Buku: ";
            getline(cin, judul[i]);

            cout << "Masukkan Penulis Buku: ";
            getline(cin, penulis[i]);

            cout << "Masukkan Jumlah Stok Buku: ";
            cin >> jumlahstok[i];
            cin.ignore(); // Buang newline setelah cin >>
        }
        }
        
        }
    }

    void tampilbuku() {
        cout << "\n======= Daftar Buku =======\n";
        for (int i = 0; i < jenisbuku; i++) {
            cout << "Judul Buku: " << judul[i] << endl;
            cout << "Penulis Buku: " << penulis[i] << endl;
            cout << "Jumlah Stok Buku: " << jumlahstok[i] << endl;
            cout << "-----------------------------\n";
        }
    }
};

int main() {
    buku b;
    b.inputbuku();
    return 0;
}
