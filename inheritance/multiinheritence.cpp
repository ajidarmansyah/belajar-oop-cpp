#include <iostream>
#include <string>

using namespace std;

class Kendaraan{
    public:
        string warna = "putih";

        void klakson(){
            cout << "telolete" << endl;
        }
};

class Mobil : public Kendaraan{
    public:
        string warna = "hijau";
        int roda = 4;

        void start(){
            cout << "Engine start" << endl;
        }
};

class Motor : public Mobil{
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
