#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
    
private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printA11();

    static void setNim(int pnim) {
        nim = pnim;
    };

    static int getNim() {
        return nim;
    }

    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    };
};

int Mahasiswa::nim = 0;

void Mahasiswa::setID() {
    id = ++nim;
}

void Mahasiswa::printA11() {
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main(){

    Mahasiswa mhs1("Sri Dadi");
    Mahasiswa mhs2("Budi Jatniko");
    Mahasiswa::setNim(9);
    Mahasiswa mhs3("Andi Janu");
    Mahasiswa mhs4("Joko Wahono");

    mhs1.printA11();
    mhs2.printA11();
    mhs3.printA11();
    mhs4.printA11();

    cout << "Akses dari luar object = " << Mahasiswa::getNim() << endl;
    system("pause");
    
    return 0;
}
