#include <iostream>
#include <string>

using namespace std;

class Hero{
    public:
        string name;
        int HP;

        // defauld argumen 
        Hero(const char *name = "Player", int HP = 100){
            this->name = name;
            this->HP = HP;
        }

        void display(){
            cout << "Nama :" << this->name << endl;
            cout << "HP :" << this->HP << endl;
        }
};

int main(int argc, char const *argv[])
{
    Hero hero1 = Hero("Aku", 120);
    hero1.display();

    Hero hero2 = Hero();
    hero2.display();
    return 0;
}
