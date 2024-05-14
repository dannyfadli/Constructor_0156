#include <iostream>
#include <string>
using namespace std;

class Mahasiswa 
{
public:
    static int nim;
    int id;
    string nama;

    void setID();
    void printALl();

    Mahasiswa(string pnama) :nama(pnama)
    {
        setID();
    }
};

int Mahasiswa::nim = 156;

void Mahasiswa::setID()
{
    id = ++nim;
}

void Mahasiswa::printALl()
{
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}


int main()
{
    Mahasiswa mhs1("Lia kurnia");
    Mahasiswa mhs2 
}

