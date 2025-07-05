#include <iostream>
using namespace std;

class hero{
    private:
        int pilihan;
    public : 
        void setter(int n){
            pilihan = n;
        }
        int getter(){
            return pilihan;
        }
};

int main(){
    hero h;
    h.setter(70);
    cout << "ini adlah" << h.getter();
    return 0;
}