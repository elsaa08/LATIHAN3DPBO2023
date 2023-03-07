#include <bits/stdc++.h>
// import file
#include "course.cpp"
#include "Mahasiswa.cpp"
#include <vector>
using namespace std;
/*
Saya [Elsa Nabiilah] [2108805]
mengerjakan LATIHAN 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/
int main(int argc, char const *argv[])
{
    // membuat list tampungan per class
    vector<Mahasiswa> tmhs;
    vector<dosen> tdsn;
    vector<prodi> tprd;
    // deklarasi variabel untuk mengisi class
    //--------------Proses Class Course-------------------
    course cr, cr1, cr2, cr3, cr4, cr5, cr6, cr7, cr8, cr9, cr10, cr11, cr12, cr13;
    // hardcode set course (setmatakuliah)
    cr.setmatkul("DPBO");
    cr1.setmatkul("Algoritma dan Pemograman");
    cr2.setmatkul("Struktur Data");
    cr3.setmatkul("Data Mining");
    cr4.setmatkul("Analisi desain Algoritma");
    cr5.setmatkul("Big Data Analysist");
    cr6.setmatkul("Proyek Konsultasi");
    cr7.setmatkul("Program Visual dan Piranti bergerak");
    cr8.setmatkul("Sistem Operasi");
    cr9.setmatkul("Metode Penelitian");
    cr10.setmatkul("Desain Web");
    cr11.setmatkul("Teori Bahasa dan Automata");
    cr12.setmatkul("Kriptografi");
    cr13.setmatkul("Jaringan Komputer");

    //-----------------PROSES CLASS PRODI------------------------
    prodi pd; // deklarasi untuk new list prodi objek 1
    // hardcode setmethod yang ada pada class prodi
    pd.setprog("Ilmu Komputer");
    pd.setkode("IK456");
    // membuat list isi matkul pada class prodi yang suda di komposisi
    pd.setcr(cr);
    pd.setcr(cr1);
    pd.setcr(cr2);
    pd.setcr(cr3);
    pd.setcr(cr4);
    pd.setcr(cr5);
    pd.setcr(cr6);
    tprd.push_back(pd); // ngepush semua set method prodi pada objek 1
    prodi pd1;          // deklarasi untuk new list prodi objek 2
    // hardcode set method prodi
    pd1.setprog("Pendidikan Ilmu Komputer");
    pd1.setkode("PIK456");
    // membuat list isi matkul pada class prodi yang suda di komposisi
    pd1.setcr(cr7);
    pd1.setcr(cr8);
    pd1.setcr(cr9);
    pd1.setcr(cr10);
    pd1.setcr(cr11);
    pd1.setcr(cr12);
    pd1.setcr(cr13);
    tprd.push_back(pd1); // ngepush isi list semua method pada objek kedua
    //=====output========
    cout << " ============= DATA PROGRAM STUDI ==========" << endl;
    for (int i = 0; i < tprd.size(); i++) // looping sebanyak adanya data yang telah masuk sesuai objek
    {
        cout << "*Prodi Ke - " << i + 1 << endl; // menghitung objek
        tprd[i].printprodi();                    // memanggil prosedur print
        cout << "==========================" << endl;
    }
    cout << endl;
    //----------------Proses Class Mahasiswa----------------
    Mahasiswa mhs; // deklarasi untuk new list pada objek 1
    // hardcode semua set method yang ada pada class mahasiswa
    mhs.setnik("30429480xxxx");
    mhs.setnama("Elsa");
    mhs.setjk('P');
    mhs.setuniv("Universitas Pendidikan Indonesia");
    mhs.setfak("FPMIPA");
    mhs.setemail("el@upi.edu");
    mhs.setnim("2108805");
    mhs.setprod(pd1); // mengisi prodi mahasiswa dari class prodi hasil dari composite
    // memanggil isi dari matakuliah pada class course yang sudah di kompisisi dengan class mahasiswa
    // sesuai dengan kebutuhan matakuliah yang dikontrak per mahasiswa
    mhs.setcr(cr);
    mhs.setcr(cr1);
    mhs.setcr(cr2);
    mhs.setcr(cr3);
    mhs.setcr(cr4);
    mhs.setcr(cr5);
    tmhs.push_back(mhs); // ngepush isi objek mahasiswa 1

    Mahasiswa mhs1; // deklarasi untuk new list pada objek 2
    // hardcode semua set method yang ada pada class mahasiswa
    mhs1.setnik("320429280xxx");
    mhs1.setnama("Nabiilah");
    mhs1.setjk('P');
    mhs1.setuniv("Universitas Indonesia");
    mhs1.setemail("elnabiilah@upi.edu");
    mhs1.setnim("2108805");
    mhs1.setfak("FMIPA");
    mhs1.setprod(pd); // mengisi prodi mahasiswa dari class prodi hasil dari composite
    // memanggil isi dari matakuliah pada class course yang sudah di kompisisi dengan class mahasiswa
    // sesuai dengan kebutuhan matakuliah yang dikontrak per mahasiswa
    mhs1.setcr(cr6);
    mhs1.setcr(cr7);
    mhs1.setcr(cr8);
    mhs1.setcr(cr);
    mhs1.setcr(cr11);
    mhs1.setcr(cr10);
    tmhs.push_back(mhs1); // ngepush objek 2
                          //---------------output----------------------
    cout << " ============= DATA MAHASISWA BERPRESTASI ==========" << endl;
    for (int i = 0; i < tmhs.size(); i++) // looping sebanyak adanya data yang telah masuk sesuai objek
    {
        cout << "*Mahasiswa Ke - " << i + 1 << endl; // menghitung objek
        tmhs[i].printmahasiswa();                    // memanggil prosedur print
        cout << "==========================" << endl;
    }
    cout << endl;

    dosen dsn; // deklarasi untuk new list pada objek 1
    // hardcode semua isi set method pada class dosen
    dsn.setnik("3207890755xxx");
    dsn.setnama("Jeon Wonwoo M.T");
    dsn.setjk('L');
    dsn.setuniv("Pledis University");
    dsn.setemail("ww@gmail.com");
    dsn.setnip("2134555099xx");
    dsn.setfakdos("FPTK");
    dsn.setpend("S3");
    dsn.setkeahlian("Words of Affirmation");
    // mengisi list data matakuliah sesuai dengan yang diampu oleh dosen pada objek tsb
    dsn.setcrdsn(cr1);
    dsn.setcrdsn(cr);
    dsn.setcrdsn(cr2);
    dsn.setcrdsn(cr4);
    dsn.setprod(pd1);    // mengisi prodi dosen dari class prodi yang sudah di composite
    tdsn.push_back(dsn); // ngepush semua set

    // prosess yang sama
    dosen dsn1;
    dsn1.setnik("3207898888xxx");
    dsn1.setnama("Kim Junkyu M.kom");
    dsn1.setjk('L');
    dsn1.setuniv("YG University");
    dsn1.setemail("ajun@gmail.com");
    dsn1.setnip("2990455667xx");
    dsn1.setfakdos("FMIPA");
    dsn1.setpend("S3");
    dsn1.setkeahlian("Quality Time");
    dsn1.setcrdsn(cr10);
    dsn1.setcrdsn(cr11);
    dsn1.setcrdsn(cr12);
    dsn1.setcrdsn(cr13);
    dsn1.setprod(pd); // mengisi prodi dosen dari composite class prodi
    tdsn.push_back(dsn1);
    //------------------------output------------
    cout << " ============= DATA DOSEN ==========" << endl;
    for (int i = 0; i < tdsn.size(); i++) // looping sebanyak adanya data yang telah masuk sesuai objek
    {
        cout << "*Dosen Ke - " << i + 1 << endl; // menghitung per objek
        tdsn[i].printdosen();                    // memanggil prosedur print
        cout << "==========================" << endl;
    }

    return 0;
}