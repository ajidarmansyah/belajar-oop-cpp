#include <iostream>
#include <string>

using namespace std;

class Hero{
    public:
        string name;
        int HP;
        string role;

        // constructor
        Hero(const char *name, const char *role, int HP){
            this->name = name;
            this->role = role;
            this->HP = HP;
        }

        // prototype
        void display();
};

int main(int argc, char const *argv[])
{
    Hero SangonomiyaKokomi = Hero("Sangonomiya Kokomi", "suport hiler", 120);
    Hero KamisatoAyaka = Hero("Kamisato Ayaka", "DPS", 115);
    SangonomiyaKokomi.display();
    KamisatoAyaka.display();
    return 0;
}

void Hero::display(){
    cout << "Nama Hero : " << this->name << endl;
    cout << "Role Hero : " << this->role << endl;
}
