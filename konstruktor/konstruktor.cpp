#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
private:
    int nim;
    string nama;
public:
    Mahasiswa();
    Mahasiswa(int);
    Mahasiswa(string);
    Mahasiswa(int iNim, string iNama);
    void cetak();
};

Mahasiswa::Mahasiswa()
{
    nim = 0;
    nama = "";
}

Mahasiswa::Mahasiswa(int iNIm)
{
    nim = iNIm;
}

Mahasiswa::Mahasiswa(string iNama)
{
    nim = 0;
    nama = iNama;
}

Mahasiswa::Mahasiswa(int iNim, string iNama)
{
    nim = iNim;
    nama = iNama;
}



int main()
{
    
}

