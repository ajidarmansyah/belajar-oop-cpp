#include <iostream>
#include <string>

//friend adalah keyword yang memungkinkan finction bisa mengakses member public/pivate

using namespace std;

class HeroJahat;

class HeroBaik{
    private:
        string name;
        int HP;
    
    public:
        HeroBaik(const char* name){
            this->name = name;
            this->HP = 100;
        }

        friend bool compare(const HeroBaik &hero1, const HeroJahat &hero2);
        friend bool compare(const HeroJahat &hero1, const HeroBaik &hero2);
};

class HeroJahat{
    private:
        string name;
        int HP;
    
    public:
        HeroJahat(const char* name){
            this->name = name;
            this->HP = 115;
        }

        friend bool compare(const HeroBaik &hero1, const HeroJahat &hero2);
        friend bool compare(const HeroJahat &hero1, const HeroBaik &hero2);
};

bool compare(const HeroBaik &hero1, const HeroJahat &hero2){
    cout << hero1.HP << endl;
    cout << hero2.HP << endl;
    return true;
}

int main(int argc, char const *argv[])
{
    HeroBaik hero1 = HeroBaik("supri");
    HeroJahat hero2 = HeroJahat("agus");

    compare(hero1,hero2);
    return 0;
}
