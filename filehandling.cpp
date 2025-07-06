#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string tulis;
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

    ifstream data("Data Mage.txt"); //membaca file

    if (data.is_open()) {
        cout << "=== Isi File ===" << endl;
        while (getline(data, tulis)) {
            cout << tulis << endl;
        }
        data.close();
    } else {
        cout << "File tidak bisa dibuka!" << endl;
    }
}