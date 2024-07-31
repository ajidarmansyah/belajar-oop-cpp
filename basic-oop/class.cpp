#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        float IPK;
        string jurusan;
};

int main(int argc, char const *argv[])
{
    Mahasiswa data1;
    data1.nama = "Aji Darmansyah";
    data1.IPK = 3.45;
    data1.jurusan = "Teknik Informatika";

    cout << data1.nama << endl;
    cout << data1.IPK << endl;
    cout << data1.jurusan << endl;
    return 0;
}
