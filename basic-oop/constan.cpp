#include <iostream>
#include <string>

using namespace std;

class Hero{
    public:
        string name;
    
    public:
        Hero(const char* name){
            this->name = name;
        }

        // member funtion harus const juga ingin dipanggil oleh class yang bertipe const
        void display() const {
            cout << this->name << endl;
        }

        string getName(){
            return this->name;
        }

        // member funtion ini tidak dapat digunakan oleh class yang bertipe const
        void setName(const char* name){
            this->name = name;
        }
};


int main(int argc, char const *argv[])
{
    Hero hero1 = Hero("Ahmad");
    hero1.display();
    const Hero hero2 = Hero("Ujang");
    hero2.display();

    return 0;
}
