#include <iostream>
using namespace std;

class uang{
    private : 
        int rupiah;
    public :

        uang(int a = 0){
            rupiah = a;
        }

        //overload +
        uang operator+(const uang& dompet){
            return uang(rupiah + dompet.rupiah);
        }

        void tampil(){
            cout << "Total Uang : Rp" << rupiah << endl; 
        }


};

int main(){
    uang dompet1(200000);
    uang dompet2(300000);
    uang total = dompet1 + dompet2;
    total.tampil();
}