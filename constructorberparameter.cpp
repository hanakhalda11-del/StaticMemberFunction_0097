#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
    public:
        mahasiswa(int nim, string nama); //constructor dengan parameter
};

//definisi constructor dg parameter
mahasiswa::mahasiswa(int nim, string nama)
{
    cout << "constructor dg parameter terpanggil" << endl;
    cout << "nim :" << nim << endl;
    cout << "nama :" << nama << endl;
}

