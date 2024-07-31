#include <iostream>
#include <string>

class Player{
    private:
        std::string name;
    
    public:
        Player(std::string &name){
            this->name = name;
        }

        friend std::ostream &operator<<(std::ostream &output, Player &obj);
};

/*
overlod operator digunakan untuk mengubah perilaku operator basic pada c++
seperti operator aritmatika (+,-,/,*,%), operator logika (||,&&,!=) dan
lain-lain
*/

// contoh dari overlod operator 
// CATATAN : KETENTUAN UNTUK MENGOVERLOD BISA CARI DI GOOGLE
std::ostream &operator<<(std::ostream &output, Player &obj){
    output << "Hallo good night " << obj.name << std::endl;
    return output;
}

int main(int argc, char const *argv[])
{
    std::string dataInput;
    std::cout << "masukan input nama : ";
    std::cin >> dataInput;
    Player player1 = Player(dataInput);

    std::cout << player1;
    return 0;
}
