#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string name;
        int exp;
        int level;
        int attakPower;
    
    public:
        Hero(const char *name){
            this->name = name;
            this->exp = 0;
            this->level = 1;
            this->attakPower = 100;
        }

        void display(){
            cout << "Nama        :" <<this->name << endl;
            cout << "Attak Power :" <<this->attakPower << endl;
            cout << "exp         :" <<this->exp << endl;
            cout << "Level       :" <<this->level << endl;
        }

        // getter
        string getName(){
            return this->name;
        }

        // setter
        void addexp(int expset){
            int maxExp = 100;
            this->exp += expset;
            if (this->exp >= maxExp)
            {
                this->level++;
                this->attakPower += 100;
                cout<< "LEVEL UP" << endl;
                this->exp = 0;
            }
            
        }
};

int main(int argc, char const *argv[])
{
    Hero qiqi = Hero("Qiqi");
    cout << qiqi.getName() << endl;
    qiqi.addexp(25);
    qiqi.addexp(50);
    qiqi.addexp(15);
    qiqi.addexp(25);
    qiqi.display();

    return 0;
}
