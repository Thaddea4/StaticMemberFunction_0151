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

