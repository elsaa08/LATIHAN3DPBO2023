// #include <bits/stdc++.h>
// #include <bits/stdc++.h>
#include "Human.cpp"

// using namespace std;
/*
Saya [Elsa Nabiilah] [2108805]
mengerjakan LATIHAN 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/
class sivitas : public Human
{

private:
    string univ;
    string email;

public:
    // constructor
    sivitas()
    {
        univ = " ";
        email = " ";
    }
    // deklarasi parameter yang sudah inheritance dengan class Human
    sivitas(string Nik, string nama, char jk, string univ, string email)
        : Human(Nik, nama, jk)
    {
        this->univ = univ;
        this->email = email;
    }

    // getter setter method
    string getuniv()
    {
        return this->univ;
    }

    void setuniv(string univ)
    {
        this->univ = univ;
    }

    string getemail()
    {
        return this->email;
    }

    void setemail(string email)
    {
        this->email = email;
    }
    // destructor
    ~sivitas() {}
};
