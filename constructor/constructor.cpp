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

};

int main()
{
    
}
