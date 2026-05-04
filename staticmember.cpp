#include <iostream>
using namespace std;

class Mahasiswa {
    
public:
static int nim;
int id;
string nama;

void setID();
void printA11();

Mahasiswa(string pnama) :nama(pnama) {
    setID();
}
};

int Mahasiswa::nim = 10;

void Mahasiswa::setID(){
    id = ++nim;
};

void Mahasiswa::printA11() {

    cout << "ID : " << id << endl;
    cout << "Nama :" << nama << endl;
    cout << endl;
};

int main() {
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Asroni");
    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswa mhs4("Joko Purbo");

    mhs1.printA11();
    mhs2.printA11();
    mhs3.printA11();
    mhs4.printA11();

    return 0;
}
