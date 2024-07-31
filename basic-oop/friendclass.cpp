#include <iostream>
#include <string>

using namespace std;

class Persegi{
    friend class PersegiPanjang;
    private:
        int sisi;

    public:
        Persegi(int sisi){
            this->sisi = sisi;
        }

        int luas(){
            return this->sisi*this->sisi;
        }
};

class PersegiPanjang{
    private:
        int panjang;
        int lebar;
    
    public:
        PersegiPanjang(int panjang, int lebar){
            this->panjang = panjang;
            this->lebar = lebar;
        }

        int luas(){
            return this->panjang*this->lebar;
        }

        bool isLebihPanjang(const Persegi &obj){
            bool isTure = this->panjang >= obj.sisi;
            return isTure;
        }
};

int main(int argc, char const *argv[])
{
    Persegi persegi = Persegi(8);
    PersegiPanjang kotak = PersegiPanjang(7,3);

    cout << "Luas persegi = " << persegi.luas() << endl;
    cout << "Luas kotak = " << kotak.luas() << endl;
    cout << "Luas siLebihPanjang? = " << kotak.isLebihPanjang(persegi) << endl;
    return 0;
}
