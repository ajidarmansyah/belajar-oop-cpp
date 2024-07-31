#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string jurusan;
        float IPK;

    Mahasiswa(string inputNama, string inputJurusan, float inputIPK){
        Mahasiswa::nama = inputNama;
        Mahasiswa::jurusan = inputJurusan;
        Mahasiswa::IPK = inputIPK;

        cout << Mahasiswa::nama << endl;
        cout << Mahasiswa::jurusan << endl;
        cout << Mahasiswa::IPK << endl;
    }
};

int main(int argc, char const *argv[])
{
    Mahasiswa data1 = Mahasiswa("Supri", "Teknik Mesin", 3.5);
    Mahasiswa data2 = Mahasiswa("Acong", "Fisika", 3.4);
    return 0;
}
