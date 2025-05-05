#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }
};

int main()
{
    mahasiswa mhs; // Object mhs
    mhs.nim = 2024;
    mhs.showNim(); // Member Access Operator

    mahasiswa &refMhs = mhs; // Pointer Reference reMhs
    refMhs.nim = 2;
    mhs.showNim();

    mahasiswa *pMhs = &mhs; // pointer Deference pMhs
    pMhs->nim = 3;
    pMhs->showNim();
    return 0;
}