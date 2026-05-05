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

int main()
{
    mahasiswa mhs(113, "Rizqi Tukang Makan"); //memanggil constructor dg parameter
    return 0;
}