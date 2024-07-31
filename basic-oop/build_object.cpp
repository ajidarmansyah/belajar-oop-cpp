#include <iostream>
#include <string>

using namespace std;

class DenganConstructor{
    public:
        string data;

        DenganConstructor(const char* data){
            DenganConstructor::data = data;
        }

        void show(){
            cout << "ini " << DenganConstructor::data << endl;
        }
};

class TanpaConstructor{
    public:
        string data;

        void show(){
            cout << "ini " << TanpaConstructor::data << endl;
        }
};

int main(int argc, char const *argv[])
{
    // deklarasi object dengan constructor
    DenganConstructor object1 = DenganConstructor("object 1");
    object1.show();

    // deklarasi object tanpa constructor
    TanpaConstructor object2;
    object2.data = "object 2";
    object2.show();

    // cara lain deklarasi object dengan constructor
    DenganConstructor object3("object 3");
    object3.show();

    // deklarasi object pada heep memory
    DenganConstructor* object4 = new DenganConstructor("object 4");
    (*object4).show(); // menggunakan dereference
    object4 -> show(); // arrow opperator, mapping function dan attribute
    cout << object4 ->data << endl;
    return 0;

    DenganConstructor* object5;
    object5 = new DenganConstructor("object 5");
    object5 -> show();
}
