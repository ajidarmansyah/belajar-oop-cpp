#include <iostream>
#include <string>

using namespace std;

class Hero {
    public:
        string name;

        void display(){
            cout << "Nama : " << this->name << endl;
        }
};

class HeroAssasin : public Hero{

};

int main(int argc, char const *argv[])
{
    Hero ayaka;
    ayaka.name = "Ayaka";
    HeroAssasin ling;
    ling.name = "Ling";

    ayaka.display();
    ling.display();
    return 0;
}
