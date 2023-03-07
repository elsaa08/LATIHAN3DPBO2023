// #include <iostream>
// #include <string>
#include <bits/stdc++.h>
#include "sivitas.cpp"
// #include "prodi.cpp"
//  #include "prodi.cpp"
/*
Saya [Elsa Nabiilah] [2108805]
mengerjakan LATIHAN 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/
class prodi
{

private:
    string prog;
    string kode;
    vector<course> list;

public:
    // constructor
    prodi()
    {
        prog = "";
        kode = "";
    }
    // deklarasi variabel parameter
    prodi(string prog, string kode, course cr)
    {
        this->prog = prog;
        this->kode = kode;
        this->list.push_back(cr);
    }

    // getter setter method
    string getprog()
    {
        return this->prog;
    }

    void setprog(string prog)
    {
        this->prog = prog;
    }

    string getkode()
    {
        return this->kode;
    }

    void setkode(string kode)
    {
        this->kode = kode;
    }

    vector<course> getcr()
    {
        return this->list;
    }
    void setcr(course cr)
    {
        this->list.push_back(cr);
    }
    // prosedur print
    void printprodi()
    {
        cout << " Program Studi      : " << this->getprog() << endl;
        cout << " Kode               : " << this->getkode() << endl;
        cout << " Daftar mata kuliah : " << endl;
        for (int i = 0; i < this->list.size(); i++)
        {
            cout << " > " << i + 1;
            cout << " > " + this->list[i].getmatkul() << endl;
        }
    }
    // destructor
    ~prodi() {}
};
class Mahasiswa : public sivitas
{
private:
    // deklarasi variabel
    string Nim;
    string fak;
    vector<course> list;
    prodi prod;

public:
    // constructor
    Mahasiswa() : sivitas()
    {
        Nim = "";
        fak = "";
    }
    // deklarasi parameter dengan inheritance sivitas
    Mahasiswa(string Nik, string nama, char jk, string univ, string email, string Nim, string fak, course cr, prodi prod)
        : sivitas(Nik, nama, jk, univ, email)
    {
        this->Nim = Nim;
        this->fak = fak;

        this->list.push_back(cr);
        this->prod = prod;
    }
    // getter setter method
    string getNim()
    {
        // getter nim
        return this->Nim;
    }

    void setnim(string Nim)
    {
        // setter nim
        this->Nim = Nim;
    }

    string getfak()
    {
        // getter fakultas
        return this->fak;
    }

    void setfak(string fak)
    { // setter fakultas
        this->fak = fak;
    }
    // setter setter komposisi course
    vector<course> getcr()
    {
        return this->list;
    }
    void setcr(course cr)
    {
        this->list.push_back(cr);
    }
    prodi getprod()
    {
        return this->prod;
    }
    void setprod(prodi prod)
    {
        this->prod = prod;
    }
    // prosedur print
    void printmahasiswa()
    {
        // cout << " ============= DATA MAHASISWA BERPRESTASI ==========" << endl;
        cout << " NIK                     : " << this->getnik() << endl;
        cout << " Nama                    : " << this->getnama() << endl;
        cout << " Jenis Kelamin           : " << this->getjk() << endl;
        cout << " Asal Universitas        : " << this->getuniv() << endl;
        cout << " email                   : " << this->getemail() << endl;
        cout << " NIM                     : " << this->getNim() << endl;
        cout << " Fakultas                : " << this->getfak() << endl;
        cout << " Prodi                   : " << this->getprod().getprog() << endl;
        // cout << " Program Studi           : " << this->getpr() << endl;
        cout << " Daftar mata kuliah : " << endl;
        for (int i = 0; i < this->list.size(); i++) // looping sebanyak matkul pada course yang telah di push
        {
            cout << " > " << i + 1;
            cout << " > " + this->list[i].getmatkul() << endl; // print matkul
        }
    }
    // destructor
    ~Mahasiswa() {}
};

class dosen : public sivitas
{
private:
    string Nip, fakdosen, pend, keahlian;
    vector<course> listt;
    prodi prod;

public:
    // constructor
    dosen() : sivitas()
    {
        Nip = "";
        fakdosen = "";
        pend = "";
        keahlian = "";
    }
    // deklarasi parameter
    dosen(string Nik, string nama, char jk, string univ, string email, string Nip, string fakdosen, string pend, string keahlian, course cr, prodi prod)
        : sivitas(Nik, nama, jk, univ, email)
    {
        this->Nip = Nip;
        this->fakdosen = fakdosen;
        this->pend = pend;
        this->keahlian = keahlian;
        this->listt.push_back(cr);
        this->prod = prod;
    }
    // getter setter method
    string getNip()
    {
        // getter nip
        return this->Nip;
    }

    void setnip(string Nip)
    {
        // setter nip
        this->Nip = Nip;
    }

    string getfakdos()
    {
        // getter fakultas
        return this->fakdosen;
    }

    void setfakdos(string fakdosen)
    { // setter fakultas
        this->fakdosen = fakdosen;
    }

    string getpend()
    {
        // getter penddidikan terakhir
        return this->pend;
    }

    void setpend(string pend)
    { // setter pendidikan terakhir
        this->pend = pend;
    }

    string getkeahlian()
    {
        // getter keahlian
        return this->keahlian;
    }

    void setkeahlian(string keahlian)
    { // setter keahlian
        this->keahlian = keahlian;
    }

    vector<course> getcrdsn()
    {
        return this->listt;
    }
    void setcrdsn(course cr)
    {
        this->listt.push_back(cr);
    }
    prodi getprod()
    {
        return this->prod;
    }
    void setprod(prodi prod)
    {
        this->prod = prod;
    }
    // prosedur print
    void printdosen()
    {
        // cout << " ============= DATA MAHASISWA BERPRESTASI ==========" << endl;
        cout << " NIK                : " << this->getnik() << endl;
        cout << " Nama               : " << this->getnama() << endl;
        cout << " Jenis Kelamin      : " << this->getjk() << endl;
        cout << " Asal Universitas   : " << this->getuniv() << endl;
        cout << " email              : " << this->getemail() << endl;
        cout << " NIP                : " << this->getNip() << endl;
        cout << " Fakultas           : " << this->getfakdos() << endl;
        cout << " Pendidikan Terakhir: " << this->getpend() << endl;
        cout << " Keahlian           : " << this->getkeahlian() << endl;
        cout << " Program Studi      : " << this->getprod().getprog() << endl;
        cout << " Daftar mata kuliah yang diampu : " << endl;
        for (int i = 0; i < this->listt.size(); i++)
        {
            cout << " > " << i + 1;
            cout << " > " + this->listt[i].getmatkul() << endl;
        }
    }
    // destructor
    ~dosen() {}
};