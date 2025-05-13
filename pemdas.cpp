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

    
}