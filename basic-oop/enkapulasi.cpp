#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string namePublic;
    private:
        string namePrivate;
    
    public:
        Mahasiswa(const char* name){
            this->namePublic = name;
            this->namePrivate = name;
        }

        void display(){
            cout << "Nama : " << this->namePrivate << endl;
        }
    
    private:
        void displayPrivate(){
            cout << "Nama : " << this->namePrivate << endl;
        }
};

int main(int argc, char const *argv[])
{
    Mahasiswa *mahasiswa1 = new Mahasiswa("Ujang");
    mahasiswa1->display();
    delete mahasiswa1;
    return 0;
}
