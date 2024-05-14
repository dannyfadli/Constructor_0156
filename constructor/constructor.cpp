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
    
}
