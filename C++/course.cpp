/*
Saya [Elsa Nabiilah] [2108805]
mengerjakan LATIHAN 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/
#include <iostream>
#include <string>
using namespace std;

class course
{

private:
    string matkul;

public:
    // constructor
    course()
    {
        matkul = "";
    }
    course(string matkul)
    {
        this->matkul = matkul;
    }

    // getter setter method
    string getmatkul()
    {
        return this->matkul;
    }

    void setmatkul(string matkul)
    {
        this->matkul = matkul;
    }
    // destructor
    ~course() {}
};
