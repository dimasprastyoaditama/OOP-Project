#include <iostream>
using namespace std;

class mahasiswa {
public:
   int nim;
   string nama;
   float nilai;

void printData() {
    cout << "nim" << nim << endl;
    cout << "nama" << nama << endl;
    cout << "nilai" << nilai << endl;
  }
};

int main() {
    nim = 20240140114;
    nama = 'Dimas';
    nilai = 87,6;
};

int main () {
    mahasiswa mhs;
    mhs.nim = 20240140114;
    mhs.nama = "Dimas";
    mhs.nilai = 87,6;

}



