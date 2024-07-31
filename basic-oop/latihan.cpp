#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string jurusan;

        Mahasiswa(string nama, string jurusan){
            Mahasiswa::nama = nama;
            Mahasiswa::jurusan = jurusan;
        }

        string stringify(){
            return "\n" + nama + " " + jurusan;
        }

};

class DataBase{
    public:
        ifstream in;
        ofstream out;
        string fileName;

        DataBase(const char* fileName){
            DataBase::fileName = fileName;
        }

        void save(Mahasiswa data){
            DataBase::out.open(DataBase::fileName, ios::app);
            DataBase::out << data.stringify();
            DataBase::out.close();
        }

        void showall(){
            DataBase::in.open(DataBase::fileName, ios::in);
            string nama, jurusan;
            int index = 1;

            while (!DataBase::in.eof())
            {
                DataBase::in >> nama;
                DataBase::in >> jurusan;

                cout << index++ << ".\t";
                cout << nama << "\t";
                cout << jurusan << endl;
            }
            DataBase::in.close();
        }
};

int main(int argc, char const *argv[])
{
    string nama, jurusan;
    cout << "===DATA BASE MAHASISWA===" << endl;
    cout << "Input nama mahasiswa : ";
    cin >> nama;
    cout << "Input jurusan mahasiswa : ";
    cin >> jurusan;

    Mahasiswa dataMahasiswa = Mahasiswa(nama, jurusan);
    DataBase data = DataBase("data.txt");

    data.save(dataMahasiswa);
    data.showall();
    return 0;
}
