#include <iostream>
#include <string>

using namespace std;

class ClassType{
    public:
        string datastr;
        double dataDouble;

        ClassType(const char *datastr, double dataDouble){
            // menggunakan namespace
            ClassType::datastr = datastr;
            // menggunakan this -> this adalah pointer dari object ClassType
            this->dataDouble = dataDouble;
        }
};

class Hero{
    public:
        string nama;
        int power;
        string role;

        Hero(const char *nama, int &power, const char *role){
            this->nama = nama;
            this->power = power;
            this->role = role;
        }

        void disply(){
            cout << "Nama Hero  : " << this->nama << endl;
            cout << "Power Hero : " << this->power << endl;
            cout << "Role Hero  : " << this->role << endl;
        }

        int serang(string name){
            if (name == "buff biru")
            {
                this->power = this->power + 150;
            }else if(name == "buff merah") {
                this->power = this->power + 120;
            }

            cout << "Power hiro bertambah = " <<this->power << endl;
            
        }

};

int main(int argc, char const *argv[])
{
    // ClassType *object1 = new ClassType("object 1", 0.5);
    // cout << object1 -> dataDouble << endl;
    // cout << object1 -> datastr << endl;
    int power = 100;

    Hero ling = Hero("Ling", power, "Asassin");
    ling.serang("buff merah");
    ling.serang("buff biru");
    ling.disply();
    return 0;
}
