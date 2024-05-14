#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNIm(int pNIm) { nim = pNIm; /*Definisi Function*/ }
    static int getNim() { return nim; /*Definisi Function*/ }

    Mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int Mahasiswa::nim = 156;

void Mahasiswa::setID()
{
    id = ++nim;
}

void Mahasiswa::printAll()
{
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main()
{
    Mahasiswa mhs1("Sri dadi");
    Mahasiswa mhs2("Budi jatmiko");
    Mahasiswa::setNIm(9);   //mengakses nim melalui static member function "setNim"
    Mahasiswa mhs3("Andil janu");
    Mahasiswa mhs4("Joko wahono");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses dari luar object = " << Mahasiswa::getNim() << endl; //mengakses nim 
    system("Puase");

    return 0;
}
