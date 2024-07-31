#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        float IPK;

    // constructor
    Mahasiswa(string nama, float IPK){
        Mahasiswa::nama = nama;
        Mahasiswa::IPK = IPK;
    }

    // method
    void printData(){
        cout << nama << endl;
        cout << IPK << endl;
    }

    void ubahNama(const char* nama){
        Mahasiswa::nama = nama;
    }

    string getNama(){
        return nama;
    }

    float getIPK(){
        return Mahasiswa::IPK;
    }

    float tambahIPK(const float &nilai){
        return Mahasiswa::IPK + nilai;
    }

};

int main(int argc, char const *argv[])
{
    Mahasiswa data1 = Mahasiswa("Acong", 2.5);
    data1.printData();
    return 0;
}
