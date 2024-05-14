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

int main()
{
    
}

