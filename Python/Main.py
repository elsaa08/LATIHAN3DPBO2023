from course import course
from Mahasiswa import Mahasiswa
from dosen import dosen
from Progstud import Progstud
# /*
# Saya [Elsa Nabiilah] [2108805]
# mengerjakan LATIHAN 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.
# */
# declaration variabel list/array of object
temp = []
temp2 = []
temp3 = []
temp0 = []
temp4 = []
# hardcode course
cr1 = course("DPBO")
cr2 = course("Provis")
cr3 = course("Alpro")
cr4 = course("Strukdat")
cr5 = course("Datmin")
cr6 = course("Andal")
cr7 = course("Prokon")
cr8 = course("sistem operasi")
cr9 = course("Big Data")
cr10 = course("Skripsi")

# replace course and append it
# sesuai kebutuhan composition per object
temp.append(cr1)
temp.append(cr2)
temp.append(cr3)
temp.append(cr4)
temp.append(cr5)

temp0.append(cr4)
temp0.append(cr9)
temp0.append(cr8)
temp0.append(cr1)
temp0.append(cr5)

temp2.append(cr1)
temp2.append(cr2)
temp2.append(cr3)
temp2.append(cr4)
temp2.append(cr5)
temp2.append(cr6)
temp2.append(cr7)
temp2.append(cr8)
temp2.append(cr9)
temp2.append(cr10)

temp3.append(cr1)
temp3.append(cr3)
temp3.append(cr4)
temp3.append(cr10)

temp4.append(cr3)
temp4.append(cr5)

# list array variabel
list = []
# Hardcode class mahasiswa
m0 = Mahasiswa("320429480xxxx", "Elsa", "P", "UPI",
               "el@upi.edu", "2108805", "FPMIPA", temp)
m01 = Mahasiswa("3204293663xxxx", "Nabiilah", "P", "UPI",
                "nab@upi.edu", "2108795", "FPMIPA", temp)
m02 = Mahasiswa("372829292xx", "sachan", "P", "UPI",
                "sa@upi.edu", "268795", "FPMIPA", temp)

# hardcode class Program studi
m1 = Progstud("Ilmu komputer", "LK403", temp2)
m4 = Progstud("Fisika", "F099", temp4)

# hardcode class dosen
m2 = dosen("320429430", "Rosa Ariani", 'P',
           "UPI", "rosa@upi.edu", "1223433", "FPMIPA", "S2", "Ngoding", temp3)
m22 = dosen("320429430", "Yudi wibisono", 'L',
            "UPI", "yudi@upi.edu", "990982828", "FPMIPA", "S2", "Ngedata", temp0)

# ~~~~~~~~~~~~~OUTPUTTT~~~~~~~~~~~~~~~~~~~~~~

# kalo di class mahasiswa itu pakein 1 objek komposisi yang sama di masing-masing objek yang berbeda
# contohnya 3 mahasiswa yang memiliki objek COURSE (matkul yang diampu) sama.
print("======= DAFTAR MAHASISWA BERPRESTASI =======")
list.append(m0)
list.append(m01)
list.append(m02)
for i in range(len(list)):
    print("-------------")
    print("| >> No : " + str(i+1) + " |")
    print("-------------")
    print("Nik                      : " + list[i].getnik())
    print("Nama                     : " + list[i].getnama())
    print("Jenis Kelamin            : " + list[i].getjk())
    print("Asal Universitas         : " + list[i].getuniv())
    print("email                    : " + list[i].getemail())
    print("NIM                      : " + list[i].getnim())
    print("Fakultas                 : " + list[i].getfak())
print(" *Mata kuliah yang dikontrak oleh masing masing Mahasiswa : ")
for i in range(len(temp)):  # looping sebanyak adanya data yang telah masuk sesuai objek
    print(" " + str(i+1) + ".>> :" + temp[i].getmatkul())
print("++++++++++++++++++++++++++++++++++++++++++++")
print()

# nah kalo dosen bisa ambil objek komposisi berbeda tiap dosennya
print("======= DAFTAR DOSEN =======")
print("Nik                      : " + m2.getnik())
print("Nama                     : " + m2.getnama())
print("Jenis Kelamin            : " + m2.getjk())
print("Asal Universitas         : " + m2.getuniv())
print("email                    : " + m2.getemail())
print("NIP                      : " + m2.getnip())
print("Fakultas                 : " + m2.getfakdosen())
print("*Mata kuliah yang diampu : ")
# looping sebanyak adanya data yang telah masuk sesuai objek
for i, dsn in enumerate(m2.getcr()):  # ambil komposisi objek pertama
    print(".>> :" + dsn.getmatkul())

# isi objek dosen kedua
print("----------------------------------------------")
print("Nik                      : " + m22.getnik())
print("Nama                     : " + m22.getnama())
print("Jenis Kelamin            : " + m22.getjk())
print("Asal Universitas         : " + m22.getuniv())
print("email                    : " + m22.getemail())
print("NIP                      : " + m22.getnip())
print("Fakultas                 : " + m22.getfakdosen())
print("*Mata kuliah yang diampu : ")
# looping sebanyak adanya data yang telah masuk sesuai objek
for i, dsn in enumerate(m22.getcr()):  # ambil komposisi objek dosen kedua
    print(".>> :" + dsn.getmatkul())

print()
print("+++++++++++++++++++++++++++++++++++++++++++")
print("======= DAFTAR Program Studi =======")
print("Program studi             : " + m1.getnamaprod())
print("Kode                      : " + m1.getkode())
print("*Daftar Mata kuliah yang tersedia : ")
for i, matkul in enumerate(m2.getcr()):
    print(".>> :" + matkul.getmatkul())

print()
# print("+++++++++++++++++++++++++++++++++++++++++++")
# print("======= DAFTAR Program Studi =======")
print("Program studi             : " + m4.getnamaprod())
print("Kode                      : " + m4.getkode())
print("*Daftar Mata kuliah yang tersedia : ")
for i, matkul in enumerate(m4.getcr()):
    print(".>> :" + matkul.getmatkul())
