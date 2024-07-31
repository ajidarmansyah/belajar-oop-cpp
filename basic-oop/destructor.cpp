#include <iostream>
#include <string>

using namespace std;

// di stack memory object akan otomatis di hapus setiap bertemu kurung kurawal "}"
// di heap memory object tidak akan di hapus, harus menggunakan keyword delete

class Player{
    public:
        string nama;

        // constructor
        Player(const char *nama){
            Player::nama = nama;
            cout << "player " << Player::nama << " dibuat" << endl;
        }

        // destructor
        ~Player(){
            cout << "player " << Player::nama << " dihapus" << endl;
        }
};

void membuatObjStck(){
    Player alucard = Player("alucard");
}

void membuatObjHeap(){
    Player *wanwan = new Player("wanwan");
    delete wanwan;
}

int main(int argc, char const *argv[])
{
    membuatObjStck();
    membuatObjHeap();

    return 0;
}

