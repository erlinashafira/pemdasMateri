#include <iostream>
using namespace std;

class bangunDatar;

class persegiPanjang{
    public:
    void inputData(bangunDatar &bd);
    void outputData(bangunDatar &bd);
};

class bangunDatar{
    private:
    float panjang;
    float lebar;
    float hitungLuas(){
        return panjang * lebar;
    };
    float hitungKeliling(){
        return 2 * panjang + lebar;
    };
public:
    friend void persegiPanjang::inputData(bangunDatar &bd);
    friend void persegiPanjang::outputData(bangunDatar &bd);   
};

void persegiPanjang::inputData(BangunDatar &bd){
    cout << "Masukkan panjang: ";
    cin >> bd.panjang;
    cout << "Masukan lebar : ";
    cin >> bd.lebar;
}

void persegiPanjang::outputData(bangunDatar &bd){
    cout << "Luas : "<< bd.hitungLuas() << endl;
    cout << "Kelnling : "<<bd.hitungKeliling() << endl;
};

int main(){
    persegiPanjang pP;
    bangunDatar bD;
    pP.inputData(bD);
    pP.inputData(bD);
};