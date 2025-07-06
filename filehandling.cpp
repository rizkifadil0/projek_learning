#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream file("biodata.txt"); // membuat/menulis ke file

    if (file.is_open()) {
        file << "Nama : Rizki \n";
        file << "Umur : 23 \n";
        file << "Alamat : Bogor \n" ;
        file.close(); //wajib untuk menyimpan file
        cout << "file berhasil disimpan" << endl;
    }
    else {
        cout << "gagal membuka file" << endl;
    }

    return 0;
}