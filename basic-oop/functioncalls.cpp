#include <iostream>
#include <string>

using namespace std;

class Player{
    private:
        string nama_depan;
        string nama_tengah;
        string nama_belakang;
    
    public:
        Player(){
            this->nama_depan = "depan";
            this->nama_tengah = "tengah";
            this->nama_belakang = "belakang";
        }

        Player& setNamaDepan(const char* depan){
            this->nama_depan = depan;
            return *this;
        }
        Player& setNamaTengah(const char* tengah){
            this->nama_tengah = tengah;
            return *this;
        }
        Player& setNamaBelakang(const char* belakang){
            this->nama_belakang = belakang;
            return *this;
        }

        void display(){
            cout << "nama: ";
            cout << " " << nama_depan;
            cout << " " << nama_tengah;
            cout << " " << nama_belakang << endl;
        }
};


int main(int argc, char const *argv[])
{
    Player* player1 = new Player();
    player1->setNamaDepan("Muhammad").setNamaTengah("Yusuf").setNamaBelakang("Ibrahim");
    player1->display();
    return 0;
}
