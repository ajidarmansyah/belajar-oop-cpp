#ifndef _HERO
#define _HERO

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

#endif