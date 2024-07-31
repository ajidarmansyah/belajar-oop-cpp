#include <iostream>
#include <string>

using namespace std;

class Hero{
    protected:
        string name;
        int HP;
        int attak;
        int deffece;
    
    public:
        Hero(const char* name){
            this->name = name;
            this->HP = 100;
            this->attak = 50;
            this->deffece = 20;
        }

        void dispalyHero(){
            cout << "Name \t: " << this->name << endl;
            cout << "HP \t: " << this->HP << endl;
            cout << "Attak \t: " << this->attak << endl;
            cout << "Deffece : " << this->deffece << endl;
        }
};

class YelanHero : public Hero{
    protected:
        int hydroBonus;
    
    public:
        YelanHero(const char* name, int valueHydroBonus) : Hero(name){
            this->name = name;
            this->hydroBonus = valueHydroBonus;
        }

        void displayYelanHero(){
            Hero::dispalyHero(); // namespace tidak hanya untuk attribute tapi juga bisa untuk function
            cout << "HydroBonus : " << this->hydroBonus << endl;
        }
};

int main(int argc, char const *argv[])
{
    YelanHero yelan("Yelan",150);
    yelan.displayYelanHero();

    return 0;
}
