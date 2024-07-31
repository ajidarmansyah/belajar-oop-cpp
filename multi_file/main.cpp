#include <iostream>
#include <string>
#include "hero.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Hero SangonomiyaKokomi = Hero("Sangonomiya Kokomi", "suport hiler", 120);
    Hero KamisatoAyaka = Hero("Kamisato Ayaka", "DPS", 115);
    SangonomiyaKokomi.display();
    KamisatoAyaka.display();
    return 0;
}
