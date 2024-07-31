#include <iostream>
#include <string>

using namespace std;

/*
    multiple inheritence memungkinkan kita bisa melakukan
    turunan lebih dari satu base class
*/

class Kendaraan{
    public:
        string warna = "putih";

        void klakson(){
            cout << "telolete" << endl;
        }
};

class Mobil{
    public:
        string warna = "hijau";
        int roda = 4;

        void start(){
            cout << "Engine start" << endl;
        }
};

// kelas turunan dari berbagai base class 
class Motor : public Kendaraan, public Mobil{
    public:
        string warna = "hitam";
        int roda = 2;
};

int main(int argc, char const *argv[])
{
    Motor kawasaki;
    kawasaki.start();
    kawasaki.klakson();
    return 0;
}
