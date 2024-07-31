#include <iostream>
#include <string>

using namespace std;

/*
    kyeword protected digunakan untuk membatasi akses data
    hanya kelas turunan yang akan bisa mengaksesnya
    CATATAN: kelas turunan tidak dapat mengakses data dengan tipe private
*/

class MyClass{
    protected: // keyword untuk membatasi akses ke data
        int harga = 1000;
};

class ChildClass : public MyClass{
    public:
        int tambahHarga(int nilai){
            int hasil = this->harga += nilai;
            return hasil;
        }

        void disply(){
            cout << this->harga << endl;
        }
};

int main(int argc, char const *argv[])
{
    ChildClass myObj;
    MyClass myObj2;
    myObj.tambahHarga(500);
    myObj.disply();
    return 0;
}
