#include <iostream>
#include <string>
#include <bits/stdc++.h>
/*
Saya [Elsa Nabiilah] [2108805]
mengerjakan LATIHAN 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/
using namespace std;

class Human
{
private:
    string Nik;
    string nama;
    char jk;

public:
    // constructor
    Human()
    {
        Nik = "";
        nama = "";
        jk = '-';
    }
    // deklarasi parameter
    Human(string Nik, string nama, char jk)
    {
        this->Nik = Nik;
        this->nama = nama;
        this->jk = jk;
    }
    // getter setter method
    string getnik()
    {
        return Nik;
    }

    void setnik(string Nik)
    {
        this->Nik = Nik;
    }

    string getnama()
    {
        return nama;
    }
    void setnama(string nama)
    {
        this->nama = nama;
    }

    char getjk()
    {
        return jk;
    }

    void setjk(char jk)
    {
        this->jk = jk;
    }

    // destructor
    ~Human() {}
};
