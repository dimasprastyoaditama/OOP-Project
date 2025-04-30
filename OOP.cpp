#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    string nama;
    float nilai;

void printData ()
{
    cout << "NIM:" << nim << endl;
    cout << "Nama:" << nama << endl;
    cout << "Nilai:" << nilai << endl;
    }
};
int main () {
    mahasiswa mhs;
    mhs.nim = 114;
    mhs.nama = "Dimas";
    mhs.nilai = 80.5;

    mhs.printData();
}






