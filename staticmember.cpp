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
